#include "temperature.h"
#include "xc.h"

void setupADCtemp () {
    
    // min tad is 154ns
    ADCON3bits.ADCS = 63; // tad at the maximum for circuital problems 
    
    ADCON1bits.ASAM = 1; // auto start sampling
    
    // sampling rate will be 65772 Hz(16 samc)
    ADCON3bits.SAMC = 16; // samp time = 16tad 
    ADCON1bits.SSRC = 7; // auto end sampling
    
    ADCON2bits.CHPS = 0; // select channel 0
    
    ADCHSbits.CH0SA = 3; // link ch0 to AN3 (temperature)
    
    ADPCFG = 65535; // set all input pin as digital mode
    ADPCFGbits.PCFG3 = 0; // set AN2 input in analog
    
    ADCON1bits.ADON = 1;
}

int acqTemp() {
    double temp = 0;
    
    if (ADCON1bits.DONE) { // if ADC conversion completed
        temp = 500.0/1023.0*ADCBUF1 - 50.0;
        return temp;
    }
}