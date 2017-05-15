/*
 * Author: Marc Geffroy
 * Date: 10/2015
 */
int column[16]= {13,12,11,10,9,8,7,6,5,4,3,2,1,0,A0,A1};
int layer[4]= {A2,A3,A4,A5};
int sequence;

void setup() {
  for(int i=0; i<16; i++){
    pinMode(column[i], OUTPUT);
  }
  
  for(int i=0; i<5; i++){
    pinMode(layer[i], OUTPUT);
  }

}


//Main Loop
void loop() {
   turnOFFEverything();
   int sequence = 1; //random(0,7);
   if(sequence==0){
     for(int i=0;i<random(1,10);i++){
       flip();
     }     
   }
   if(sequence==1){
     for(int i=0;i<random(15,45);i++){
       randomLED();
     }
   }
   if(sequence==2){
     for(int i=0;i<random(5,15);i++){      
       spinLat();
     }      
   }
   if(sequence==3){
     for(int i=0;i<random(10,25);i++){      
       rain();
     }  
   }
   if(sequence==4){
     for(int i=0;i<random(5,15);i++){      
       goingUP();
     }  
   }
   if(sequence==5){
     for(int i=0;i<random(5,15);i++){      
       spin();
     }  
   }
   if(sequence==6){
     for(int i=0;i<random(2,5);i++){      
       electron();
     }  
   }
 }


//Sequences
void turnONEverything(){
  for(int i=0; i<16; i++){
    digitalWrite(column[i],1);
  }
  
  for(int i=0; i<4; i++){
    digitalWrite(layer[i],1);
  }
}

void turnOFFEverything(){
  for(int i=0; i<16; i++){
    digitalWrite(column[i],0);
  }
  
  for(int i=0; i<4; i++){
    digitalWrite(layer[i],0);
  }
}




