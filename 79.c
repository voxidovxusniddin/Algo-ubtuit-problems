#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double y, sum = 0.0;
    double const pi = 3.14159265358979323846;
    scanf("%lf", &a);
    double x = pi / 2.0;
    while (x <= pi) {
        printf("x = %lf\n", x);
        y = pow(a,a/3.0) + x * x * cos(a * x);
        sum += y;
        x += pi / 19.0;
    }
    printf("%.2lf", sum);
    return 0;
}
