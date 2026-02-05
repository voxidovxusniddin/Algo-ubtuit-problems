#include <math.h>
#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    if (a < 0 && b < 0) a = fabs(a), b = fabs(b);
    if (a < 0 || b < 0) a = a + 0.5, b = b + 0.5;
    printf("%.2lf %.2lf", a, b);
    return 0;
}
