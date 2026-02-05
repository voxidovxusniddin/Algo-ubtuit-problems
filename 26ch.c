#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double x, y, A, B, C;
    const double e = 2.718281828459045;
    scanf("%d %lf %lf", &a, &x, &y);
    A = sqrt(pow(e, x * y) - x * sin(a * x) - (x * x + 2.0) / (fabs(x) + 5));
    B = sqrt(log(x * x + 2) + 5);
    printf("%.2lf", A + B);
    return 0;
}
