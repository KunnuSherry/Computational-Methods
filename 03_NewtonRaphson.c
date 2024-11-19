#include <stdio.h>
#include <math.h>
#define e 0.0001
#include <stdlib.h>
double f(double x){
    return(x*x*x-3*x-5);
}
double df(double x){
    return(3*x*x-3);
}
int main(){
    double x0, x1;
    int i=1, maxItr;
    
    printf("NEWTON RAPHSON METHOD\n");
    printf("Name : Kunal Sharma\n");
    printf("Class : CSE-A\n");
    printf("Roll No. : 11\n");
    
    printf("Enter the value of x0: ");
    scanf("%lf", &x0);
    
    printf("Enter maximum iteration: ");
    scanf("%d", &maxItr);
    
    printf("Value of function: %lf", f(x0));
    
    while(i<=maxItr){
        x1 = x0-(f(x0)/df(x0));
        if(fabs(x1-x0)<e){
            printf("\nRoot founded x = %lf", x1);
            break;
        }
        x0=x1;
        printf("\nIteration %d: x = %lf, f(x) = %lf", i, x0, f(x0));
        i++;
    }
    if(i>maxItr){
        printf("\nRoot not found within %d iterations", maxItr);
    }
    return 0;
}

// Inputs: 
// to be calculated
