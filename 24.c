#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x, A, B;
    scanf("%d %d %d %lf", &a, &b, &c, &x);
    A = 8.2 * x * x + sqrt(fabs(x * x * x + 3* x) + cos(x - 2));
    B = (a / 4.0) + (b / 3.0) + (c / 2.0) + 1;
    printf("%.2lf", 0.75 + A / B);
    return 0;
}
