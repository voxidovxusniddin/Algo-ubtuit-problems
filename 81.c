#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double sum = 0, y, x, t;
    for (x = 1; x <= 12; x += 2) {
        t = (b + sin(x)) /(a * a * a + cos(x * x * x) * cos(x * x * x));
        y = a * a + pow(t,1.0/5.0);
        sum += y;
    }
    printf("%.2lf", sum);
    return 0;
}
