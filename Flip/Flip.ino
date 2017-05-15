/*            =================================================
                                    Flip
              =================================================*/
void flip(){ 
  digitalWrite(layer[3], 1);
  for(int i=0; i<16; i++){
    digitalWrite(column[i], 1);
  }
  delay(50);
  for(int i=0; i<16; i++){
    digitalWrite(column[i], 0);
  }  
  //Stage 2
  for(int j=0; j<25; j++){
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
  for(int j=0; j<12; j++){
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
  for(int j=0; j<25; j++){
     for(int i=0; i<4; i++){
       digitalWrite(layer[3], 1);
       digitalWrite(layer[2], 1);
       digitalWrite(column[i], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[3], 0);
       digitalWrite(layer[2], 0);
       digitalWrite(column[i], 0);
       digitalWrite(layer[1],1);
       digitalWrite(layer[0],1);
       digitalWrite(column[i+4], 1);
     }
     delay(5);
     for(int i=0; i<4; i++){
       digitalWrite(layer[0], 0);
       digitalWrite(layer[1], 0);
       digitalWrite(column[i+4], 0);
     }
  }
  //Stage 5
  for(int i=0; i<80; i++){
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
} //END flip()
