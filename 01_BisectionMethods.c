#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x)x*x*x-4*x-9
int main(){
    float x0,x1,x2,f0,f1,f2,e;
    int i=0,max;
    printf("\n Name : Kunal");
    printf("\n class : CSE-A");
    printf("\n roll no. : 01120802723");
    printf("\n BISECTION METHOD");
    up:
    printf("\n\n Enter numbers x0 and x1: ");
    scanf("%f,%f",&x0,&x1);
    
    
    f0=f(x0);
    f1=f(x1);
if ((f0*f1)<0){
    printf("\n correct input");
}
else{
    printf("\n wrong input");
    goto up;
}
printf("\n Enter permissible error: ");
scanf("%f",&e);
printf("\n Enter maximum interations: ");
scanf("%d",&max);
do{
x2=(x0+x1)/2;
f2=f(x2);
if(f0*f2<0){
    x1=x2;
}
else
{
    x0=x2;
}
    i++;
    printf("\n intration: %d",i);
    printf("root is : %f",x2);
    printf("function value: %f",f2);
    if (i>max){
        printf("\n stop");
        exit(0);
    }
    
}while(fabs(x0-x1)>=e);
printf("\n root is : %f",x2);
return 0;
}
