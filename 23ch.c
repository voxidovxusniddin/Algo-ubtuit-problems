#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c, d;
    double x, A,B,C;
    scanf("%d %d %d %d %lf", &a, &b, &c, &d, &x);
    A = a*x*x + b*x + c;
    B = x*a*a*a + a*a + pow((a),b-c);
    C = fabs((a*x +b)/(c*x + d + pow(2,c)));
    printf("%.2lf", A/B + cos(C));
    return 0;



}