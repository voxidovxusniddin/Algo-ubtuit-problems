#include <math.h>
#include <stdio.h>
int main() {
    double a, x, y;
    scanf("%lf", &a);
    x = a;
    if (x<= 1) y= fabs(x);
    else if (x > 2) y = -11/12*x + 5;
    else y = 1;
    printf("%.2lf", y);
    return 0;

}