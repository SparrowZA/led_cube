/*            =================================================
                            Light up random LEDs
              =================================================*/
void randomLED(){  
  int a=random(0,16);
  int b=random(0,4);
  for(int i=0; i<5; i++){
    digitalWrite(layer[b], 1);
    digitalWrite(column[a], 1);
    delay(10);
    digitalWrite(layer[b], 0);
    digitalWrite(column[a], 0);
  }
}
