#include <stdio.h>
#include <math.h>
int main () {
    int a;
    double x, A, B, C;
    scanf("%d %lf", &a, &x);
    A = x*sin(x/2 + x/3 + x/4);
    B = log10(x*x - 2) + pow(3.0,a);
    C = cos(x+ 3) * sin(x+3) + 8;
    printf("%.2lf", A + B/C);
    return 0;

}