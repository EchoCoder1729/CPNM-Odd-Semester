//Code for least sqaure method
#include <stdio.h>

int main() {
    float x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    float y[] = {5.5,7.0,9.6,11.5,12.6,14.4,17.6,19.5,20.5};
    int n = 9;
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

    // Calculate the required sums
    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Calculate the slope and y-intercept of the line of best fit
    float m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    float c = (sum_y - m * sum_x) / n;

    // Print the equation of the line of best fit
    printf("y = %fx + %f\n", m, c);

    return 0;
}
