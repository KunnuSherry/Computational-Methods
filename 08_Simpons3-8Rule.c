#include <stdio.h>
#include <math.h>

double f(double x) {
    return 1 / (1 + x * x);
}

int main() {
    printf("Name: Aditya Gadiya\nClass: IT-B\nRoll No.: 101\n");
    printf("SIMPSON'S 3/8 METHOD\n");

    double a, b, n;

    printf("Enter the lower limit = ");
    scanf("%lf", &a);

    printf("Enter the upper limit = ");
    scanf("%lf", &b);

    printf("Enter the sub interval (multiple of 3) = ");
    scanf("%lf", &n);

    double h = (b - a) / n;

    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 3 * f(x);
        }
    }

    double integ = (3 * sum * h) / 8;
    printf("The result = %.21f\n", integ);

    return 0;
}

// Inputs:
// 0
// 6
// 6
