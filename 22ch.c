#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, result1, result2, result3, result4;
    int c, d;
    scanf("%lf %lf %d %d", &x1, &x2, &c, &d);
    result1 = sin(fabs(c * x2 * x2 * x2 + d * x1 * x1 * x1 - c * d)) * sin(
                  fabs(c * x2 * x2 * x2 + d * x1 * x1* x1 - c * d));
    result2 = sqrt((c * x1 * x1 + d * x2 * x2 + 5) + 2);
    result3 = fabs(result1 / result2);
    result4 = tan(x1 * x2 * x2 + d * d * d);
    printf("%.2lf", result3 + result4);
    return 0;
}
