#include <math.h>
#include <stdio.h>
int main () {
    double a, x, y;
    scanf("%lf", &a);
    x = a;
    if (x <= 0) y = fabs(-x - 1);
    if (x >= 0) y = fabs(x - 1);
    printf("%.2lf", y);
    return 0;


}