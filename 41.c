#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (1 > a && 1 > b && 1 > c) {
        double min = a;
        if (b < min) min = b;
        if (c < min) min = c;

        if (min == a) a = (b + c) / 2.0;
        if (min == b) b = (c + a) / 2.0;
        if (min == c) c = (a + b) / 2.0;
    }
    printf("%.2lf %.2lf %.2lf", a, b, c);

    return 0;
}
