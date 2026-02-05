#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    double x, y, sum = 0.0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a == 0 || b == 0) {
        printf("0.00");
        return 0;
    }

    for (x = c; x <= d; x += 2) {
        y = cbrt((sin(a * x) + pow(b,2*d) )/ (b * b + cos(x) * cos(x)))
            - (sin(x*x)) / (a * b);

        sum += y;
    }

    printf("%.2lf\n", sum);
    return 0;
}