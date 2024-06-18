                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.0.0 #11528 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _wait
                                     13 	.globl _sysTickConfig
                                     14 	.globl _delay
                                     15 	.globl _sysClockConfig
                                     16 	.globl _CTL
                                     17 	.globl _ACT
                                     18 	.globl _RST
                                     19 	.globl _KEY
                                     20 	.globl _UIF_BUS_RST
                                     21 	.globl _UIF_TRANSFER
                                     22 	.globl _UIF_SUSPEND
                                     23 	.globl _UIF_FIFO_OV
                                     24 	.globl _U_SIE_FREE
                                     25 	.globl _U_TOG_OK
                                     26 	.globl _U_IS_NAK
                                     27 	.globl _ADC_CHAN0
                                     28 	.globl _ADC_CHAN1
                                     29 	.globl _CMP_CHAN
                                     30 	.globl _ADC_START
                                     31 	.globl _ADC_IF
                                     32 	.globl _CMP_IF
                                     33 	.globl _CMPO
                                     34 	.globl _U1RI
                                     35 	.globl _U1TI
                                     36 	.globl _U1RB8
                                     37 	.globl _U1TB8
                                     38 	.globl _U1REN
                                     39 	.globl _U1SMOD
                                     40 	.globl _U1SM0
                                     41 	.globl _S0_R_FIFO
                                     42 	.globl _S0_T_FIFO
                                     43 	.globl _S0_FREE
                                     44 	.globl _S0_IF_BYTE
                                     45 	.globl _S0_IF_FIRST
                                     46 	.globl _S0_IF_OV
                                     47 	.globl _S0_FST_ACT
                                     48 	.globl _CP_RL2
                                     49 	.globl _C_T2
                                     50 	.globl _TR2
                                     51 	.globl _EXEN2
                                     52 	.globl _TCLK
                                     53 	.globl _RCLK
                                     54 	.globl _EXF2
                                     55 	.globl _CAP1F
                                     56 	.globl _TF2
                                     57 	.globl _RI
                                     58 	.globl _TI
                                     59 	.globl _RB8
                                     60 	.globl _TB8
                                     61 	.globl _REN
                                     62 	.globl _SM2
                                     63 	.globl _SM1
                                     64 	.globl _SM0
                                     65 	.globl _IT0
                                     66 	.globl _IE0
                                     67 	.globl _IT1
                                     68 	.globl _IE1
                                     69 	.globl _TR0
                                     70 	.globl _TF0
                                     71 	.globl _TR1
                                     72 	.globl _TF1
                                     73 	.globl _RXD
                                     74 	.globl _PWM1_
                                     75 	.globl _TXD
                                     76 	.globl _PWM2_
                                     77 	.globl _AIN3
                                     78 	.globl _VBUS1
                                     79 	.globl _INT0
                                     80 	.globl _TXD1_
                                     81 	.globl _INT1
                                     82 	.globl _T0
                                     83 	.globl _RXD1_
                                     84 	.globl _PWM2
                                     85 	.globl _T1
                                     86 	.globl _UDP
                                     87 	.globl _UDM
                                     88 	.globl _TIN0
                                     89 	.globl _CAP1
                                     90 	.globl _T2
                                     91 	.globl _AIN0
                                     92 	.globl _VBUS2
                                     93 	.globl _TIN1
                                     94 	.globl _CAP2
                                     95 	.globl _T2EX
                                     96 	.globl _RXD_
                                     97 	.globl _TXD_
                                     98 	.globl _AIN1
                                     99 	.globl _UCC1
                                    100 	.globl _TIN2
                                    101 	.globl _SCS
                                    102 	.globl _CAP1_
                                    103 	.globl _T2_
                                    104 	.globl _AIN2
                                    105 	.globl _UCC2
                                    106 	.globl _TIN3
                                    107 	.globl _PWM1
                                    108 	.globl _MOSI
                                    109 	.globl _TIN4
                                    110 	.globl _RXD1
                                    111 	.globl _MISO
                                    112 	.globl _TIN5
                                    113 	.globl _TXD1
                                    114 	.globl _SCK
                                    115 	.globl _IE_SPI0
                                    116 	.globl _IE_TKEY
                                    117 	.globl _IE_USB
                                    118 	.globl _IE_ADC
                                    119 	.globl _IE_UART1
                                    120 	.globl _IE_PWMX
                                    121 	.globl _IE_GPIO
                                    122 	.globl _IE_WDOG
                                    123 	.globl _PX0
                                    124 	.globl _PT0
                                    125 	.globl _PX1
                                    126 	.globl _PT1
                                    127 	.globl _PS
                                    128 	.globl _PT2
                                    129 	.globl _PL_FLAG
                                    130 	.globl _PH_FLAG
                                    131 	.globl _EX0
                                    132 	.globl _ET0
                                    133 	.globl _EX1
                                    134 	.globl _ET1
                                    135 	.globl _ES
                                    136 	.globl _ET2
                                    137 	.globl _E_DIS
                                    138 	.globl _EA
                                    139 	.globl _P
                                    140 	.globl _F1
                                    141 	.globl _OV
                                    142 	.globl _RS0
                                    143 	.globl _RS1
                                    144 	.globl _F0
                                    145 	.globl _AC
                                    146 	.globl _CY
                                    147 	.globl _UEP1_DMA_H
                                    148 	.globl _UEP1_DMA_L
                                    149 	.globl _UEP1_DMA
                                    150 	.globl _UEP0_DMA_H
                                    151 	.globl _UEP0_DMA_L
                                    152 	.globl _UEP0_DMA
                                    153 	.globl _UEP2_3_MOD
                                    154 	.globl _UEP4_1_MOD
                                    155 	.globl _UEP3_DMA_H
                                    156 	.globl _UEP3_DMA_L
                                    157 	.globl _UEP3_DMA
                                    158 	.globl _UEP2_DMA_H
                                    159 	.globl _UEP2_DMA_L
                                    160 	.globl _UEP2_DMA
                                    161 	.globl _USB_DEV_AD
                                    162 	.globl _USB_CTRL
                                    163 	.globl _USB_INT_EN
                                    164 	.globl _UEP4_T_LEN
                                    165 	.globl _UEP4_CTRL
                                    166 	.globl _UEP0_T_LEN
                                    167 	.globl _UEP0_CTRL
                                    168 	.globl _USB_RX_LEN
                                    169 	.globl _USB_MIS_ST
                                    170 	.globl _USB_INT_ST
                                    171 	.globl _USB_INT_FG
                                    172 	.globl _UEP3_T_LEN
                                    173 	.globl _UEP3_CTRL
                                    174 	.globl _UEP2_T_LEN
                                    175 	.globl _UEP2_CTRL
                                    176 	.globl _UEP1_T_LEN
                                    177 	.globl _UEP1_CTRL
                                    178 	.globl _UDEV_CTRL
                                    179 	.globl _USB_C_CTRL
                                    180 	.globl _TKEY_DATH
                                    181 	.globl _TKEY_DATL
                                    182 	.globl _TKEY_DAT
                                    183 	.globl _TKEY_CTRL
                                    184 	.globl _ADC_DATA
                                    185 	.globl _ADC_CFG
                                    186 	.globl _ADC_CTRL
                                    187 	.globl _SBAUD1
                                    188 	.globl _SBUF1
                                    189 	.globl _SCON1
                                    190 	.globl _SPI0_SETUP
                                    191 	.globl _SPI0_CK_SE
                                    192 	.globl _SPI0_CTRL
                                    193 	.globl _SPI0_DATA
                                    194 	.globl _SPI0_STAT
                                    195 	.globl _PWM_CK_SE
                                    196 	.globl _PWM_CTRL
                                    197 	.globl _PWM_DATA1
                                    198 	.globl _PWM_DATA2
                                    199 	.globl _T2CAP1H
                                    200 	.globl _T2CAP1L
                                    201 	.globl _T2CAP1
                                    202 	.globl _TH2
                                    203 	.globl _TL2
                                    204 	.globl _T2COUNT
                                    205 	.globl _RCAP2H
                                    206 	.globl _RCAP2L
                                    207 	.globl _RCAP2
                                    208 	.globl _T2MOD
                                    209 	.globl _T2CON
                                    210 	.globl _SBUF
                                    211 	.globl _SCON
                                    212 	.globl _TH1
                                    213 	.globl _TH0
                                    214 	.globl _TL1
                                    215 	.globl _TL0
                                    216 	.globl _TMOD
                                    217 	.globl _TCON
                                    218 	.globl _XBUS_AUX
                                    219 	.globl _PIN_FUNC
                                    220 	.globl _P3_DIR_PU
                                    221 	.globl _P3_MOD_OC
                                    222 	.globl _P3
                                    223 	.globl _P2
                                    224 	.globl _P1_DIR_PU
                                    225 	.globl _P1_MOD_OC
                                    226 	.globl _P1
                                    227 	.globl _ROM_CTRL
                                    228 	.globl _ROM_DATA_H
                                    229 	.globl _ROM_DATA_L
                                    230 	.globl _ROM_DATA
                                    231 	.globl _ROM_ADDR_H
                                    232 	.globl _ROM_ADDR_L
                                    233 	.globl _ROM_ADDR
                                    234 	.globl _GPIO_IE
                                    235 	.globl _IP_EX
                                    236 	.globl _IE_EX
                                    237 	.globl _IP
                                    238 	.globl _IE
                                    239 	.globl _WDOG_COUNT
                                    240 	.globl _RESET_KEEP
                                    241 	.globl _WAKE_CTRL
                                    242 	.globl _CLOCK_CFG
                                    243 	.globl _PCON
                                    244 	.globl _GLOBAL_CFG
                                    245 	.globl _SAFE_MOD
                                    246 	.globl _DPH
                                    247 	.globl _DPL
                                    248 	.globl _SP
                                    249 	.globl _B
                                    250 	.globl _ACC
                                    251 	.globl _PSW
                                    252 	.globl _press
                                    253 	.globl _state
                                    254 	.globl _rst_t
                                    255 	.globl _pwr_t
                                    256 ;--------------------------------------------------------
                                    257 ; special function registers
                                    258 ;--------------------------------------------------------
                                    259 	.area RSEG    (ABS,DATA)
      000000                        260 	.org 0x0000
                           0000D0   261 _PSW	=	0x00d0
                           0000E0   262 _ACC	=	0x00e0
                           0000F0   263 _B	=	0x00f0
                           000081   264 _SP	=	0x0081
                           000082   265 _DPL	=	0x0082
                           000083   266 _DPH	=	0x0083
                           0000A1   267 _SAFE_MOD	=	0x00a1
                           0000B1   268 _GLOBAL_CFG	=	0x00b1
                           000087   269 _PCON	=	0x0087
                           0000B9   270 _CLOCK_CFG	=	0x00b9
                           0000A9   271 _WAKE_CTRL	=	0x00a9
                           0000FE   272 _RESET_KEEP	=	0x00fe
                           0000FF   273 _WDOG_COUNT	=	0x00ff
                           0000A8   274 _IE	=	0x00a8
                           0000B8   275 _IP	=	0x00b8
                           0000E8   276 _IE_EX	=	0x00e8
                           0000E9   277 _IP_EX	=	0x00e9
                           0000C7   278 _GPIO_IE	=	0x00c7
                           008584   279 _ROM_ADDR	=	0x8584
                           000084   280 _ROM_ADDR_L	=	0x0084
                           000085   281 _ROM_ADDR_H	=	0x0085
                           008F8E   282 _ROM_DATA	=	0x8f8e
                           00008E   283 _ROM_DATA_L	=	0x008e
                           00008F   284 _ROM_DATA_H	=	0x008f
                           000086   285 _ROM_CTRL	=	0x0086
                           000090   286 _P1	=	0x0090
                           000092   287 _P1_MOD_OC	=	0x0092
                           000093   288 _P1_DIR_PU	=	0x0093
                           0000A0   289 _P2	=	0x00a0
                           0000B0   290 _P3	=	0x00b0
                           000096   291 _P3_MOD_OC	=	0x0096
                           000097   292 _P3_DIR_PU	=	0x0097
                           0000C6   293 _PIN_FUNC	=	0x00c6
                           0000A2   294 _XBUS_AUX	=	0x00a2
                           000088   295 _TCON	=	0x0088
                           000089   296 _TMOD	=	0x0089
                           00008A   297 _TL0	=	0x008a
                           00008B   298 _TL1	=	0x008b
                           00008C   299 _TH0	=	0x008c
                           00008D   300 _TH1	=	0x008d
                           000098   301 _SCON	=	0x0098
                           000099   302 _SBUF	=	0x0099
                           0000C8   303 _T2CON	=	0x00c8
                           0000C9   304 _T2MOD	=	0x00c9
                           00CBCA   305 _RCAP2	=	0xcbca
                           0000CA   306 _RCAP2L	=	0x00ca
                           0000CB   307 _RCAP2H	=	0x00cb
                           00CDCC   308 _T2COUNT	=	0xcdcc
                           0000CC   309 _TL2	=	0x00cc
                           0000CD   310 _TH2	=	0x00cd
                           00CFCE   311 _T2CAP1	=	0xcfce
                           0000CE   312 _T2CAP1L	=	0x00ce
                           0000CF   313 _T2CAP1H	=	0x00cf
                           00009B   314 _PWM_DATA2	=	0x009b
                           00009C   315 _PWM_DATA1	=	0x009c
                           00009D   316 _PWM_CTRL	=	0x009d
                           00009E   317 _PWM_CK_SE	=	0x009e
                           0000F8   318 _SPI0_STAT	=	0x00f8
                           0000F9   319 _SPI0_DATA	=	0x00f9
                           0000FA   320 _SPI0_CTRL	=	0x00fa
                           0000FB   321 _SPI0_CK_SE	=	0x00fb
                           0000FC   322 _SPI0_SETUP	=	0x00fc
                           0000C0   323 _SCON1	=	0x00c0
                           0000C1   324 _SBUF1	=	0x00c1
                           0000C2   325 _SBAUD1	=	0x00c2
                           000080   326 _ADC_CTRL	=	0x0080
                           00009A   327 _ADC_CFG	=	0x009a
                           00009F   328 _ADC_DATA	=	0x009f
                           0000C3   329 _TKEY_CTRL	=	0x00c3
                           00C5C4   330 _TKEY_DAT	=	0xc5c4
                           0000C4   331 _TKEY_DATL	=	0x00c4
                           0000C5   332 _TKEY_DATH	=	0x00c5
                           000091   333 _USB_C_CTRL	=	0x0091
                           0000D1   334 _UDEV_CTRL	=	0x00d1
                           0000D2   335 _UEP1_CTRL	=	0x00d2
                           0000D3   336 _UEP1_T_LEN	=	0x00d3
                           0000D4   337 _UEP2_CTRL	=	0x00d4
                           0000D5   338 _UEP2_T_LEN	=	0x00d5
                           0000D6   339 _UEP3_CTRL	=	0x00d6
                           0000D7   340 _UEP3_T_LEN	=	0x00d7
                           0000D8   341 _USB_INT_FG	=	0x00d8
                           0000D9   342 _USB_INT_ST	=	0x00d9
                           0000DA   343 _USB_MIS_ST	=	0x00da
                           0000DB   344 _USB_RX_LEN	=	0x00db
                           0000DC   345 _UEP0_CTRL	=	0x00dc
                           0000DD   346 _UEP0_T_LEN	=	0x00dd
                           0000DE   347 _UEP4_CTRL	=	0x00de
                           0000DF   348 _UEP4_T_LEN	=	0x00df
                           0000E1   349 _USB_INT_EN	=	0x00e1
                           0000E2   350 _USB_CTRL	=	0x00e2
                           0000E3   351 _USB_DEV_AD	=	0x00e3
                           00E5E4   352 _UEP2_DMA	=	0xe5e4
                           0000E4   353 _UEP2_DMA_L	=	0x00e4
                           0000E5   354 _UEP2_DMA_H	=	0x00e5
                           00E7E6   355 _UEP3_DMA	=	0xe7e6
                           0000E6   356 _UEP3_DMA_L	=	0x00e6
                           0000E7   357 _UEP3_DMA_H	=	0x00e7
                           0000EA   358 _UEP4_1_MOD	=	0x00ea
                           0000EB   359 _UEP2_3_MOD	=	0x00eb
                           00EDEC   360 _UEP0_DMA	=	0xedec
                           0000EC   361 _UEP0_DMA_L	=	0x00ec
                           0000ED   362 _UEP0_DMA_H	=	0x00ed
                           00EFEE   363 _UEP1_DMA	=	0xefee
                           0000EE   364 _UEP1_DMA_L	=	0x00ee
                           0000EF   365 _UEP1_DMA_H	=	0x00ef
                                    366 ;--------------------------------------------------------
                                    367 ; special function bits
                                    368 ;--------------------------------------------------------
                                    369 	.area RSEG    (ABS,DATA)
      000000                        370 	.org 0x0000
                           0000D7   371 _CY	=	0x00d7
                           0000D6   372 _AC	=	0x00d6
                           0000D5   373 _F0	=	0x00d5
                           0000D4   374 _RS1	=	0x00d4
                           0000D3   375 _RS0	=	0x00d3
                           0000D2   376 _OV	=	0x00d2
                           0000D1   377 _F1	=	0x00d1
                           0000D0   378 _P	=	0x00d0
                           0000AF   379 _EA	=	0x00af
                           0000AE   380 _E_DIS	=	0x00ae
                           0000AD   381 _ET2	=	0x00ad
                           0000AC   382 _ES	=	0x00ac
                           0000AB   383 _ET1	=	0x00ab
                           0000AA   384 _EX1	=	0x00aa
                           0000A9   385 _ET0	=	0x00a9
                           0000A8   386 _EX0	=	0x00a8
                           0000BF   387 _PH_FLAG	=	0x00bf
                           0000BE   388 _PL_FLAG	=	0x00be
                           0000BD   389 _PT2	=	0x00bd
                           0000BC   390 _PS	=	0x00bc
                           0000BB   391 _PT1	=	0x00bb
                           0000BA   392 _PX1	=	0x00ba
                           0000B9   393 _PT0	=	0x00b9
                           0000B8   394 _PX0	=	0x00b8
                           0000EF   395 _IE_WDOG	=	0x00ef
                           0000EE   396 _IE_GPIO	=	0x00ee
                           0000ED   397 _IE_PWMX	=	0x00ed
                           0000EC   398 _IE_UART1	=	0x00ec
                           0000EB   399 _IE_ADC	=	0x00eb
                           0000EA   400 _IE_USB	=	0x00ea
                           0000E9   401 _IE_TKEY	=	0x00e9
                           0000E8   402 _IE_SPI0	=	0x00e8
                           000097   403 _SCK	=	0x0097
                           000097   404 _TXD1	=	0x0097
                           000097   405 _TIN5	=	0x0097
                           000096   406 _MISO	=	0x0096
                           000096   407 _RXD1	=	0x0096
                           000096   408 _TIN4	=	0x0096
                           000095   409 _MOSI	=	0x0095
                           000095   410 _PWM1	=	0x0095
                           000095   411 _TIN3	=	0x0095
                           000095   412 _UCC2	=	0x0095
                           000095   413 _AIN2	=	0x0095
                           000094   414 _T2_	=	0x0094
                           000094   415 _CAP1_	=	0x0094
                           000094   416 _SCS	=	0x0094
                           000094   417 _TIN2	=	0x0094
                           000094   418 _UCC1	=	0x0094
                           000094   419 _AIN1	=	0x0094
                           000093   420 _TXD_	=	0x0093
                           000092   421 _RXD_	=	0x0092
                           000091   422 _T2EX	=	0x0091
                           000091   423 _CAP2	=	0x0091
                           000091   424 _TIN1	=	0x0091
                           000091   425 _VBUS2	=	0x0091
                           000091   426 _AIN0	=	0x0091
                           000090   427 _T2	=	0x0090
                           000090   428 _CAP1	=	0x0090
                           000090   429 _TIN0	=	0x0090
                           0000B7   430 _UDM	=	0x00b7
                           0000B6   431 _UDP	=	0x00b6
                           0000B5   432 _T1	=	0x00b5
                           0000B4   433 _PWM2	=	0x00b4
                           0000B4   434 _RXD1_	=	0x00b4
                           0000B4   435 _T0	=	0x00b4
                           0000B3   436 _INT1	=	0x00b3
                           0000B2   437 _TXD1_	=	0x00b2
                           0000B2   438 _INT0	=	0x00b2
                           0000B2   439 _VBUS1	=	0x00b2
                           0000B2   440 _AIN3	=	0x00b2
                           0000B1   441 _PWM2_	=	0x00b1
                           0000B1   442 _TXD	=	0x00b1
                           0000B0   443 _PWM1_	=	0x00b0
                           0000B0   444 _RXD	=	0x00b0
                           00008F   445 _TF1	=	0x008f
                           00008E   446 _TR1	=	0x008e
                           00008D   447 _TF0	=	0x008d
                           00008C   448 _TR0	=	0x008c
                           00008B   449 _IE1	=	0x008b
                           00008A   450 _IT1	=	0x008a
                           000089   451 _IE0	=	0x0089
                           000088   452 _IT0	=	0x0088
                           00009F   453 _SM0	=	0x009f
                           00009E   454 _SM1	=	0x009e
                           00009D   455 _SM2	=	0x009d
                           00009C   456 _REN	=	0x009c
                           00009B   457 _TB8	=	0x009b
                           00009A   458 _RB8	=	0x009a
                           000099   459 _TI	=	0x0099
                           000098   460 _RI	=	0x0098
                           0000CF   461 _TF2	=	0x00cf
                           0000CF   462 _CAP1F	=	0x00cf
                           0000CE   463 _EXF2	=	0x00ce
                           0000CD   464 _RCLK	=	0x00cd
                           0000CC   465 _TCLK	=	0x00cc
                           0000CB   466 _EXEN2	=	0x00cb
                           0000CA   467 _TR2	=	0x00ca
                           0000C9   468 _C_T2	=	0x00c9
                           0000C8   469 _CP_RL2	=	0x00c8
                           0000FF   470 _S0_FST_ACT	=	0x00ff
                           0000FE   471 _S0_IF_OV	=	0x00fe
                           0000FD   472 _S0_IF_FIRST	=	0x00fd
                           0000FC   473 _S0_IF_BYTE	=	0x00fc
                           0000FB   474 _S0_FREE	=	0x00fb
                           0000FA   475 _S0_T_FIFO	=	0x00fa
                           0000F8   476 _S0_R_FIFO	=	0x00f8
                           0000C7   477 _U1SM0	=	0x00c7
                           0000C5   478 _U1SMOD	=	0x00c5
                           0000C4   479 _U1REN	=	0x00c4
                           0000C3   480 _U1TB8	=	0x00c3
                           0000C2   481 _U1RB8	=	0x00c2
                           0000C1   482 _U1TI	=	0x00c1
                           0000C0   483 _U1RI	=	0x00c0
                           000087   484 _CMPO	=	0x0087
                           000086   485 _CMP_IF	=	0x0086
                           000085   486 _ADC_IF	=	0x0085
                           000084   487 _ADC_START	=	0x0084
                           000083   488 _CMP_CHAN	=	0x0083
                           000081   489 _ADC_CHAN1	=	0x0081
                           000080   490 _ADC_CHAN0	=	0x0080
                           0000DF   491 _U_IS_NAK	=	0x00df
                           0000DE   492 _U_TOG_OK	=	0x00de
                           0000DD   493 _U_SIE_FREE	=	0x00dd
                           0000DC   494 _UIF_FIFO_OV	=	0x00dc
                           0000DA   495 _UIF_SUSPEND	=	0x00da
                           0000D9   496 _UIF_TRANSFER	=	0x00d9
                           0000D8   497 _UIF_BUS_RST	=	0x00d8
                           0000B0   498 _KEY	=	0x00b0
                           0000B1   499 _RST	=	0x00b1
                           0000B2   500 _ACT	=	0x00b2
                           000097   501 _CTL	=	0x0097
                                    502 ;--------------------------------------------------------
                                    503 ; overlayable register banks
                                    504 ;--------------------------------------------------------
                                    505 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        506 	.ds 8
                                    507 ;--------------------------------------------------------
                                    508 ; internal ram data
                                    509 ;--------------------------------------------------------
                                    510 	.area DSEG    (DATA)
                                    511 ;--------------------------------------------------------
                                    512 ; overlayable items in internal ram 
                                    513 ;--------------------------------------------------------
                                    514 ;--------------------------------------------------------
                                    515 ; Stack segment in internal ram 
                                    516 ;--------------------------------------------------------
                                    517 	.area	SSEG
      000021                        518 __start__stack:
      000021                        519 	.ds	1
                                    520 
                                    521 ;--------------------------------------------------------
                                    522 ; indirectly addressable internal ram data
                                    523 ;--------------------------------------------------------
                                    524 	.area ISEG    (DATA)
                                    525 ;--------------------------------------------------------
                                    526 ; absolute internal ram data
                                    527 ;--------------------------------------------------------
                                    528 	.area IABS    (ABS,DATA)
                                    529 	.area IABS    (ABS,DATA)
                                    530 ;--------------------------------------------------------
                                    531 ; bit data
                                    532 ;--------------------------------------------------------
                                    533 	.area BSEG    (BIT)
      000000                        534 _pwr_t::
      000000                        535 	.ds 1
      000001                        536 _rst_t::
      000001                        537 	.ds 1
                                    538 ;--------------------------------------------------------
                                    539 ; paged external ram data
                                    540 ;--------------------------------------------------------
                                    541 	.area PSEG    (PAG,XDATA)
                                    542 ;--------------------------------------------------------
                                    543 ; external ram data
                                    544 ;--------------------------------------------------------
                                    545 	.area XSEG    (XDATA)
                                    546 ;--------------------------------------------------------
                                    547 ; absolute external ram data
                                    548 ;--------------------------------------------------------
                                    549 	.area XABS    (ABS,XDATA)
                                    550 ;--------------------------------------------------------
                                    551 ; external initialized ram data
                                    552 ;--------------------------------------------------------
                                    553 	.area XISEG   (XDATA)
      00000A                        554 _state::
      00000A                        555 	.ds 1
      00000B                        556 _press::
      00000B                        557 	.ds 1
                                    558 	.area HOME    (CODE)
                                    559 	.area GSINIT0 (CODE)
                                    560 	.area GSINIT1 (CODE)
                                    561 	.area GSINIT2 (CODE)
                                    562 	.area GSINIT3 (CODE)
                                    563 	.area GSINIT4 (CODE)
                                    564 	.area GSINIT5 (CODE)
                                    565 	.area GSINIT  (CODE)
                                    566 	.area GSFINAL (CODE)
                                    567 	.area CSEG    (CODE)
                                    568 ;--------------------------------------------------------
                                    569 ; interrupt vector 
                                    570 ;--------------------------------------------------------
                                    571 	.area HOME    (CODE)
      000000                        572 __interrupt_vect:
      000000 02 00 31         [24]  573 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  574 	reti
      000004                        575 	.ds	7
      00000B 32               [24]  576 	reti
      00000C                        577 	.ds	7
      000013 32               [24]  578 	reti
      000014                        579 	.ds	7
      00001B 32               [24]  580 	reti
      00001C                        581 	.ds	7
      000023 32               [24]  582 	reti
      000024                        583 	.ds	7
      00002B 02 01 F7         [24]  584 	ljmp	___tim2_interrupt
                                    585 ;--------------------------------------------------------
                                    586 ; global & static initialisations
                                    587 ;--------------------------------------------------------
                                    588 	.area HOME    (CODE)
                                    589 	.area GSINIT  (CODE)
                                    590 	.area GSFINAL (CODE)
                                    591 	.area GSINIT  (CODE)
                                    592 	.globl __sdcc_gsinit_startup
                                    593 	.globl __sdcc_program_startup
                                    594 	.globl __start__stack
                                    595 	.globl __mcs51_genXINIT
                                    596 	.globl __mcs51_genXRAMCLEAR
                                    597 	.globl __mcs51_genRAMCLEAR
                                    598 ;	main.c:9: __bit pwr_t = 0, rst_t = 0;
                                    599 ;	assignBit
      00008A C2 00            [12]  600 	clr	_pwr_t
                                    601 ;	main.c:9: #define STATE_PWOFF 0
                                    602 ;	assignBit
      00008C C2 01            [12]  603 	clr	_rst_t
                                    604 	.area GSFINAL (CODE)
      000098 02 00 2E         [24]  605 	ljmp	__sdcc_program_startup
                                    606 ;--------------------------------------------------------
                                    607 ; Home
                                    608 ;--------------------------------------------------------
                                    609 	.area HOME    (CODE)
                                    610 	.area HOME    (CODE)
      00002E                        611 __sdcc_program_startup:
      00002E 02 00 9B         [24]  612 	ljmp	_main
                                    613 ;	return from main will return to caller
                                    614 ;--------------------------------------------------------
                                    615 ; code
                                    616 ;--------------------------------------------------------
                                    617 	.area CSEG    (CODE)
                                    618 ;------------------------------------------------------------
                                    619 ;Allocation info for local variables in function 'main'
                                    620 ;------------------------------------------------------------
                                    621 ;i                         Allocated with name '_main_i_327680_14'
                                    622 ;------------------------------------------------------------
                                    623 ;	main.c:18: void main() {
                                    624 ;	-----------------------------------------
                                    625 ;	 function main
                                    626 ;	-----------------------------------------
      00009B                        627 _main:
                           000007   628 	ar7 = 0x07
                           000006   629 	ar6 = 0x06
                           000005   630 	ar5 = 0x05
                           000004   631 	ar4 = 0x04
                           000003   632 	ar3 = 0x03
                           000002   633 	ar2 = 0x02
                           000001   634 	ar1 = 0x01
                           000000   635 	ar0 = 0x00
                                    636 ;	main.c:19: P3_DIR_PU &= ~(0x07); P3_MOD_OC &= ~(0x03); // KEY, RST
      00009B 53 97 F8         [24]  637 	anl	_P3_DIR_PU,#0xf8
      00009E 53 96 FC         [24]  638 	anl	_P3_MOD_OC,#0xfc
                                    639 ;	main.c:20: P3_MOD_OC |= 0x04; // ACT
      0000A1 43 96 04         [24]  640 	orl	_P3_MOD_OC,#0x04
                                    641 ;	main.c:21: P1_DIR_PU |= 0x80; P1_MOD_OC &= ~(0x80); // CTL
      0000A4 43 93 80         [24]  642 	orl	_P1_DIR_PU,#0x80
      0000A7 53 92 7F         [24]  643 	anl	_P1_MOD_OC,#0x7f
                                    644 ;	main.c:23: ACT = 1;
                                    645 ;	assignBit
      0000AA D2 B2            [12]  646 	setb	_ACT
                                    647 ;	main.c:24: CTL = 0;
                                    648 ;	assignBit
      0000AC C2 97            [12]  649 	clr	_CTL
                                    650 ;	main.c:26: sysClockConfig();
      0000AE 12 01 66         [24]  651 	lcall	_sysClockConfig
                                    652 ;	main.c:27: delay(5);
      0000B1 90 00 05         [24]  653 	mov	dptr,#0x0005
      0000B4 12 01 BA         [24]  654 	lcall	_delay
                                    655 ;	main.c:29: sysTickConfig();
      0000B7 12 02 1A         [24]  656 	lcall	_sysTickConfig
                                    657 ;	main.c:30: EA = 1;
                                    658 ;	assignBit
      0000BA D2 AF            [12]  659 	setb	_EA
                                    660 ;	main.c:32: while (1) {
      0000BC                        661 00132$:
                                    662 ;	main.c:33: switch (state) {
      0000BC 90 00 0A         [24]  663 	mov	dptr,#_state
      0000BF E0               [24]  664 	movx	a,@dptr
      0000C0 FF               [12]  665 	mov	r7,a
      0000C1 60 0D            [24]  666 	jz	00101$
      0000C3 BF 01 02         [24]  667 	cjne	r7,#0x01,00221$
      0000C6 80 20            [24]  668 	sjmp	00108$
      0000C8                        669 00221$:
      0000C8 BF 02 02         [24]  670 	cjne	r7,#0x02,00222$
      0000CB 80 62            [24]  671 	sjmp	00122$
      0000CD                        672 00222$:
      0000CD 02 01 5E         [24]  673 	ljmp	00129$
                                    674 ;	main.c:34: case STATE_PWOFF:
      0000D0                        675 00101$:
                                    676 ;	main.c:35: CTL = 0;
                                    677 ;	assignBit
      0000D0 C2 97            [12]  678 	clr	_CTL
                                    679 ;	main.c:37: if (KEY == 0 && !pwr_t) {
      0000D2 20 B0 0B         [24]  680 	jb	_KEY,00103$
      0000D5 20 00 08         [24]  681 	jb	_pwr_t,00103$
                                    682 ;	main.c:38: pwr_t = 1;
                                    683 ;	assignBit
      0000D8 D2 00            [12]  684 	setb	_pwr_t
                                    685 ;	main.c:39: state = STATE_PWON;
      0000DA 90 00 0A         [24]  686 	mov	dptr,#_state
      0000DD 74 01            [12]  687 	mov	a,#0x01
      0000DF F0               [24]  688 	movx	@dptr,a
      0000E0                        689 00103$:
                                    690 ;	main.c:41: if (KEY != 0 && pwr_t)
      0000E0 30 B0 D9         [24]  691 	jnb	_KEY,00132$
                                    692 ;	main.c:42: pwr_t = 0;
                                    693 ;	assignBit
      0000E3 10 00 D6         [24]  694 	jbc	_pwr_t,00132$
                                    695 ;	main.c:43: break;
                                    696 ;	main.c:44: case STATE_PWON:
      0000E6 80 D4            [24]  697 	sjmp	00132$
      0000E8                        698 00108$:
                                    699 ;	main.c:45: if (KEY != 0 && pwr_t)
      0000E8 30 B0 03         [24]  700 	jnb	_KEY,00110$
                                    701 ;	main.c:46: pwr_t = 0;
                                    702 ;	assignBit
      0000EB 10 00 00         [24]  703 	jbc	_pwr_t,00228$
      0000EE                        704 00228$:
      0000EE                        705 00110$:
                                    706 ;	main.c:47: if (pwr_t == 0) {
      0000EE 20 00 2E         [24]  707 	jb	_pwr_t,00118$
                                    708 ;	main.c:48: CTL = 1;
                                    709 ;	assignBit
      0000F1 D2 97            [12]  710 	setb	_CTL
                                    711 ;	main.c:50: if (KEY == 0) {
      0000F3 20 B0 24         [24]  712 	jb	_KEY,00115$
                                    713 ;	main.c:51: press += 1;
      0000F6 90 00 0B         [24]  714 	mov	dptr,#_press
      0000F9 E0               [24]  715 	movx	a,@dptr
      0000FA 04               [12]  716 	inc	a
      0000FB F0               [24]  717 	movx	@dptr,a
                                    718 ;	main.c:52: wait(100);
      0000FC 90 00 64         [24]  719 	mov	dptr,#0x0064
      0000FF 12 02 30         [24]  720 	lcall	_wait
                                    721 ;	main.c:53: if (press >= 50) {
      000102 90 00 0B         [24]  722 	mov	dptr,#_press
      000105 E0               [24]  723 	movx	a,@dptr
      000106 FF               [12]  724 	mov	r7,a
      000107 BF 32 00         [24]  725 	cjne	r7,#0x32,00231$
      00010A                        726 00231$:
      00010A 40 13            [24]  727 	jc	00118$
                                    728 ;	main.c:54: press = 0;
      00010C 90 00 0B         [24]  729 	mov	dptr,#_press
      00010F E4               [12]  730 	clr	a
      000110 F0               [24]  731 	movx	@dptr,a
                                    732 ;	main.c:55: pwr_t = 1;
                                    733 ;	assignBit
      000111 D2 00            [12]  734 	setb	_pwr_t
                                    735 ;	main.c:56: state = STATE_PWOFF;
      000113 90 00 0A         [24]  736 	mov	dptr,#_state
      000116 E4               [12]  737 	clr	a
      000117 F0               [24]  738 	movx	@dptr,a
      000118 80 05            [24]  739 	sjmp	00118$
      00011A                        740 00115$:
                                    741 ;	main.c:59: press = 0;
      00011A 90 00 0B         [24]  742 	mov	dptr,#_press
      00011D E4               [12]  743 	clr	a
      00011E F0               [24]  744 	movx	@dptr,a
      00011F                        745 00118$:
                                    746 ;	main.c:63: if (RST == 0 && !rst_t) {
      00011F 20 B1 9A         [24]  747 	jb	_RST,00132$
      000122 20 01 97         [24]  748 	jb	_rst_t,00132$
                                    749 ;	main.c:64: rst_t = 1;
                                    750 ;	assignBit
      000125 D2 01            [12]  751 	setb	_rst_t
                                    752 ;	main.c:65: state = STATE_RESET;
      000127 90 00 0A         [24]  753 	mov	dptr,#_state
      00012A 74 02            [12]  754 	mov	a,#0x02
      00012C F0               [24]  755 	movx	@dptr,a
                                    756 ;	main.c:67: break;
                                    757 ;	main.c:68: case STATE_RESET:
      00012D 80 8D            [24]  758 	sjmp	00132$
      00012F                        759 00122$:
                                    760 ;	main.c:69: if (RST != 0 && rst_t)
      00012F 30 B1 03         [24]  761 	jnb	_RST,00124$
                                    762 ;	main.c:70: rst_t = 0;
                                    763 ;	assignBit
      000132 10 01 00         [24]  764 	jbc	_rst_t,00236$
      000135                        765 00236$:
      000135                        766 00124$:
                                    767 ;	main.c:71: if (rst_t == 0) {
      000135 30 01 03         [24]  768 	jnb	_rst_t,00237$
      000138 02 00 BC         [24]  769 	ljmp	00132$
      00013B                        770 00237$:
                                    771 ;	main.c:72: CTL = 0;
                                    772 ;	assignBit
      00013B C2 97            [12]  773 	clr	_CTL
                                    774 ;	main.c:73: for (uint8_t i = 0; i < 6; i++) {
      00013D 7F 00            [12]  775 	mov	r7,#0x00
      00013F                        776 00135$:
      00013F BF 06 00         [24]  777 	cjne	r7,#0x06,00238$
      000142                        778 00238$:
      000142 50 0F            [24]  779 	jnc	00126$
                                    780 ;	main.c:74: ACT = !ACT;
      000144 B2 B2            [12]  781 	cpl	_ACT
                                    782 ;	main.c:75: wait(500);
      000146 90 01 F4         [24]  783 	mov	dptr,#0x01f4
      000149 C0 07            [24]  784 	push	ar7
      00014B 12 02 30         [24]  785 	lcall	_wait
      00014E D0 07            [24]  786 	pop	ar7
                                    787 ;	main.c:73: for (uint8_t i = 0; i < 6; i++) {
      000150 0F               [12]  788 	inc	r7
      000151 80 EC            [24]  789 	sjmp	00135$
      000153                        790 00126$:
                                    791 ;	main.c:77: CTL = 1;
                                    792 ;	assignBit
      000153 D2 97            [12]  793 	setb	_CTL
                                    794 ;	main.c:78: state = STATE_PWON;
      000155 90 00 0A         [24]  795 	mov	dptr,#_state
      000158 74 01            [12]  796 	mov	a,#0x01
      00015A F0               [24]  797 	movx	@dptr,a
                                    798 ;	main.c:80: break;
      00015B 02 00 BC         [24]  799 	ljmp	00132$
                                    800 ;	main.c:81: default:
      00015E                        801 00129$:
                                    802 ;	main.c:82: state = STATE_PWOFF;
      00015E 90 00 0A         [24]  803 	mov	dptr,#_state
      000161 E4               [12]  804 	clr	a
      000162 F0               [24]  805 	movx	@dptr,a
                                    806 ;	main.c:84: }
                                    807 ;	main.c:87: }
      000163 02 00 BC         [24]  808 	ljmp	00132$
                                    809 	.area CSEG    (CODE)
                                    810 	.area CONST   (CODE)
                                    811 	.area XINIT   (CODE)
      0002A0                        812 __xinit__state:
      0002A0 00                     813 	.db #0x00	; 0
      0002A1                        814 __xinit__press:
      0002A1 00                     815 	.db #0x00	; 0
                                    816 	.area CABS    (ABS,CODE)
