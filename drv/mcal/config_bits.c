// C:\Program Files\Microchip\xc8\v2.46\pic\dat\cfgdata\18f24j11.cfgdata

// CONFIG1
#pragma config WDTEN = ON   // Watchdog Timer
#pragma config STVREN = ON  // Stack Overflow/Underflow Reset
#pragma config XINST = OFF  // Extended Instruction Set
#pragma config DEBUG = OFF  // Background Debug
#pragma config CP0 = ON     // Code Protect

// CONFIG2
#pragma config OSC = INTOSC   // Oscillator
#pragma config T1DIG = OFF    // T1OSCEN Enforcement
#pragma config LPT1OSC = ON   // Low-Power Timer1 Oscillator
#pragma config FCMEN = OFF    // Fail-Safe Clock Monitor
#pragma config IESO = OFF     // Internal External Oscillator Switch Over Mode
#pragma config WDTPS = 32768  // Watchdog Postscaler

// CONFIG3
#pragma config DSWDTOSC = INTOSCREF  // DSWDT Clock Select
#pragma config RTCOSC = INTOSCREF    // RTCC Clock Select
#pragma config DSBOREN = ON          // Deep Sleep BOR
#pragma config DSWDTEN = ON          // Deep Sleep Watchdog Timer
#pragma config DSWDTPS = K131        // Deep Sleep Watchdog Postscaler
#pragma config IOL1WAY = ON          // IOLOCK One-Way Set Enable bit
#pragma config MSSP7B_EN = MSK7      // MSSP address masking

// CONFIG4
#pragma config WPFP = PAGE_15  // Write/Erase Protect Page Start/End Location
#pragma config WPEND = PAGE_0  // Write/Erase Protect Region Select
#pragma config WPCFG = ON      // Write/Erase Protect Configuration Region
#pragma config WPDIS = ON      // Write Protect Disable bit
