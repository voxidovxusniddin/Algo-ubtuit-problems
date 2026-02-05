#include <stdio.h>
#include <math.h>

int main() {
    double x, y, value1, value2, value3;
    scanf("%lf %lf", &x, &y);
    const double pi = 3.14159265358979323846;
    value1 = 2 * tan(x + pi / 6);
    value2 = 1.0 / 3 + cos(y + x * x) * cos(y + x * x);
    value3 = log2(x * x + 2);
    printf("%0.2lf", value1 / value2 + value3);
    return 0;
}
