/*            =================================================
                            Light up LEDs in a squarcle
              =================================================*/
void spin(){  
  int spinColumn[12]={0,1,2,3,7,11,15,14,13,12,8,4};
  int spinCenter[4]={5,6,10,9};
  for(int i=0; i<4; i++){
     digitalWrite(layer[i], 1);     
  }
  for(int j=0; j<12; j++){
       if(j==0||j==1||j==11){
         digitalWrite(column[9], 0);
         digitalWrite(column[5], 1);
       }
       if(j==2||j==3||j==4){
         digitalWrite(column[5], 0);
         digitalWrite(column[6], 1);
       }
       if(j==5||j==6||j==7){
         digitalWrite(column[6], 0);
         digitalWrite(column[10], 1);
       }
       if(j==8||j==9||j==10){
         digitalWrite(column[10], 0);
         digitalWrite(column[9], 1);
       }
       digitalWrite(column[ spinColumn[j] ], 1);
       delay(80);
       digitalWrite(column[ spinColumn[j] ], 0);
  }
}
