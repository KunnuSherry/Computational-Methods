#include <stdio.h>
#include <math.h>

double f(double x) {
    return 1 / (1 + x * x);
}

int main() {
    printf("Name: Aditya Gadiya\nClass: IT-B\nRoll No.: 101\n");
    printf("SIMPSON'S 1/3 METHOD\n");

    int a, b, n;

    printf("Enter the lower limit = ");
    scanf("%d", &a);

    printf("Enter the upper limit = ");
    scanf("%d", &b);

    printf("Enter the sub interval (it should be even) = ");
    scanf("%d", &n);

    double h = (b - a) / n;

    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 4 * f(x);
        }
    }

    double integ = sum * h / 3.0;
    printf("The result is = %.21f\n", integ);

    return 0;
}

// Inputs:
// 0
// 6
// 4
