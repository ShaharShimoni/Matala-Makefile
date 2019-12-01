#include <stdio.h>
#include "myBank.h"
#define L 2
#define S 51
double money=0;
double a[L][S]={0};
 void o(){
    printf("enter your deposity amount:\n");
        if(scanf("%lf",&money)!=1){
            printf("error-OPSS this is not an account number\n");

        } 
        else{
        if(money<0){
         printf("enter again:");
         scanf("%lf",&money);

        }

        int ok=0;
        for(int i=1;i<51;i++){
            
            if(a[1][i]==0){
                a[0][i]=money;
                a[1][i]=1;
                printf("congratulations you new acount number is %d \n",i+900);
                ok=1;
            }
            if(ok==1){
            break;
            }
        }
        if(ok==0) 
            {
                printf("bank is full, go to leumy bank\n");
                return;
            }
        }
    

        return;
}

 void b(){
     int index=0;
    printf("enter your acount\n");
        if(scanf("%d",&index)!=1){
            printf("error-Opps wrong acount number");

        } 
        else{
        while((index<901)||(index>950)){
            printf("you entered a wrong acount number please enter again\n");
            scanf("%d",&index);
        }
        index=index-900;
        if(a[1][index]==1)
        printf("your amount is %0.2f\n",a[0][index]);
        else
        printf("this account is closed\n");
        return;
        }

       
}

 void d(){
     int index=0;

        printf("enter your acount and the amount of the deposit\n");
        if(scanf(" %d  %lf",&index,&money)!=2){

         printf("error-oops wrong input\n");
        }
        else{
        while((index<901)||(index>950)){
            printf("you entered a wrong acount number please enter again\n");
            scanf("%d",&index);
        }
        index=index-900;
        if(a[1][index]==1){
            a[0][index]=a[0][index]+money;
            printf("your new amount %0.2lf\n" ,a[0][index]);
        }

        else
        printf("this account is closed\n");
        }

        return;
}

 void w(){
     int index=0;

        printf("enter your acount and the amount of withdrawal:\n");
        if(scanf("%d  %lf",&index,&money)!=2){
            printf("error-oops wrong input\n");
        }
        else{
        while((index<901)||(index>950)){
            printf("you entered a wrong acount number please enter again:");
            scanf("%d %lf",&index,&money);
        }
        index=index-900;
        if(a[1][index]==1){
            double save=a[0][index]-money;
            if(save<0){
                printf("there is not enough money in your account\n");
            }
            else{
                a[0][index]=save;
                printf("your new balance is %0.2lf:\n", save);
            }
        
            
                
        }    
  
        if(a[1][index]==0)
        printf("this account is closed\n");
        return;
        }

     
        
}
 void c(){
     int index=0;
    printf("enter your acount number:\n");
        if(scanf(" %d",&index)!=1){
            printf("error-opps wrong acount number\n");
        }
        else{
        while((index<901)||(index>950)){
            printf("you entered a wrong acount number please enter again:");
            scanf("%d",&index);
        }

        index=index-900;
        if(a[1][index]==1){
            a[1][index]=0;
            printf("acount %d is closed\n",index+900);
        }
        else
        printf("this account is already closed\n");
        }

        return;

}
 void i(){
    printf("enter interest:");
        if(scanf("%lf",&money)!=1){
            printf("error-opps wrong input\n");
        }
        else{

        
         for(int i=1;i<51;i++){
            if(a[1][i]==1)
                a[0][i]=a[0][i]+(a[0][i]*(money/100.0));

         }
         printf("The balance is up by the percent that you entered\n");
        }

        return;
}

 void p(){
    for(int i=1;i<51;i++){
            if(a[1][i]==1){
                printf("acount %d is open with %0.2lf balance\n" ,i+900,a[0][i]);
            }

        }

        return;
}

 void e(){
    for(int i=1;i<51;i++){
        if(a[1][i]==1)
        a[1][i]=0;
        a[0][i]=0;

        }
        return;

 }