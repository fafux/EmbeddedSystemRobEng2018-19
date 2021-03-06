/*
 * File:   sendFBKTask.c
 * Author: tori & fafux
 *
 * Created on 13 gennaio 2019, 15.10
 */

#include <stdio.h>
#include "xc.h"
#include "../header/support/globalVar.h"
#include "../header/support/uart.h"
#include "../header/sendFBKTask.h"

int sendFBKTask(void) {
    
    char fbk[20];
    sprintf(fbk, "MCFBK,%d,%d,%d", appliedN1, appliedN2, boardState);
    send2pc(fbk);
    
    return 0;
}
