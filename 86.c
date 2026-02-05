#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x, y, sum = 0.0;
    scanf("%d %d %d", &a, &b, &c);
    for ( x = c; x <= b; x += 0.25) {
        y = a * a * cos(x) + 1.0*sin(x) / 2.0 + b * x * x;
        sum += y;
    }
    printf("%.2lf", sum);
    return 0;
}
