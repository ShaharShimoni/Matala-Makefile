 #include <stdio.h>
#include"myMath.h"
int main(){
double x=1;
int xx=1;
double answer=0;
do{
 printf("enter a double number");
}
while (scanf("%le",&x)!=1);

xx=(int)x;

answer= sub(add(Exp(xx),Pow(x,3)),2);
printf("The value of f1(x) = e^x+x^3-2 at the point %0.4f is %0.4f\n",x,answer);
answer=add(mul(x,3),mul(Pow(x,2),2));
printf("The value of f2(x) = 3x+2x^2 at the point %0.4f is %0.4f\n",x,answer);
answer=sub(div(mul(Pow(x,3),4),5),mul(x,2));
printf("The value of f3(x) = (4x^3)/5-2x at the point %0.4f is %0.4f\n",x,answer);
}