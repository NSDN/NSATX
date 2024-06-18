#include "ch552.h"
#include "sys.h"

__sbit __at (0xB0) KEY; // P30
__sbit __at (0xB1) RST; // P31
__sbit __at (0xB2) ACT; // P32
__sbit __at (0x97) CTL; // P17

__bit pwr_t = 0, rst_t = 0;
#define STATE_PWOFF 0
#define STATE_PWON  1
#define STATE_RESET 2
uint8_t state = STATE_PWOFF;
uint8_t press = 0;

void __tim2_interrupt() __interrupt (INT_NO_TMR2) __using (1);

void main() {
    P3_DIR_PU &= ~(0x07); P3_MOD_OC &= ~(0x03); // KEY, RST
    P3_MOD_OC |= 0x04; // ACT
    P1_DIR_PU |= 0x80; P1_MOD_OC &= ~(0x80); // CTL

    ACT = 1;
    CTL = 0;

    sysClockConfig();
    delay(5);

    sysTickConfig();
    EA = 1;

    while (1) {
        switch (state) {
            case STATE_PWOFF:
                CTL = 0;

                if (KEY == 0 && !pwr_t) {
                    pwr_t = 1;
                    state = STATE_PWON;
                }
                if (KEY != 0 && pwr_t)
                    pwr_t = 0;
                break;
            case STATE_PWON:
                if (KEY != 0 && pwr_t)
                    pwr_t = 0;
                if (pwr_t == 0) {
                    CTL = 1;

                    if (KEY == 0) {
                        press += 1;
                        wait(100);
                        if (press >= 50) {
                            press = 0;
                            pwr_t = 1;
                            state = STATE_PWOFF;
                        }
                    } else {
                        press = 0;
                    }
                }
                
                if (RST == 0 && !rst_t) {
                    rst_t = 1;
                    state = STATE_RESET;
                }
                break;
            case STATE_RESET:
                if (RST != 0 && rst_t)
                    rst_t = 0;
                if (rst_t == 0) {
                    CTL = 0;
                    for (uint8_t i = 0; i < 6; i++) {
                        ACT = !ACT;
                        wait(500);
                    }
                    CTL = 1;
                    state = STATE_PWON;
                }
                break;
            default:
                state = STATE_PWOFF;
                break;
        }
    }
    
}
