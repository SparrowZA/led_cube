/*            =================================================
                              Lateral LED Spin
              =================================================*/
void spinLat(){  
  //Stage 1
  for(int i=0;i<9;i++){
    digitalWrite(layer[0],1);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[0],0);
    digitalWrite(layer[1],1);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=2;j<15;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[1],0);
    digitalWrite(layer[2],1);
    for(int j=1;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[2],0);
    digitalWrite(layer[3],1);
    for(int j=0;j<13;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=0;j<13;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[3],0);    
  } 
  
  //Stage2
  for(int i=0;i<18;i++){
    digitalWrite(layer[2],1);    
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j],1);
      digitalWrite(column[j+1],1);
    }
    delay(5);
    digitalWrite(layer[2],0);
    digitalWrite(layer[1],1);   
    for(int j=0;j<16;j=j+4){
      digitalWrite(column[j],0);
      digitalWrite(column[j+1],0);
      digitalWrite(column[j+2],1);
      digitalWrite(column[j+3],1);
    }
    delay(5);
    digitalWrite(layer[1],0);   
    for(int j=0;j<16;j=j+4){
      digitalWrite(column[j+2],0);
      digitalWrite(column[j+3],0);
    }
  }
  
  //Stage 3
  for(int i=0;i<18;i++){
    digitalWrite(layer[1],1);    
    for(int j=0;j<14;j=j+4){
      digitalWrite(column[j],1);
      digitalWrite(column[j+1],1);
    }
    delay(5);
    digitalWrite(layer[1],0);
    digitalWrite(layer[2],1);   
    for(int j=0;j<16;j=j+4){
      digitalWrite(column[j],0);
      digitalWrite(column[j+1],0);
      digitalWrite(column[j+2],1);
      digitalWrite(column[j+3],1);
    }
    delay(5);
    digitalWrite(layer[2],0);   
    for(int j=0;j<16;j=j+4){
      digitalWrite(column[j+2],0);
      digitalWrite(column[j+3],0);
    }
  }
  
  //Stage 4
  for(int i=0;i<9;i++){
    digitalWrite(layer[3],1);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=3;j<16;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[3],0);
    digitalWrite(layer[2],1);
    for(int j=2;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=2;j<15;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[2],0);
    digitalWrite(layer[1],1);
    for(int j=1;j<16;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[1],0);
    digitalWrite(layer[0],1);
    for(int j=0;j<13;j=j+4){
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=0;j<13;j=j+4){
      digitalWrite(column[j],0);
    }
    digitalWrite(layer[0],0);    
  } 
  
  //Stage 5
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
      digitalWrite(layer[j+2],1);     
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j],0);
      digitalWrite(column[j+1],1);
    }
    delay(5);
    for(int j=0;j<2;j++){
      digitalWrite(layer[j+2],0);     
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j+1],0);
    }
  }
  
  //Stage 6
  for(int i=0;i<18;i++){
    for(int j=0;j<2;j++){
      digitalWrite(layer[j],1);      
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j+1],1);
    }
    delay(5);
    for(int j=0;j<2;j++){
      digitalWrite(layer[j],0); 
      digitalWrite(layer[j+2],1);     
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j+1],0);
      digitalWrite(column[j],1);
    }
    delay(5);
    for(int j=0;j<2;j++){
      digitalWrite(layer[j+2],0);     
    }
    for(int j=1;j<14;j=j+4){
      digitalWrite(column[j],0);
    }
  }
}//End spinLat
