/*            =================================================
              Light up LEDs one by one on each level seperately
              =================================================*/
void oneByOne(){  
   for(int i=0; i<4; i++){
     digitalWrite(layer[i], 1);
     for(int j=0; j<16; j++){
       digitalWrite(column[j], 1);
       delay(80);
     }     
     for(int j=0; j<15; j++){
       digitalWrite(column[j], 0);
     }   
     digitalWrite(layer[i],0);
   }
}
