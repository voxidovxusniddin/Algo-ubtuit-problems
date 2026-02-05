#include <stdio.h>
#include <math.h>

int main() {
    int x, y, c, d;
    scanf("%d%d%d%d", &x, &y, &c, &d);
    const double e = 2.7182;
    double S = 0.0, P = 0.0, SP = 0.0;
    for (int i = 1; i <= x; i++) {
        S += (i * i * i * i + i * i + 3) / sqrt(i + pow(e, i));
    }
    printf("%.2lf\n", S);
    for (int k = 1; k <= y; k++) {
        P += (k + 1.0) / (k * k * k + 5.0 * k);
    }
    printf("%.2lf\n", P);
    for (int m = 1; m <= c; m++) {
        double sp = 1.0;
        for (int n = 1; n <= d; n++) {
            double L = fabs(pow(m, n) - pow(n, m));
            double O = pow(m, n) + pow(n, m);
            sp *= sqrt(L / O);
        }
        SP += sp;
    }
    printf("%.2lf\n", SP);
}