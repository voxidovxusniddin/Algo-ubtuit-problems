#include <stdio.h>

int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if (a <= b && b <= c && c <= d) {
        printf("%.2lf %.2lf %.2lf %.2lf ", d, d, d, d);
    } else {
        double min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        if (d < min) min = d;
        printf("%.2lf %.2lf %.2lf %.2lf", min, min, min, min);
    }
    return 0;
}
