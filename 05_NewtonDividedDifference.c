#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of data points: \n");
    scanf("%d", &n);
    double x[n], y[n];
    printf("Enter the data points in the format (x,y):\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d] =", i);
        scanf("%lf", &x[i]);
        printf("y[%d] =", i);
        scanf("%lf", &y[i]);
    }

    double x_val;
    printf("\nEnter the value of x at which you want to interpolate: ");
    scanf("%lf", &x_val);
    
    double f[n][n]; // Divided difference table
    for (int i = 0; i < n; i++) {
        f[i][0] = y[i];
    }

    // Fill the divided difference table
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            f[i][j] = (f[i + 1][j - 1] - f[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    double result = f[0][0]; // Initialize result with the first term
    for (int j = 1; j < n; j++) {
        double term = f[0][j]; // Start with the divided difference
        for (int i = 0; i < j; i++) {
            term *= (x_val - x[i]); // Multiply by (x_val - x[i])
        }
        result += term; // Add to the result
    }

    printf("The interpolated value at x = %lf is %lf\n", x_val, result);
    return 0;
}

// Inputs:
// 2
// 0
// 1
// 2
// 3
  
