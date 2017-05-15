/*            =================================================
                                 LED electron cube
              =================================================*/
int POVDELAY = 4;       //POV delay time 1us
int POVDELAY2 = 2;       //POV delay time 1us
int POVLOOP = 4;       //POV loop
int POVLOOP2 = 8;       //POV loop 
              
void electron(){  
  int atom[4] ={5,6,9,10};
  
  //Stage 1
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     //layer 0 lat
    digitalWrite(column[12], 1);   //e 1 lat     
    digitalWrite(column[15], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[12], 0);   //e 1 lat
    digitalWrite(column[15], 0);   //e 3 vert
    digitalWrite(layer[0], 0);     //layer 0 lat
    
    digitalWrite(layer[3], 1);     
    digitalWrite(column[0], 1);    //e 2 lat
    digitalWrite(column[3], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[0], 0);    //e 2 lat
    digitalWrite(column[3], 0);    //e 4 vert
    digitalWrite(layer[3], 0);
  }
  
  //Stage 2
  for(int k=0;k<POVLOOP2;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY2);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     //e 1 lat
    digitalWrite(column[13], 1);
    delay(POVDELAY2);    
    digitalWrite(column[13], 0);
    digitalWrite(layer[0], 0);     //e 1 lat
    
    digitalWrite(layer[3], 1);     //e 2 lat
    digitalWrite(column[1], 1);
    delay(POVDELAY2);    
    digitalWrite(column[1], 0);
    digitalWrite(layer[3], 0);     //e 2 lat
    
    digitalWrite(layer[1], 1);     //e 3 vert
    digitalWrite(column[15], 1);
    delay(POVDELAY2);    
    digitalWrite(column[15], 0);
    digitalWrite(layer[1], 0);     //e 3 vert
    
    digitalWrite(layer[2], 1);     //e 4 vert
    digitalWrite(column[3], 1);
    delay(POVDELAY2);    
    digitalWrite(column[3], 0);
    digitalWrite(layer[2], 0);     //e 4 vert
  }
  
  //Stage 3
  for(int k=0;k<POVLOOP2;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY2);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     //e 1 lat
    digitalWrite(column[14], 1);
    delay(POVDELAY2);    
    digitalWrite(column[14], 0);
    digitalWrite(layer[0], 0);     //e 1 lat
    
    digitalWrite(layer[3], 1);     //e 2 lat
    digitalWrite(column[2], 1);
    delay(POVDELAY2);    
    digitalWrite(column[2], 0);
    digitalWrite(layer[3], 0);     //e 2 lat
    
    digitalWrite(layer[2], 1);     //e 3 vert
    digitalWrite(column[15], 1);
    delay(POVDELAY2);    
    digitalWrite(column[15], 0);
    digitalWrite(layer[2], 0);     //e 3 vert
    
    digitalWrite(layer[1], 1);     //e 4 vert
    digitalWrite(column[3], 1);
    delay(POVDELAY2);    
    digitalWrite(column[3], 0);
    digitalWrite(layer[1], 0);     //e 4 vert
  }
  
  
  //Stage 4
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     
    digitalWrite(column[15], 1);   //e 1 lat
    digitalWrite(column[3], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[15], 0);   //e 1 lat
    digitalWrite(column[3], 0);    //e 4 vert
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1);     
    digitalWrite(column[3], 1);    //e 2 lat
    digitalWrite(column[15], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[3], 0);    //e 2 lat
    digitalWrite(column[15], 0);   //e 3 vert
    digitalWrite(layer[3], 0);
  }
  
  //Stage 5
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);
    digitalWrite(column[11], 1);   //e 1 lat
    digitalWrite(column[2], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[2], 0);    //e 4 vert
    digitalWrite(column[11], 0);   //e 1 lat
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1); 
    digitalWrite(column[7], 1);    //e 2 lat
    digitalWrite(column[14], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[14], 0);   //e 3 vert
    digitalWrite(column[7], 0);    //e 2 lat
    digitalWrite(layer[3], 0);
  }
  
  //Stage 6
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     
    digitalWrite(column[7], 1);    //e 1 lat
    digitalWrite(column[1], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[1], 0);    //e 4 vert    
    digitalWrite(column[7], 0);    //e 1 lat
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1);
    digitalWrite(column[11], 1);   //e 2 lat
    digitalWrite(column[13], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[13], 0);   //e 3 vert
    digitalWrite(column[11], 0);   //e 2 lat
    digitalWrite(layer[3], 0);
  }
  
  //Stage 7
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1); 
    digitalWrite(column[3], 1);   //e 1 lat
    digitalWrite(column[0], 1);   //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[0], 0);   //e 4 vert
    digitalWrite(column[3], 0);   //e 1 lat
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1);
    digitalWrite(column[15], 1);   //e 2 lat
    digitalWrite(column[12], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[12], 0);   //e 3 vert
    digitalWrite(column[15], 0);   //e 2 lat
    digitalWrite(layer[3], 0);
  }
  
  //Stage 8
  for(int k=0;k<POVLOOP2;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY2);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     //e 1 lat
    digitalWrite(column[2], 1);
    delay(POVDELAY2);    
    digitalWrite(column[2], 0);
    digitalWrite(layer[0], 0);     //e 1 lat
    
    digitalWrite(layer[3], 1);     //e 2 lat
    digitalWrite(column[14], 1);
    delay(POVDELAY2);    
    digitalWrite(column[14], 0);
    digitalWrite(layer[3], 0);     //e 2 lat
    
    digitalWrite(layer[2], 1);     //e 3 vert
    digitalWrite(column[12], 1);
    delay(POVDELAY2);    
    digitalWrite(column[12], 0);
    digitalWrite(layer[2], 0);     //e 3 vert
    
    digitalWrite(layer[1], 1);     //e 4 vert
    digitalWrite(column[0], 1);
    delay(POVDELAY2);    
    digitalWrite(column[0], 0);
    digitalWrite(layer[1], 0);     //e 4 vert
  }
  
  //Stage 9
  for(int k=0;k<POVLOOP2;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY2);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1);     //e 1 lat
    digitalWrite(column[1], 1);
    delay(POVDELAY2);    
    digitalWrite(column[1], 0);
    digitalWrite(layer[0], 0);     //e 1 lat
    
    digitalWrite(layer[3], 1);     //e 2 lat
    digitalWrite(column[13], 1);
    delay(POVDELAY2);    
    digitalWrite(column[13], 0);
    digitalWrite(layer[3], 0);     //e 2 lat
    
    digitalWrite(layer[1], 1);     //e 3 vert
    digitalWrite(column[12], 1);
    delay(POVDELAY2);    
    digitalWrite(column[12], 0);
    digitalWrite(layer[1], 0);     //e 3 vert
    
    digitalWrite(layer[2], 1);     //e 4 vert
    digitalWrite(column[0], 1);
    delay(POVDELAY2);    
    digitalWrite(column[0], 0);
    digitalWrite(layer[2], 0);     //e 4 vert
  }
  
  //Stage 10
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1); 
    digitalWrite(column[0], 1);    //e 1 lat
    digitalWrite(column[12], 1);
    delay(POVDELAY);    
    digitalWrite(column[12], 0);   //e 3 vert
    digitalWrite(column[0], 0);    //e 1 lat
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1);
    digitalWrite(column[12], 1);   //e 2 lat
    digitalWrite(column[0], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[0], 0);    //e 4 vert
    digitalWrite(column[12], 0);   //e 2 lat
    digitalWrite(layer[3], 0);  
  }
  
  //Stage 11
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1); 
    digitalWrite(column[4], 1);    //e 1 lat
    digitalWrite(column[13], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[13], 0);   //e 3 vert
    digitalWrite(column[4], 0);    //e 1 lat
    digitalWrite(layer[0], 0);  
    
    digitalWrite(layer[3], 1); 
    digitalWrite(column[8], 1);    //e 2 lat
    digitalWrite(column[1], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[1], 0);    //e 4 vert
    digitalWrite(column[8], 0);    //e 2 lat
    digitalWrite(layer[3], 0);
  }
  
  //Stage 12
  for(int k=0;k<POVLOOP;k++){    
    digitalWrite(layer[1], 1);     //Cube
    digitalWrite(layer[2], 1);
    for(int i=0;i<4;i++){
      digitalWrite(column[atom[i]], 1);
      delay(POVDELAY);    
      digitalWrite(column[atom[i]], 0);
    }
    digitalWrite(layer[1], 0);     
    digitalWrite(layer[2], 0);     //End Cube
  
    digitalWrite(layer[0], 1); 
    digitalWrite(column[8], 1);    //e 1 lat
    digitalWrite(column[14], 1);   //e 3 vert
    delay(POVDELAY);    
    digitalWrite(column[14], 0);   //e 3 vert    
    digitalWrite(column[8], 0);    //e 1 lat
    digitalWrite(layer[0], 0);
    
    digitalWrite(layer[3], 1); 
    digitalWrite(column[4], 1);    //e 2 lat
    digitalWrite(column[2], 1);    //e 4 vert
    delay(POVDELAY);    
    digitalWrite(column[2], 0);    //e 4 vert
    digitalWrite(column[4], 0);    //e 2 lat
    digitalWrite(layer[3], 0);
  }
}//END electron
