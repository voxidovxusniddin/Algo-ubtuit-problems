#include <stdio.h>
#include <math.h>
int main () {
    int a;
    double x, y, A, B;
    scanf("%d %lf %lf", &a, &x, &y);
    const double e = 2.7182;
    A = sqrt(pow(e,x) + a/(x*x + 2));
    B = sqrt( y*y + pow(e,x) + A + cos(x)*cos(x)/sin(x*x)) + pow(cos(x),3);
    printf("%.2lf", B);
    return 0;


}