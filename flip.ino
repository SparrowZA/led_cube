#include "Arduino.h"

/*            =================================================
                                    Flip
              =================================================*/
void flip(){ 
  digitalWrite(layer[3], 1);
  for(int i=0; i<16; i++){
    digitalWrite(column[i], 1);
  }
  delay(180);
  for(int i=0; i<16; i++){
    digitalWrite(column[i], 0);
  }  
  
  //Stage 2
  for(int j=0; j<18; j++){
     for(int i=0; i<8; i++){
       digitalWrite(layer[3], 1);
       digitalWrite(column[i], 1);
     }
     delay(5);
     for(int i=0; i<8; i++){
       digitalWrite(layer[3], 0);
       digitalWrite(column[i], 0);
       digitalWrite(layer[2],1);
       digitalWrite(column[i+8], 1);
     }
     delay(5);
     for(int i=0; i<8; i++){
       digitalWrite(layer[2], 0);
       digitalWrite(column[i+8], 0);
     }
  }
  
  //Stage 3
  for(int j=0; j<9; j++){
     for(int i=0; i<4; i++){
       digitalWrite(layer[3], 1);
       digitalWrite(column[i], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[3], 0);
       digitalWrite(column[i], 0);
       digitalWrite(layer[2],1);
       digitalWrite(column[i+4], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[2], 0);
       digitalWrite(column[i+4], 0);
       digitalWrite(layer[1], 1);
       digitalWrite(column[i+8], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[1], 0);
       digitalWrite(column[i+8], 0);
       digitalWrite(layer[0], 1);
       digitalWrite(column[i+12], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[0], 0);
       digitalWrite(column[i+12], 0);
     }
  }
  
  //Stage 4
  for(int j=0; j<18; j++){
     digitalWrite(layer[3], 1);
     digitalWrite(layer[2], 1);
     for(int i=0; i<4; i++){       
       digitalWrite(column[i], 1);
     }
     delay(5);
     digitalWrite(layer[3], 0);
     digitalWrite(layer[2], 0);
     digitalWrite(layer[1],1);
     digitalWrite(layer[0],1);
     for(int i=0; i<4; i++){
       digitalWrite(column[i], 0);
       digitalWrite(column[i+4], 1);
     }
     delay(5);
     digitalWrite(layer[0], 0);
     digitalWrite(layer[1], 0);
     for(int i=0; i<4; i++){
       digitalWrite(column[i+4], 0);
     }
  }
  
  //Stage 5
  for(int i=0; i<36; i++){
    for(int i=0; i<4; i++){
      digitalWrite(layer[i], 1);
      digitalWrite(column[i],1);
    }
    delay(5);
    for(int i=0; i<4; i++){
      digitalWrite(layer[i], 0);
      digitalWrite(column[i],0);
    }
  }
    
  //SIDEWAYS
  //Stage 6
  for(int i=0;i<4;i++){
    digitalWrite(layer[i], 1);
  }
  for(int i=0;i<2;i++){
    digitalWrite(column[i],1);
    digitalWrite(column[i+6],1);    
  }
  delay(180);
  for(int i=0;i<2;i++){
    digitalWrite(column[i],0);
    digitalWrite(column[i+6],0);    
  }
  
  //Stage 7
  for(int i=0;i<16;i=i+5){
    digitalWrite(column[i],1);    
  }
  delay(180);
  for(int i=0;i<16;i=i+5){
    digitalWrite(column[i],0);    
  }
  for(int i=0;i<4;i++){
    digitalWrite(layer[i], 0);
  }
  
  //Stage 8
  for(int i=0;i<4;i++){
    digitalWrite(layer[i], 1);
  }
  for(int i=0;i<5;i=i+4){
    digitalWrite(column[i],1);
    digitalWrite(column[i+9],1);
  }  
  delay(180);
  for(int i=0;i<5;i=i+4){
    digitalWrite(column[i],0);
    digitalWrite(column[i+9],0);    
  }
  for(int i=0;i<4;i++){
    digitalWrite(layer[i], 0);
  }
  
  //Stage 9
  for(int i=0;i<4;i++){
    digitalWrite(layer[i], 1);
  }
  for(int i=0;i<13;i=i+4){
    digitalWrite(column[i],1);   
  }  
  delay(180);
  for(int i=0;i<13;i=i+4){
    digitalWrite(column[i],0);   
  }
  for(int i=0;i<4;i++){
    digitalWrite(layer[i],0);
  }
  
  //BACK TO TOP
  //Stage 10
  for(int i=0;i<18;i++){
    for(int j=0;j<2;j++){
      digitalWrite(layer[j],1);
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=0;j<2;j++){
      digitalWrite(layer[j],0);
    }
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j+1],0);
      digitalWrite(column[j],1);
    }
    for(int j=2;j<4;j++){
      digitalWrite(layer[j],1);
    }
    delay(5);
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j],0);
    }
    for(int j=2;j<4;j++){
      digitalWrite(layer[j],0);
    }
  }
  
  //Stage 11
  for(int i=0;i<9;i++){
    digitalWrite(layer[0],1);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    digitalWrite(layer[0],0);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[1],1);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[1],0);
    digitalWrite(layer[2],1);
    for(int j=1;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=1;j<16;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[2],0);
    digitalWrite(layer[3],1);
    for(int j=0;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=0;j<13;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[3],0);    
  } 
  
  //Stage 12
  for(int i=0;i<18;i++){
    digitalWrite(layer[3],1);    
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j],1);
      digitalWrite(column[j+1],1);
    }
    delay(5);
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j],0);
      digitalWrite(column[j+1],0);
    }
    digitalWrite(layer[3],0);
    digitalWrite(layer[2],1);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],1);
      digitalWrite(column[j+1],1);
    }
    delay(5);
    digitalWrite(layer[2],0);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],0);
      digitalWrite(column[j+1],0);
    }
  }
  
} //END flip()



