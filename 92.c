#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    double S = 0.0, P = 1.0, SP = 0.0;
    for (int a = 1; a <= x; a++) {
        S += (a * a + 2 * a) / (a * a * a + a * cos(a) * cos(a) + 1);
    }
    printf("%.2lf\n", S);


    for (int i = 1; i <= y; i++) {
        P *= (i * i + 1) / (pow(i, 3.0 / i) + 2);
    }
    printf("%.2lf\n", P);


    for (int i = 1; i <= a; i++) {
        double K = 1.0;
        for (int k = 1; k <= b; k++) {
            K *= log((pow(k,i) + pow(k, 1.0 / i) )/ (k * k * k + pow(i, 1.0 / k)));
        }
        SP += K;
    }
    printf("%.2lf\n", SP);
    return 0;
}
