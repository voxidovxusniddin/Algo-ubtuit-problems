#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x, y, sum = 0.0, t, k;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0) {
        printf("0.00");
        return 0;
    }

    for (x = -1.0; x <= 1.0; x += 0.25) {
        t = (sin(a * x) + pow(b, c)) /
            (b * b + cos(x) * cos(x));

        k = (sin(x*x)) / (a * b);

        y = cbrt(t) - k;
        sum += y;
    }

    printf("%.2lf\n", sum);
    return 0;
}
