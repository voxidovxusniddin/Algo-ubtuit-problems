#include <stdio.h>

int main() {
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    double max = x;
    double min = x;

    if (y > max) max = y;
    if (z > max) max = z;

    if (y < min) min = y;
    if (z < min) min = z;

    printf("%.2lf %.2lf", max, min);
    return 0;
}
