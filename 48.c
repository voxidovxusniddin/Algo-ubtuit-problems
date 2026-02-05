#include <stdio.h>
#include <math.h>
int main () {
    double a, x, y;
    scanf("%lf", &a);
    x=a;
    if (x<0) y = -x;
    else y = - x*x;
    printf("%.2lf", y);
    return 0;

}