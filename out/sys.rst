                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.0.0 #11528 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module sys
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl ___tim2_interrupt
                                     12 	.globl _UIF_BUS_RST
                                     13 	.globl _UIF_TRANSFER
                                     14 	.globl _UIF_SUSPEND
                                     15 	.globl _UIF_FIFO_OV
                                     16 	.globl _U_SIE_FREE
                                     17 	.globl _U_TOG_OK
                                     18 	.globl _U_IS_NAK
                                     19 	.globl _ADC_CHAN0
                                     20 	.globl _ADC_CHAN1
                                     21 	.globl _CMP_CHAN
                                     22 	.globl _ADC_START
                                     23 	.globl _ADC_IF
                                     24 	.globl _CMP_IF
                                     25 	.globl _CMPO
                                     26 	.globl _U1RI
                                     27 	.globl _U1TI
                                     28 	.globl _U1RB8
                                     29 	.globl _U1TB8
                                     30 	.globl _U1REN
                                     31 	.globl _U1SMOD
                                     32 	.globl _U1SM0
                                     33 	.globl _S0_R_FIFO
                                     34 	.globl _S0_T_FIFO
                                     35 	.globl _S0_FREE
                                     36 	.globl _S0_IF_BYTE
                                     37 	.globl _S0_IF_FIRST
                                     38 	.globl _S0_IF_OV
                                     39 	.globl _S0_FST_ACT
                                     40 	.globl _CP_RL2
                                     41 	.globl _C_T2
                                     42 	.globl _TR2
                                     43 	.globl _EXEN2
                                     44 	.globl _TCLK
                                     45 	.globl _RCLK
                                     46 	.globl _EXF2
                                     47 	.globl _CAP1F
                                     48 	.globl _TF2
                                     49 	.globl _RI
                                     50 	.globl _TI
                                     51 	.globl _RB8
                                     52 	.globl _TB8
                                     53 	.globl _REN
                                     54 	.globl _SM2
                                     55 	.globl _SM1
                                     56 	.globl _SM0
                                     57 	.globl _IT0
                                     58 	.globl _IE0
                                     59 	.globl _IT1
                                     60 	.globl _IE1
                                     61 	.globl _TR0
                                     62 	.globl _TF0
                                     63 	.globl _TR1
                                     64 	.globl _TF1
                                     65 	.globl _RXD
                                     66 	.globl _PWM1_
                                     67 	.globl _TXD
                                     68 	.globl _PWM2_
                                     69 	.globl _AIN3
                                     70 	.globl _VBUS1
                                     71 	.globl _INT0
                                     72 	.globl _TXD1_
                                     73 	.globl _INT1
                                     74 	.globl _T0
                                     75 	.globl _RXD1_
                                     76 	.globl _PWM2
                                     77 	.globl _T1
                                     78 	.globl _UDP
                                     79 	.globl _UDM
                                     80 	.globl _TIN0
                                     81 	.globl _CAP1
                                     82 	.globl _T2
                                     83 	.globl _AIN0
                                     84 	.globl _VBUS2
                                     85 	.globl _TIN1
                                     86 	.globl _CAP2
                                     87 	.globl _T2EX
                                     88 	.globl _RXD_
                                     89 	.globl _TXD_
                                     90 	.globl _AIN1
                                     91 	.globl _UCC1
                                     92 	.globl _TIN2
                                     93 	.globl _SCS
                                     94 	.globl _CAP1_
                                     95 	.globl _T2_
                                     96 	.globl _AIN2
                                     97 	.globl _UCC2
                                     98 	.globl _TIN3
                                     99 	.globl _PWM1
                                    100 	.globl _MOSI
                                    101 	.globl _TIN4
                                    102 	.globl _RXD1
                                    103 	.globl _MISO
                                    104 	.globl _TIN5
                                    105 	.globl _TXD1
                                    106 	.globl _SCK
                                    107 	.globl _IE_SPI0
                                    108 	.globl _IE_TKEY
                                    109 	.globl _IE_USB
                                    110 	.globl _IE_ADC
                                    111 	.globl _IE_UART1
                                    112 	.globl _IE_PWMX
                                    113 	.globl _IE_GPIO
                                    114 	.globl _IE_WDOG
                                    115 	.globl _PX0
                                    116 	.globl _PT0
                                    117 	.globl _PX1
                                    118 	.globl _PT1
                                    119 	.globl _PS
                                    120 	.globl _PT2
                                    121 	.globl _PL_FLAG
                                    122 	.globl _PH_FLAG
                                    123 	.globl _EX0
                                    124 	.globl _ET0
                                    125 	.globl _EX1
                                    126 	.globl _ET1
                                    127 	.globl _ES
                                    128 	.globl _ET2
                                    129 	.globl _E_DIS
                                    130 	.globl _EA
                                    131 	.globl _P
                                    132 	.globl _F1
                                    133 	.globl _OV
                                    134 	.globl _RS0
                                    135 	.globl _RS1
                                    136 	.globl _F0
                                    137 	.globl _AC
                                    138 	.globl _CY
                                    139 	.globl _UEP1_DMA_H
                                    140 	.globl _UEP1_DMA_L
                                    141 	.globl _UEP1_DMA
                                    142 	.globl _UEP0_DMA_H
                                    143 	.globl _UEP0_DMA_L
                                    144 	.globl _UEP0_DMA
                                    145 	.globl _UEP2_3_MOD
                                    146 	.globl _UEP4_1_MOD
                                    147 	.globl _UEP3_DMA_H
                                    148 	.globl _UEP3_DMA_L
                                    149 	.globl _UEP3_DMA
                                    150 	.globl _UEP2_DMA_H
                                    151 	.globl _UEP2_DMA_L
                                    152 	.globl _UEP2_DMA
                                    153 	.globl _USB_DEV_AD
                                    154 	.globl _USB_CTRL
                                    155 	.globl _USB_INT_EN
                                    156 	.globl _UEP4_T_LEN
                                    157 	.globl _UEP4_CTRL
                                    158 	.globl _UEP0_T_LEN
                                    159 	.globl _UEP0_CTRL
                                    160 	.globl _USB_RX_LEN
                                    161 	.globl _USB_MIS_ST
                                    162 	.globl _USB_INT_ST
                                    163 	.globl _USB_INT_FG
                                    164 	.globl _UEP3_T_LEN
                                    165 	.globl _UEP3_CTRL
                                    166 	.globl _UEP2_T_LEN
                                    167 	.globl _UEP2_CTRL
                                    168 	.globl _UEP1_T_LEN
                                    169 	.globl _UEP1_CTRL
                                    170 	.globl _UDEV_CTRL
                                    171 	.globl _USB_C_CTRL
                                    172 	.globl _TKEY_DATH
                                    173 	.globl _TKEY_DATL
                                    174 	.globl _TKEY_DAT
                                    175 	.globl _TKEY_CTRL
                                    176 	.globl _ADC_DATA
                                    177 	.globl _ADC_CFG
                                    178 	.globl _ADC_CTRL
                                    179 	.globl _SBAUD1
                                    180 	.globl _SBUF1
                                    181 	.globl _SCON1
                                    182 	.globl _SPI0_SETUP
                                    183 	.globl _SPI0_CK_SE
                                    184 	.globl _SPI0_CTRL
                                    185 	.globl _SPI0_DATA
                                    186 	.globl _SPI0_STAT
                                    187 	.globl _PWM_CK_SE
                                    188 	.globl _PWM_CTRL
                                    189 	.globl _PWM_DATA1
                                    190 	.globl _PWM_DATA2
                                    191 	.globl _T2CAP1H
                                    192 	.globl _T2CAP1L
                                    193 	.globl _T2CAP1
                                    194 	.globl _TH2
                                    195 	.globl _TL2
                                    196 	.globl _T2COUNT
                                    197 	.globl _RCAP2H
                                    198 	.globl _RCAP2L
                                    199 	.globl _RCAP2
                                    200 	.globl _T2MOD
                                    201 	.globl _T2CON
                                    202 	.globl _SBUF
                                    203 	.globl _SCON
                                    204 	.globl _TH1
                                    205 	.globl _TH0
                                    206 	.globl _TL1
                                    207 	.globl _TL0
                                    208 	.globl _TMOD
                                    209 	.globl _TCON
                                    210 	.globl _XBUS_AUX
                                    211 	.globl _PIN_FUNC
                                    212 	.globl _P3_DIR_PU
                                    213 	.globl _P3_MOD_OC
                                    214 	.globl _P3
                                    215 	.globl _P2
                                    216 	.globl _P1_DIR_PU
                                    217 	.globl _P1_MOD_OC
                                    218 	.globl _P1
                                    219 	.globl _ROM_CTRL
                                    220 	.globl _ROM_DATA_H
                                    221 	.globl _ROM_DATA_L
                                    222 	.globl _ROM_DATA
                                    223 	.globl _ROM_ADDR_H
                                    224 	.globl _ROM_ADDR_L
                                    225 	.globl _ROM_ADDR
                                    226 	.globl _GPIO_IE
                                    227 	.globl _IP_EX
                                    228 	.globl _IE_EX
                                    229 	.globl _IP
                                    230 	.globl _IE
                                    231 	.globl _WDOG_COUNT
                                    232 	.globl _RESET_KEEP
                                    233 	.globl _WAKE_CTRL
                                    234 	.globl _CLOCK_CFG
                                    235 	.globl _PCON
                                    236 	.globl _GLOBAL_CFG
                                    237 	.globl _SAFE_MOD
                                    238 	.globl _DPH
                                    239 	.globl _DPL
                                    240 	.globl _SP
                                    241 	.globl _B
                                    242 	.globl _ACC
                                    243 	.globl _PSW
                                    244 	.globl _sysTickCount
                                    245 	.globl _sysClockConfig
                                    246 	.globl _delay_us
                                    247 	.globl _delay
                                    248 	.globl _sysTickConfig
                                    249 	.globl _wait
                                    250 ;--------------------------------------------------------
                                    251 ; special function registers
                                    252 ;--------------------------------------------------------
                                    253 	.area RSEG    (ABS,DATA)
      000000                        254 	.org 0x0000
                           0000D0   255 _PSW	=	0x00d0
                           0000E0   256 _ACC	=	0x00e0
                           0000F0   257 _B	=	0x00f0
                           000081   258 _SP	=	0x0081
                           000082   259 _DPL	=	0x0082
                           000083   260 _DPH	=	0x0083
                           0000A1   261 _SAFE_MOD	=	0x00a1
                           0000B1   262 _GLOBAL_CFG	=	0x00b1
                           000087   263 _PCON	=	0x0087
                           0000B9   264 _CLOCK_CFG	=	0x00b9
                           0000A9   265 _WAKE_CTRL	=	0x00a9
                           0000FE   266 _RESET_KEEP	=	0x00fe
                           0000FF   267 _WDOG_COUNT	=	0x00ff
                           0000A8   268 _IE	=	0x00a8
                           0000B8   269 _IP	=	0x00b8
                           0000E8   270 _IE_EX	=	0x00e8
                           0000E9   271 _IP_EX	=	0x00e9
                           0000C7   272 _GPIO_IE	=	0x00c7
                           008584   273 _ROM_ADDR	=	0x8584
                           000084   274 _ROM_ADDR_L	=	0x0084
                           000085   275 _ROM_ADDR_H	=	0x0085
                           008F8E   276 _ROM_DATA	=	0x8f8e
                           00008E   277 _ROM_DATA_L	=	0x008e
                           00008F   278 _ROM_DATA_H	=	0x008f
                           000086   279 _ROM_CTRL	=	0x0086
                           000090   280 _P1	=	0x0090
                           000092   281 _P1_MOD_OC	=	0x0092
                           000093   282 _P1_DIR_PU	=	0x0093
                           0000A0   283 _P2	=	0x00a0
                           0000B0   284 _P3	=	0x00b0
                           000096   285 _P3_MOD_OC	=	0x0096
                           000097   286 _P3_DIR_PU	=	0x0097
                           0000C6   287 _PIN_FUNC	=	0x00c6
                           0000A2   288 _XBUS_AUX	=	0x00a2
                           000088   289 _TCON	=	0x0088
                           000089   290 _TMOD	=	0x0089
                           00008A   291 _TL0	=	0x008a
                           00008B   292 _TL1	=	0x008b
                           00008C   293 _TH0	=	0x008c
                           00008D   294 _TH1	=	0x008d
                           000098   295 _SCON	=	0x0098
                           000099   296 _SBUF	=	0x0099
                           0000C8   297 _T2CON	=	0x00c8
                           0000C9   298 _T2MOD	=	0x00c9
                           00CBCA   299 _RCAP2	=	0xcbca
                           0000CA   300 _RCAP2L	=	0x00ca
                           0000CB   301 _RCAP2H	=	0x00cb
                           00CDCC   302 _T2COUNT	=	0xcdcc
                           0000CC   303 _TL2	=	0x00cc
                           0000CD   304 _TH2	=	0x00cd
                           00CFCE   305 _T2CAP1	=	0xcfce
                           0000CE   306 _T2CAP1L	=	0x00ce
                           0000CF   307 _T2CAP1H	=	0x00cf
                           00009B   308 _PWM_DATA2	=	0x009b
                           00009C   309 _PWM_DATA1	=	0x009c
                           00009D   310 _PWM_CTRL	=	0x009d
                           00009E   311 _PWM_CK_SE	=	0x009e
                           0000F8   312 _SPI0_STAT	=	0x00f8
                           0000F9   313 _SPI0_DATA	=	0x00f9
                           0000FA   314 _SPI0_CTRL	=	0x00fa
                           0000FB   315 _SPI0_CK_SE	=	0x00fb
                           0000FC   316 _SPI0_SETUP	=	0x00fc
                           0000C0   317 _SCON1	=	0x00c0
                           0000C1   318 _SBUF1	=	0x00c1
                           0000C2   319 _SBAUD1	=	0x00c2
                           000080   320 _ADC_CTRL	=	0x0080
                           00009A   321 _ADC_CFG	=	0x009a
                           00009F   322 _ADC_DATA	=	0x009f
                           0000C3   323 _TKEY_CTRL	=	0x00c3
                           00C5C4   324 _TKEY_DAT	=	0xc5c4
                           0000C4   325 _TKEY_DATL	=	0x00c4
                           0000C5   326 _TKEY_DATH	=	0x00c5
                           000091   327 _USB_C_CTRL	=	0x0091
                           0000D1   328 _UDEV_CTRL	=	0x00d1
                           0000D2   329 _UEP1_CTRL	=	0x00d2
                           0000D3   330 _UEP1_T_LEN	=	0x00d3
                           0000D4   331 _UEP2_CTRL	=	0x00d4
                           0000D5   332 _UEP2_T_LEN	=	0x00d5
                           0000D6   333 _UEP3_CTRL	=	0x00d6
                           0000D7   334 _UEP3_T_LEN	=	0x00d7
                           0000D8   335 _USB_INT_FG	=	0x00d8
                           0000D9   336 _USB_INT_ST	=	0x00d9
                           0000DA   337 _USB_MIS_ST	=	0x00da
                           0000DB   338 _USB_RX_LEN	=	0x00db
                           0000DC   339 _UEP0_CTRL	=	0x00dc
                           0000DD   340 _UEP0_T_LEN	=	0x00dd
                           0000DE   341 _UEP4_CTRL	=	0x00de
                           0000DF   342 _UEP4_T_LEN	=	0x00df
                           0000E1   343 _USB_INT_EN	=	0x00e1
                           0000E2   344 _USB_CTRL	=	0x00e2
                           0000E3   345 _USB_DEV_AD	=	0x00e3
                           00E5E4   346 _UEP2_DMA	=	0xe5e4
                           0000E4   347 _UEP2_DMA_L	=	0x00e4
                           0000E5   348 _UEP2_DMA_H	=	0x00e5
                           00E7E6   349 _UEP3_DMA	=	0xe7e6
                           0000E6   350 _UEP3_DMA_L	=	0x00e6
                           0000E7   351 _UEP3_DMA_H	=	0x00e7
                           0000EA   352 _UEP4_1_MOD	=	0x00ea
                           0000EB   353 _UEP2_3_MOD	=	0x00eb
                           00EDEC   354 _UEP0_DMA	=	0xedec
                           0000EC   355 _UEP0_DMA_L	=	0x00ec
                           0000ED   356 _UEP0_DMA_H	=	0x00ed
                           00EFEE   357 _UEP1_DMA	=	0xefee
                           0000EE   358 _UEP1_DMA_L	=	0x00ee
                           0000EF   359 _UEP1_DMA_H	=	0x00ef
                                    360 ;--------------------------------------------------------
                                    361 ; special function bits
                                    362 ;--------------------------------------------------------
                                    363 	.area RSEG    (ABS,DATA)
      000000                        364 	.org 0x0000
                           0000D7   365 _CY	=	0x00d7
                           0000D6   366 _AC	=	0x00d6
                           0000D5   367 _F0	=	0x00d5
                           0000D4   368 _RS1	=	0x00d4
                           0000D3   369 _RS0	=	0x00d3
                           0000D2   370 _OV	=	0x00d2
                           0000D1   371 _F1	=	0x00d1
                           0000D0   372 _P	=	0x00d0
                           0000AF   373 _EA	=	0x00af
                           0000AE   374 _E_DIS	=	0x00ae
                           0000AD   375 _ET2	=	0x00ad
                           0000AC   376 _ES	=	0x00ac
                           0000AB   377 _ET1	=	0x00ab
                           0000AA   378 _EX1	=	0x00aa
                           0000A9   379 _ET0	=	0x00a9
                           0000A8   380 _EX0	=	0x00a8
                           0000BF   381 _PH_FLAG	=	0x00bf
                           0000BE   382 _PL_FLAG	=	0x00be
                           0000BD   383 _PT2	=	0x00bd
                           0000BC   384 _PS	=	0x00bc
                           0000BB   385 _PT1	=	0x00bb
                           0000BA   386 _PX1	=	0x00ba
                           0000B9   387 _PT0	=	0x00b9
                           0000B8   388 _PX0	=	0x00b8
                           0000EF   389 _IE_WDOG	=	0x00ef
                           0000EE   390 _IE_GPIO	=	0x00ee
                           0000ED   391 _IE_PWMX	=	0x00ed
                           0000EC   392 _IE_UART1	=	0x00ec
                           0000EB   393 _IE_ADC	=	0x00eb
                           0000EA   394 _IE_USB	=	0x00ea
                           0000E9   395 _IE_TKEY	=	0x00e9
                           0000E8   396 _IE_SPI0	=	0x00e8
                           000097   397 _SCK	=	0x0097
                           000097   398 _TXD1	=	0x0097
                           000097   399 _TIN5	=	0x0097
                           000096   400 _MISO	=	0x0096
                           000096   401 _RXD1	=	0x0096
                           000096   402 _TIN4	=	0x0096
                           000095   403 _MOSI	=	0x0095
                           000095   404 _PWM1	=	0x0095
                           000095   405 _TIN3	=	0x0095
                           000095   406 _UCC2	=	0x0095
                           000095   407 _AIN2	=	0x0095
                           000094   408 _T2_	=	0x0094
                           000094   409 _CAP1_	=	0x0094
                           000094   410 _SCS	=	0x0094
                           000094   411 _TIN2	=	0x0094
                           000094   412 _UCC1	=	0x0094
                           000094   413 _AIN1	=	0x0094
                           000093   414 _TXD_	=	0x0093
                           000092   415 _RXD_	=	0x0092
                           000091   416 _T2EX	=	0x0091
                           000091   417 _CAP2	=	0x0091
                           000091   418 _TIN1	=	0x0091
                           000091   419 _VBUS2	=	0x0091
                           000091   420 _AIN0	=	0x0091
                           000090   421 _T2	=	0x0090
                           000090   422 _CAP1	=	0x0090
                           000090   423 _TIN0	=	0x0090
                           0000B7   424 _UDM	=	0x00b7
                           0000B6   425 _UDP	=	0x00b6
                           0000B5   426 _T1	=	0x00b5
                           0000B4   427 _PWM2	=	0x00b4
                           0000B4   428 _RXD1_	=	0x00b4
                           0000B4   429 _T0	=	0x00b4
                           0000B3   430 _INT1	=	0x00b3
                           0000B2   431 _TXD1_	=	0x00b2
                           0000B2   432 _INT0	=	0x00b2
                           0000B2   433 _VBUS1	=	0x00b2
                           0000B2   434 _AIN3	=	0x00b2
                           0000B1   435 _PWM2_	=	0x00b1
                           0000B1   436 _TXD	=	0x00b1
                           0000B0   437 _PWM1_	=	0x00b0
                           0000B0   438 _RXD	=	0x00b0
                           00008F   439 _TF1	=	0x008f
                           00008E   440 _TR1	=	0x008e
                           00008D   441 _TF0	=	0x008d
                           00008C   442 _TR0	=	0x008c
                           00008B   443 _IE1	=	0x008b
                           00008A   444 _IT1	=	0x008a
                           000089   445 _IE0	=	0x0089
                           000088   446 _IT0	=	0x0088
                           00009F   447 _SM0	=	0x009f
                           00009E   448 _SM1	=	0x009e
                           00009D   449 _SM2	=	0x009d
                           00009C   450 _REN	=	0x009c
                           00009B   451 _TB8	=	0x009b
                           00009A   452 _RB8	=	0x009a
                           000099   453 _TI	=	0x0099
                           000098   454 _RI	=	0x0098
                           0000CF   455 _TF2	=	0x00cf
                           0000CF   456 _CAP1F	=	0x00cf
                           0000CE   457 _EXF2	=	0x00ce
                           0000CD   458 _RCLK	=	0x00cd
                           0000CC   459 _TCLK	=	0x00cc
                           0000CB   460 _EXEN2	=	0x00cb
                           0000CA   461 _TR2	=	0x00ca
                           0000C9   462 _C_T2	=	0x00c9
                           0000C8   463 _CP_RL2	=	0x00c8
                           0000FF   464 _S0_FST_ACT	=	0x00ff
                           0000FE   465 _S0_IF_OV	=	0x00fe
                           0000FD   466 _S0_IF_FIRST	=	0x00fd
                           0000FC   467 _S0_IF_BYTE	=	0x00fc
                           0000FB   468 _S0_FREE	=	0x00fb
                           0000FA   469 _S0_T_FIFO	=	0x00fa
                           0000F8   470 _S0_R_FIFO	=	0x00f8
                           0000C7   471 _U1SM0	=	0x00c7
                           0000C5   472 _U1SMOD	=	0x00c5
                           0000C4   473 _U1REN	=	0x00c4
                           0000C3   474 _U1TB8	=	0x00c3
                           0000C2   475 _U1RB8	=	0x00c2
                           0000C1   476 _U1TI	=	0x00c1
                           0000C0   477 _U1RI	=	0x00c0
                           000087   478 _CMPO	=	0x0087
                           000086   479 _CMP_IF	=	0x0086
                           000085   480 _ADC_IF	=	0x0085
                           000084   481 _ADC_START	=	0x0084
                           000083   482 _CMP_CHAN	=	0x0083
                           000081   483 _ADC_CHAN1	=	0x0081
                           000080   484 _ADC_CHAN0	=	0x0080
                           0000DF   485 _U_IS_NAK	=	0x00df
                           0000DE   486 _U_TOG_OK	=	0x00de
                           0000DD   487 _U_SIE_FREE	=	0x00dd
                           0000DC   488 _UIF_FIFO_OV	=	0x00dc
                           0000DA   489 _UIF_SUSPEND	=	0x00da
                           0000D9   490 _UIF_TRANSFER	=	0x00d9
                           0000D8   491 _UIF_BUS_RST	=	0x00d8
                                    492 ;--------------------------------------------------------
                                    493 ; overlayable register banks
                                    494 ;--------------------------------------------------------
                                    495 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        496 	.ds 8
                                    497 	.area REG_BANK_1	(REL,OVR,DATA)
      000008                        498 	.ds 8
                                    499 ;--------------------------------------------------------
                                    500 ; internal ram data
                                    501 ;--------------------------------------------------------
                                    502 	.area DSEG    (DATA)
                                    503 ;--------------------------------------------------------
                                    504 ; overlayable items in internal ram 
                                    505 ;--------------------------------------------------------
                                    506 	.area	OSEG    (OVR,DATA)
      000010                        507 _wait_sloc0_1_0:
      000010                        508 	.ds 2
      000012                        509 _wait_sloc1_1_0:
      000012                        510 	.ds 4
      000016                        511 _wait_sloc2_1_0:
      000016                        512 	.ds 4
                                    513 ;--------------------------------------------------------
                                    514 ; indirectly addressable internal ram data
                                    515 ;--------------------------------------------------------
                                    516 	.area ISEG    (DATA)
      00001A                        517 _sysTickCount::
      00001A                        518 	.ds 4
                                    519 ;--------------------------------------------------------
                                    520 ; absolute internal ram data
                                    521 ;--------------------------------------------------------
                                    522 	.area IABS    (ABS,DATA)
                                    523 	.area IABS    (ABS,DATA)
                                    524 ;--------------------------------------------------------
                                    525 ; bit data
                                    526 ;--------------------------------------------------------
                                    527 	.area BSEG    (BIT)
                                    528 ;--------------------------------------------------------
                                    529 ; paged external ram data
                                    530 ;--------------------------------------------------------
                                    531 	.area PSEG    (PAG,XDATA)
                                    532 ;--------------------------------------------------------
                                    533 ; external ram data
                                    534 ;--------------------------------------------------------
                                    535 	.area XSEG    (XDATA)
      000000                        536 _delay_us_n_65536_5:
      000000                        537 	.ds 2
      000002                        538 _delay_n_65536_8:
      000002                        539 	.ds 2
      000004                        540 _wait_n_65536_14:
      000004                        541 	.ds 2
      000006                        542 _wait_now_65536_15:
      000006                        543 	.ds 4
                                    544 ;--------------------------------------------------------
                                    545 ; absolute external ram data
                                    546 ;--------------------------------------------------------
                                    547 	.area XABS    (ABS,XDATA)
                                    548 ;--------------------------------------------------------
                                    549 ; external initialized ram data
                                    550 ;--------------------------------------------------------
                                    551 	.area XISEG   (XDATA)
                                    552 	.area HOME    (CODE)
                                    553 	.area GSINIT0 (CODE)
                                    554 	.area GSINIT1 (CODE)
                                    555 	.area GSINIT2 (CODE)
                                    556 	.area GSINIT3 (CODE)
                                    557 	.area GSINIT4 (CODE)
                                    558 	.area GSINIT5 (CODE)
                                    559 	.area GSINIT  (CODE)
                                    560 	.area GSFINAL (CODE)
                                    561 	.area CSEG    (CODE)
                                    562 ;--------------------------------------------------------
                                    563 ; global & static initialisations
                                    564 ;--------------------------------------------------------
                                    565 	.area HOME    (CODE)
                                    566 	.area GSINIT  (CODE)
                                    567 	.area GSFINAL (CODE)
                                    568 	.area GSINIT  (CODE)
                                    569 ;	E:\Works\NSATX\sys.c:93: volatile uint32_i sysTickCount = 0;
      00008E 78 1A            [12]  570 	mov	r0,#_sysTickCount
      000090 E4               [12]  571 	clr	a
      000091 F6               [12]  572 	mov	@r0,a
      000092 08               [12]  573 	inc	r0
      000093 F6               [12]  574 	mov	@r0,a
      000094 08               [12]  575 	inc	r0
      000095 F6               [12]  576 	mov	@r0,a
      000096 08               [12]  577 	inc	r0
      000097 F6               [12]  578 	mov	@r0,a
                                    579 ;--------------------------------------------------------
                                    580 ; Home
                                    581 ;--------------------------------------------------------
                                    582 	.area HOME    (CODE)
                                    583 	.area HOME    (CODE)
                                    584 ;--------------------------------------------------------
                                    585 ; code
                                    586 ;--------------------------------------------------------
                                    587 	.area CSEG    (CODE)
                                    588 ;------------------------------------------------------------
                                    589 ;Allocation info for local variables in function 'sysClockConfig'
                                    590 ;------------------------------------------------------------
                                    591 ;	E:\Works\NSATX\sys.c:5: void sysClockConfig() {
                                    592 ;	-----------------------------------------
                                    593 ;	 function sysClockConfig
                                    594 ;	-----------------------------------------
      000166                        595 _sysClockConfig:
                           000007   596 	ar7 = 0x07
                           000006   597 	ar6 = 0x06
                           000005   598 	ar5 = 0x05
                           000004   599 	ar4 = 0x04
                           000003   600 	ar3 = 0x03
                           000002   601 	ar2 = 0x02
                           000001   602 	ar1 = 0x01
                           000000   603 	ar0 = 0x00
                                    604 ;	E:\Works\NSATX\sys.c:6: SAFE_MOD = 0x55;
      000166 75 A1 55         [24]  605 	mov	_SAFE_MOD,#0x55
                                    606 ;	E:\Works\NSATX\sys.c:7: SAFE_MOD = 0xAA;
      000169 75 A1 AA         [24]  607 	mov	_SAFE_MOD,#0xaa
                                    608 ;	E:\Works\NSATX\sys.c:8: CLOCK_CFG |= bOSC_EN_INT;
      00016C 43 B9 80         [24]  609 	orl	_CLOCK_CFG,#0x80
                                    610 ;	E:\Works\NSATX\sys.c:17: SAFE_MOD = 0x55;
      00016F 75 A1 55         [24]  611 	mov	_SAFE_MOD,#0x55
                                    612 ;	E:\Works\NSATX\sys.c:18: SAFE_MOD = 0xAA;
      000172 75 A1 AA         [24]  613 	mov	_SAFE_MOD,#0xaa
                                    614 ;	E:\Works\NSATX\sys.c:19: CLOCK_CFG &= ~MASK_SYS_CK_SEL;
      000175 53 B9 F8         [24]  615 	anl	_CLOCK_CFG,#0xf8
                                    616 ;	E:\Works\NSATX\sys.c:21: SAFE_MOD = 0x55;
      000178 75 A1 55         [24]  617 	mov	_SAFE_MOD,#0x55
                                    618 ;	E:\Works\NSATX\sys.c:22: SAFE_MOD = 0xAA;
      00017B 75 A1 AA         [24]  619 	mov	_SAFE_MOD,#0xaa
                                    620 ;	E:\Works\NSATX\sys.c:27: CLOCK_CFG |= 0x05;                                  // 16MHz	
      00017E 43 B9 05         [24]  621 	orl	_CLOCK_CFG,#0x05
                                    622 ;	E:\Works\NSATX\sys.c:45: SAFE_MOD = 0x00;
      000181 75 A1 00         [24]  623 	mov	_SAFE_MOD,#0x00
                                    624 ;	E:\Works\NSATX\sys.c:46: }
      000184 22               [24]  625 	ret
                                    626 ;------------------------------------------------------------
                                    627 ;Allocation info for local variables in function 'delay_us'
                                    628 ;------------------------------------------------------------
                                    629 ;n                         Allocated with name '_delay_us_n_65536_5'
                                    630 ;------------------------------------------------------------
                                    631 ;	E:\Works\NSATX\sys.c:48: void delay_us(uint16_t n) {
                                    632 ;	-----------------------------------------
                                    633 ;	 function delay_us
                                    634 ;	-----------------------------------------
      000185                        635 _delay_us:
      000185 AF 83            [24]  636 	mov	r7,dph
      000187 E5 82            [12]  637 	mov	a,dpl
      000189 90 00 00         [24]  638 	mov	dptr,#_delay_us_n_65536_5
      00018C F0               [24]  639 	movx	@dptr,a
      00018D EF               [12]  640 	mov	a,r7
      00018E A3               [24]  641 	inc	dptr
      00018F F0               [24]  642 	movx	@dptr,a
                                    643 ;	E:\Works\NSATX\sys.c:60: while (n) {  // total = 12~13 Fsys cycles, 1uS @Fsys=12MHz
      000190 90 00 00         [24]  644 	mov	dptr,#_delay_us_n_65536_5
      000193 E0               [24]  645 	movx	a,@dptr
      000194 FE               [12]  646 	mov	r6,a
      000195 A3               [24]  647 	inc	dptr
      000196 E0               [24]  648 	movx	a,@dptr
      000197 FF               [12]  649 	mov	r7,a
      000198                        650 00101$:
      000198 EE               [12]  651 	mov	a,r6
      000199 4F               [12]  652 	orl	a,r7
      00019A 60 15            [24]  653 	jz	00108$
                                    654 ;	E:\Works\NSATX\sys.c:61: ++ SAFE_MOD;  // 2 Fsys cycles, for higher Fsys, add operation here
      00019C 05 A1            [12]  655 	inc	_SAFE_MOD
                                    656 ;	E:\Works\NSATX\sys.c:64: ++ SAFE_MOD;
      00019E 05 A1            [12]  657 	inc	_SAFE_MOD
                                    658 ;	E:\Works\NSATX\sys.c:67: ++ SAFE_MOD;
      0001A0 05 A1            [12]  659 	inc	_SAFE_MOD
                                    660 ;	E:\Works\NSATX\sys.c:82: -- n;
      0001A2 1E               [12]  661 	dec	r6
      0001A3 BE FF 01         [24]  662 	cjne	r6,#0xff,00116$
      0001A6 1F               [12]  663 	dec	r7
      0001A7                        664 00116$:
      0001A7 90 00 00         [24]  665 	mov	dptr,#_delay_us_n_65536_5
      0001AA EE               [12]  666 	mov	a,r6
      0001AB F0               [24]  667 	movx	@dptr,a
      0001AC EF               [12]  668 	mov	a,r7
      0001AD A3               [24]  669 	inc	dptr
      0001AE F0               [24]  670 	movx	@dptr,a
      0001AF 80 E7            [24]  671 	sjmp	00101$
      0001B1                        672 00108$:
      0001B1 90 00 00         [24]  673 	mov	dptr,#_delay_us_n_65536_5
      0001B4 EE               [12]  674 	mov	a,r6
      0001B5 F0               [24]  675 	movx	@dptr,a
      0001B6 EF               [12]  676 	mov	a,r7
      0001B7 A3               [24]  677 	inc	dptr
      0001B8 F0               [24]  678 	movx	@dptr,a
                                    679 ;	E:\Works\NSATX\sys.c:84: }
      0001B9 22               [24]  680 	ret
                                    681 ;------------------------------------------------------------
                                    682 ;Allocation info for local variables in function 'delay'
                                    683 ;------------------------------------------------------------
                                    684 ;n                         Allocated with name '_delay_n_65536_8'
                                    685 ;------------------------------------------------------------
                                    686 ;	E:\Works\NSATX\sys.c:86: void delay(uint16_t n) {
                                    687 ;	-----------------------------------------
                                    688 ;	 function delay
                                    689 ;	-----------------------------------------
      0001BA                        690 _delay:
      0001BA AF 83            [24]  691 	mov	r7,dph
      0001BC E5 82            [12]  692 	mov	a,dpl
      0001BE 90 00 02         [24]  693 	mov	dptr,#_delay_n_65536_8
      0001C1 F0               [24]  694 	movx	@dptr,a
      0001C2 EF               [12]  695 	mov	a,r7
      0001C3 A3               [24]  696 	inc	dptr
      0001C4 F0               [24]  697 	movx	@dptr,a
                                    698 ;	E:\Works\NSATX\sys.c:87: while (n) {
      0001C5 90 00 02         [24]  699 	mov	dptr,#_delay_n_65536_8
      0001C8 E0               [24]  700 	movx	a,@dptr
      0001C9 FE               [12]  701 	mov	r6,a
      0001CA A3               [24]  702 	inc	dptr
      0001CB E0               [24]  703 	movx	a,@dptr
      0001CC FF               [12]  704 	mov	r7,a
      0001CD                        705 00101$:
      0001CD EE               [12]  706 	mov	a,r6
      0001CE 4F               [12]  707 	orl	a,r7
      0001CF 60 1D            [24]  708 	jz	00108$
                                    709 ;	E:\Works\NSATX\sys.c:88: delay_us(1000);
      0001D1 90 03 E8         [24]  710 	mov	dptr,#0x03e8
      0001D4 C0 07            [24]  711 	push	ar7
      0001D6 C0 06            [24]  712 	push	ar6
      0001D8 12 01 85         [24]  713 	lcall	_delay_us
      0001DB D0 06            [24]  714 	pop	ar6
      0001DD D0 07            [24]  715 	pop	ar7
                                    716 ;	E:\Works\NSATX\sys.c:89: -- n;
      0001DF 1E               [12]  717 	dec	r6
      0001E0 BE FF 01         [24]  718 	cjne	r6,#0xff,00116$
      0001E3 1F               [12]  719 	dec	r7
      0001E4                        720 00116$:
      0001E4 90 00 02         [24]  721 	mov	dptr,#_delay_n_65536_8
      0001E7 EE               [12]  722 	mov	a,r6
      0001E8 F0               [24]  723 	movx	@dptr,a
      0001E9 EF               [12]  724 	mov	a,r7
      0001EA A3               [24]  725 	inc	dptr
      0001EB F0               [24]  726 	movx	@dptr,a
      0001EC 80 DF            [24]  727 	sjmp	00101$
      0001EE                        728 00108$:
      0001EE 90 00 02         [24]  729 	mov	dptr,#_delay_n_65536_8
      0001F1 EE               [12]  730 	mov	a,r6
      0001F2 F0               [24]  731 	movx	@dptr,a
      0001F3 EF               [12]  732 	mov	a,r7
      0001F4 A3               [24]  733 	inc	dptr
      0001F5 F0               [24]  734 	movx	@dptr,a
                                    735 ;	E:\Works\NSATX\sys.c:91: }
      0001F6 22               [24]  736 	ret
                                    737 ;------------------------------------------------------------
                                    738 ;Allocation info for local variables in function '__tim2_interrupt'
                                    739 ;------------------------------------------------------------
                                    740 ;	E:\Works\NSATX\sys.c:95: void __tim2_interrupt() __interrupt (INT_NO_TMR2) __using (1) {
                                    741 ;	-----------------------------------------
                                    742 ;	 function __tim2_interrupt
                                    743 ;	-----------------------------------------
      0001F7                        744 ___tim2_interrupt:
                           00000F   745 	ar7 = 0x0f
                           00000E   746 	ar6 = 0x0e
                           00000D   747 	ar5 = 0x0d
                           00000C   748 	ar4 = 0x0c
                           00000B   749 	ar3 = 0x0b
                           00000A   750 	ar2 = 0x0a
                           000009   751 	ar1 = 0x09
                           000008   752 	ar0 = 0x08
      0001F7 C0 E0            [24]  753 	push	acc
      0001F9 C0 D0            [24]  754 	push	psw
      0001FB 75 D0 08         [24]  755 	mov	psw,#0x08
                                    756 ;	E:\Works\NSATX\sys.c:96: if (TF2) {
                                    757 ;	E:\Works\NSATX\sys.c:97: TF2 = 0;
                                    758 ;	assignBit
      0001FE 10 CF 02         [24]  759 	jbc	_TF2,00109$
      000201 80 12            [24]  760 	sjmp	00103$
      000203                        761 00109$:
                                    762 ;	E:\Works\NSATX\sys.c:98: sysTickCount += 1;
      000203 78 1A            [12]  763 	mov	r0,#_sysTickCount
      000205 74 01            [12]  764 	mov	a,#0x01
      000207 26               [12]  765 	add	a,@r0
      000208 F6               [12]  766 	mov	@r0,a
      000209 E4               [12]  767 	clr	a
      00020A 08               [12]  768 	inc	r0
      00020B 36               [12]  769 	addc	a,@r0
      00020C F6               [12]  770 	mov	@r0,a
      00020D E4               [12]  771 	clr	a
      00020E 08               [12]  772 	inc	r0
      00020F 36               [12]  773 	addc	a,@r0
      000210 F6               [12]  774 	mov	@r0,a
      000211 E4               [12]  775 	clr	a
      000212 08               [12]  776 	inc	r0
      000213 36               [12]  777 	addc	a,@r0
      000214 F6               [12]  778 	mov	@r0,a
      000215                        779 00103$:
                                    780 ;	E:\Works\NSATX\sys.c:100: }
      000215 D0 D0            [24]  781 	pop	psw
      000217 D0 E0            [24]  782 	pop	acc
      000219 32               [24]  783 	reti
                                    784 ;	eliminated unneeded push/pop dpl
                                    785 ;	eliminated unneeded push/pop dph
                                    786 ;	eliminated unneeded push/pop b
                                    787 ;------------------------------------------------------------
                                    788 ;Allocation info for local variables in function 'sysTickConfig'
                                    789 ;------------------------------------------------------------
                                    790 ;	E:\Works\NSATX\sys.c:102: void sysTickConfig() {
                                    791 ;	-----------------------------------------
                                    792 ;	 function sysTickConfig
                                    793 ;	-----------------------------------------
      00021A                        794 _sysTickConfig:
                           000007   795 	ar7 = 0x07
                           000006   796 	ar6 = 0x06
                           000005   797 	ar5 = 0x05
                           000004   798 	ar4 = 0x04
                           000003   799 	ar3 = 0x03
                           000002   800 	ar2 = 0x02
                           000001   801 	ar1 = 0x01
                           000000   802 	ar0 = 0x00
                                    803 ;	E:\Works\NSATX\sys.c:103: T2MOD &= ~bT2_CLK; C_T2 = 0;
      00021A 53 C9 BF         [24]  804 	anl	_T2MOD,#0xbf
                                    805 ;	assignBit
      00021D C2 C9            [12]  806 	clr	_C_T2
                                    807 ;	E:\Works\NSATX\sys.c:104: RCAP2 = T2COUNT = 0xFFFF - (uint16_t) (FREQ_SYS / 12L / 1000L);   // 1000Hz
      00021F 75 CC CA         [24]  808 	mov	((_T2COUNT >> 0) & 0xFF),#0xca
      000222 75 CD FA         [24]  809 	mov	((_T2COUNT >> 8) & 0xFF),#0xfa
      000225 75 CA CA         [24]  810 	mov	((_RCAP2 >> 0) & 0xFF),#0xca
      000228 75 CB FA         [24]  811 	mov	((_RCAP2 >> 8) & 0xFF),#0xfa
                                    812 ;	E:\Works\NSATX\sys.c:105: TR2 = 1;
                                    813 ;	assignBit
      00022B D2 CA            [12]  814 	setb	_TR2
                                    815 ;	E:\Works\NSATX\sys.c:106: ET2 = 1;
                                    816 ;	assignBit
      00022D D2 AD            [12]  817 	setb	_ET2
                                    818 ;	E:\Works\NSATX\sys.c:107: }
      00022F 22               [24]  819 	ret
                                    820 ;------------------------------------------------------------
                                    821 ;Allocation info for local variables in function 'wait'
                                    822 ;------------------------------------------------------------
                                    823 ;n                         Allocated with name '_wait_n_65536_14'
                                    824 ;now                       Allocated with name '_wait_now_65536_15'
                                    825 ;sloc0                     Allocated with name '_wait_sloc0_1_0'
                                    826 ;sloc1                     Allocated with name '_wait_sloc1_1_0'
                                    827 ;sloc2                     Allocated with name '_wait_sloc2_1_0'
                                    828 ;------------------------------------------------------------
                                    829 ;	E:\Works\NSATX\sys.c:109: void wait(uint16_t n) {
                                    830 ;	-----------------------------------------
                                    831 ;	 function wait
                                    832 ;	-----------------------------------------
      000230                        833 _wait:
      000230 AF 83            [24]  834 	mov	r7,dph
      000232 E5 82            [12]  835 	mov	a,dpl
      000234 90 00 04         [24]  836 	mov	dptr,#_wait_n_65536_14
      000237 F0               [24]  837 	movx	@dptr,a
      000238 EF               [12]  838 	mov	a,r7
      000239 A3               [24]  839 	inc	dptr
      00023A F0               [24]  840 	movx	@dptr,a
                                    841 ;	E:\Works\NSATX\sys.c:110: uint32_t now = sysTickCount;
      00023B 78 1A            [12]  842 	mov	r0,#_sysTickCount
      00023D 90 00 06         [24]  843 	mov	dptr,#_wait_now_65536_15
      000240 E6               [12]  844 	mov	a,@r0
      000241 F0               [24]  845 	movx	@dptr,a
      000242 08               [12]  846 	inc	r0
      000243 E6               [12]  847 	mov	a,@r0
      000244 A3               [24]  848 	inc	dptr
      000245 F0               [24]  849 	movx	@dptr,a
      000246 08               [12]  850 	inc	r0
      000247 E6               [12]  851 	mov	a,@r0
      000248 A3               [24]  852 	inc	dptr
      000249 F0               [24]  853 	movx	@dptr,a
      00024A 08               [12]  854 	inc	r0
      00024B E6               [12]  855 	mov	a,@r0
      00024C A3               [24]  856 	inc	dptr
      00024D F0               [24]  857 	movx	@dptr,a
                                    858 ;	E:\Works\NSATX\sys.c:111: while ((sysTickCount - now) < n);
      00024E 90 00 06         [24]  859 	mov	dptr,#_wait_now_65536_15
      000251 E0               [24]  860 	movx	a,@dptr
      000252 F5 12            [12]  861 	mov	_wait_sloc1_1_0,a
      000254 A3               [24]  862 	inc	dptr
      000255 E0               [24]  863 	movx	a,@dptr
      000256 F5 13            [12]  864 	mov	(_wait_sloc1_1_0 + 1),a
      000258 A3               [24]  865 	inc	dptr
      000259 E0               [24]  866 	movx	a,@dptr
      00025A F5 14            [12]  867 	mov	(_wait_sloc1_1_0 + 2),a
      00025C A3               [24]  868 	inc	dptr
      00025D E0               [24]  869 	movx	a,@dptr
      00025E F5 15            [12]  870 	mov	(_wait_sloc1_1_0 + 3),a
      000260 90 00 04         [24]  871 	mov	dptr,#_wait_n_65536_14
      000263 E0               [24]  872 	movx	a,@dptr
      000264 F5 10            [12]  873 	mov	_wait_sloc0_1_0,a
      000266 A3               [24]  874 	inc	dptr
      000267 E0               [24]  875 	movx	a,@dptr
      000268 F5 11            [12]  876 	mov	(_wait_sloc0_1_0 + 1),a
      00026A                        877 00101$:
      00026A 78 1A            [12]  878 	mov	r0,#_sysTickCount
      00026C E6               [12]  879 	mov	a,@r0
      00026D C3               [12]  880 	clr	c
      00026E 95 12            [12]  881 	subb	a,_wait_sloc1_1_0
      000270 F5 16            [12]  882 	mov	_wait_sloc2_1_0,a
      000272 08               [12]  883 	inc	r0
      000273 E6               [12]  884 	mov	a,@r0
      000274 95 13            [12]  885 	subb	a,(_wait_sloc1_1_0 + 1)
      000276 F5 17            [12]  886 	mov	(_wait_sloc2_1_0 + 1),a
      000278 08               [12]  887 	inc	r0
      000279 E6               [12]  888 	mov	a,@r0
      00027A 95 14            [12]  889 	subb	a,(_wait_sloc1_1_0 + 2)
      00027C F5 18            [12]  890 	mov	(_wait_sloc2_1_0 + 2),a
      00027E 08               [12]  891 	inc	r0
      00027F E6               [12]  892 	mov	a,@r0
      000280 95 15            [12]  893 	subb	a,(_wait_sloc1_1_0 + 3)
      000282 F5 19            [12]  894 	mov	(_wait_sloc2_1_0 + 3),a
      000284 AC 10            [24]  895 	mov	r4,_wait_sloc0_1_0
      000286 AD 11            [24]  896 	mov	r5,(_wait_sloc0_1_0 + 1)
      000288 7E 00            [12]  897 	mov	r6,#0x00
      00028A 7F 00            [12]  898 	mov	r7,#0x00
      00028C C3               [12]  899 	clr	c
      00028D E5 16            [12]  900 	mov	a,_wait_sloc2_1_0
      00028F 9C               [12]  901 	subb	a,r4
      000290 E5 17            [12]  902 	mov	a,(_wait_sloc2_1_0 + 1)
      000292 9D               [12]  903 	subb	a,r5
      000293 E5 18            [12]  904 	mov	a,(_wait_sloc2_1_0 + 2)
      000295 9E               [12]  905 	subb	a,r6
      000296 E5 19            [12]  906 	mov	a,(_wait_sloc2_1_0 + 3)
      000298 9F               [12]  907 	subb	a,r7
      000299 40 CF            [24]  908 	jc	00101$
                                    909 ;	E:\Works\NSATX\sys.c:112: }
      00029B 22               [24]  910 	ret
                                    911 	.area CSEG    (CODE)
                                    912 	.area CONST   (CODE)
                                    913 	.area XINIT   (CODE)
                                    914 	.area CABS    (ABS,CODE)
