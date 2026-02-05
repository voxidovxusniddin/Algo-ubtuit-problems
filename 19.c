#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double result1, result2;
    scanf("%d %d", &x, &y);
    result1 = log10(fabs((x + y) * (x + y) + sqrt(fabs(y) + 2) - (x - x * y / ((x * x / 2.0) - 5))));
    result2 = cos(x + y) * cos(x + y) / cbrt(x + y);
    printf("%.2lf\n", result1 + result2);
    return 0;
}
