     AREA Program,CODE, READONLY 
     ENTRY 
     LDR R0,=VALUE1 
     LDR R1,[R0] 
     LDR R0,=VALUE2 
     LDR R2,[R0] 
     AND R3,R2,R1 
     OR R4,R2,R1 
     EOR R5,R2,R1 
LOOP LDR R6,R5,R5,LSL,#2 
     LDR R7,R5,R5,LSR,#2 
     LDR R8,R5,R5,ROR,#2 
     CMP R6,R7 
     BNE LOOP 
VALUE1 DCD &BBBBBBBB 
VALUE2 DCD &CCCCCCCC 
     END 