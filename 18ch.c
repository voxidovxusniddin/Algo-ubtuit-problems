#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result1, result2, result3, result4;
    scanf("%lf %lf", &x, &y);
    const double e = 2.7182818285;
    result1 = 1 / (x + 2 / (x * x) + 3 / (x * x * x * x));
    result2 = exp(x * x + 3 * x);
    result3 = atan(x + y) + pow(fabs(5 + x), 2);
    result4 = pow(cos(y * y + x * x / 2), 2);
    printf("%0.2lf", (result1 + result2) / result3 - result4);
    return 0;
}
