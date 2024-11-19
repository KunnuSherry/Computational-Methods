#include <stdio.h>
#include <math.h>

double f(double x) {
    return 1 / (1 + x * x);
}

int main() {
    printf("Name: Aditya Gadiya\nClass: IT-B\nRoll No.: 101\n");
    printf("TRAPEZOIDAL FORMULA\n");

    double b, a, h, sum, integ;
    unsigned int n;

    printf("Number of sub intervals (=n): ");
    scanf("%d", &n);

    b = 6;
    a = 0;
    h = (b - a) / n;

    sum = f(a) + f(b);
    for (int i = 1; i < n; i++) {
        sum += 2 * f(a + i * h);
    }

    integ = (h * sum) / 2.0;
    printf("\nRequired Integration = %.21f\n", integ);

    return 0;
}

// Inputs:
// 4
