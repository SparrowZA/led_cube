/*            =================================================
                                 LED rain
              =================================================*/
void rain(){  
  int a=random(0,16);
  int b=random(0,4);
  for(int i=3;i>=0;i--){
    digitalWrite(layer[i], 1);
    digitalWrite(column[a], 1);
    delay(50);    
    digitalWrite(layer[i], 0);
  }
  digitalWrite(column[a], 0);
}
