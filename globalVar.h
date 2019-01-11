#include <xc.h> // include processor files - each processor file is guarded.  
#include "scheduler.h"
#include "buffer.h"
#include "bufferTemp.h"
#include "parser.h"

extern Heartbeat schedInfo[MAX_TASKS];
extern Buffer bufReceiving;
extern BufferTemp buff;
extern Parser_state pstate;
extern int boardState;


