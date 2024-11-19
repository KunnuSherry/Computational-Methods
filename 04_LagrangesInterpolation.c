#include <stdio.h>

int main() {
    printf("Name: Kunal Sharma\nClass: CSE-A\nRoll No.: 11\n");
    printf("LAGRANGE INTERPOLATION\n");

    double x[100], y[100], xi, result;
    int n;

    printf("Enter max number of points: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nValue of x[%d] = ", i);
        scanf("%lf", &x[i]);
        printf("Value of y[%d] = ", i);
        scanf("%lf", &y[i]);
    }

    printf("\nPoint where interpolated value is to be found: ");
    scanf("%lf", &xi);

    result = 0.0; // Initialize result

    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (xi - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    printf("\nInterpolated Value at x = %lf is y: %lf\n", xi, result);

    printf("\nInterpolated Polynomial:\nP(x) = ");
    for (int i = 0; i < n; i++) {
        printf("(%lf) * ", y[i]);
        for (int j = 0; j < n; j++) {
            if (i != j) {
                printf("(x - %lf) / ( %lf - %lf) ", x[j], x[i], x[j]);
            }
        }
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}

// Inputs: 
// 3
// 2
// 45
// 3
// 65
// 7
// 54
// 5
