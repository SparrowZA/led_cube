/*            =================================================
                       Light up LEDs going up by one level
              =================================================*/
void goingUP(){    
  for(int i=0;i<16;i++){
    digitalWrite(column[i],1);
  }
  for(int i=0;i<4;i++){
    digitalWrite(layer[i],1);
    delay(80);
    digitalWrite(layer[i],0);
  }  
  for(int i=0;i<16;i++){
    digitalWrite(column[i],0);
  }
}
