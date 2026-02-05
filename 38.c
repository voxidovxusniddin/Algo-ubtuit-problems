#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= 1 && a <= 3) {
        printf("%.2lf ", a);
    }
    if (b >= 1 && b <= 3) {
        printf("%.2lf ", b);
    }
    if (c >= 1 && c <= 3) {
        printf("%.2lf ", c);
    }
    return 0;
}
