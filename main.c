#include <stdio.h>
#include "myBank.h"

int main(){
int status=0;
char option;

printf("Hey there! welcome to shaharivka's bank. Here are your following options:\n");
printf("O-opens a new bank account\n");
printf("B-Balance inquiry\n");
printf("D-deposite money in to an account\n");
printf("C-close an account\n");
printf("I-adding interest\n");
printf("P-prints all open accounts\n");
printf("E-closing all acoount and shut down the program\n");
while(status==0){
   printf("enter your request:\n");
   if(scanf(" %c",&option)!=1){
    printf("ERROR!,this is more then one letter, please enter again\n"); 
   }
   else{
    

    switch(option){
        
        case 'O':
         o(); 
        break;

        case 'B':
         b();
        break;
        
        case 'D':
         d();
        break;

        case 'W':
         w();
        break;
      

        case 'C':
         c();
        break;

        case 'I':
         i();
        break;

        case 'P':
         p();
         break;

        case 'E':
         e();
         status=1;
        break;

         default:
         printf("ERROR!,this is not one of the options, please enter again\n");
         
         break;

        

        
    }


    }
}
    return 0;


    }
    