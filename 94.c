#include <stdio.h>
#include <math.h>

int main() {
    int x, y, c, d;
    scanf("%d %d %d %d", &x, &y, &c, &d);
    double S = 0.0, P = 1.0, SP = 0.0;
    for (int a = 1; a <= x; a++) {
        S += (2.0 * a + cos(a)) * (2.0 * a + cos(a));
    }
    printf("%.2lf\n", S);
    for (int a = 1; a <= y; a++) {
        P *= (a + 6.0) / sqrt(a * a + 2.0);
    }
    printf("%.2lf\n", P);
    for (int k = 1; k <= c; k++) {
        for (int y = 1; y <= d; y++) {
            SP += (k * k + y) / sqrt(k * k + y * y);
        }
    }
    printf("%.2lf\n", SP);
    return 0;
}
