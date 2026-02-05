#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double x, A, B;
    scanf("%d %lf", &a, &x);
    A = sqrt(x - 1.0) + sqrt(x + 2.0) + log10(sqrt(a * x * x) + 2.0);
    B = sqrt(sqrt(x + 2.0) + sqrt(x + 24.0) + pow(x, 5.0));
    printf("%.2lf", A / B);
    return 0;
}
