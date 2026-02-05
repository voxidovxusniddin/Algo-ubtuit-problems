#include <stdio.h>
#include <math.h>

int main() {
    double x, A, E, G, L;
    scanf("%lf", &x);
    A = sqrt((2.0 * tan(x + 2.0) - cos(x + pow(2.0, x)))/(1.0 + cos(x + 2.0) * cos(x + 2.0)));
    E = sin(x*x);
    G = (x*x +3);
    L = A + E/G;
    //B = 1.0 + cos(x + 2.0) * cos(x + 2.0);
    //C = sqrt(A / B);
    printf("%.2lf", L);
    return 0;
}
