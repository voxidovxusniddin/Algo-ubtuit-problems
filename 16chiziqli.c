#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    const double e = 2.718281828459045;
    scanf("%lf %lf", &x, &y);
    double value1 = x + y;
    double value2 = (y * y + fabs((y * y + 2) / (x + x * x * x / 5)));
    double value3 = exp(y + 2);
    printf("%0.2lf", value1 / value2 + value3);
    return 0;
}
