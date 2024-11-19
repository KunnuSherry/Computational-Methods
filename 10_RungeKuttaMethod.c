#include <stdio.h>
double f(double x, double y){
 return x + y*y;
}
int main(){
 printf("Name: Kunal Sharma\nClass: CSE-A\nRoll no: 11\n");
 printf("RUNGE KUTTA METHOD\n");

 double x0, y0, h, xn;
 printf("Enter the initial condition (x0 y0): ");
 scanf("%lf %lf", &x0, &y0);

 printf("Enter the step size h: ");
 scanf("%lf", &h);

 printf("Enter the calculation point xn: ");
 scanf("%lf", &xn);
 while(x0 < xn){
 if(x0 + h > xn)
 h = xn - x0;
 double k1 = h * f(x0, y0);
 double k2 = h * f(x0 + h/2, y0 + k1/2);
 double k3 = h * f(x0 + h/2, y0 + k2/2);
 double k4 = h * f(x0 + h, y0 + k3);

 y0 += (k1 + 2*k2 + 2*k3 + k4) / 6;
 x0 += h;
 }
 printf("The value of y at x = %lf is y = %lf\n", xn, y0);

 return 0;
}

// Inputs:
//   2
//   5
//   3
//   2
  
