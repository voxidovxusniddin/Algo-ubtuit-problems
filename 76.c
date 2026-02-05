#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    double x, y, sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    if ( a == 0 || b == 0 ) {
        printf("0.00");
        return 0;
    }
    for (x=a; x <=c; x +=3) {
        y = cbrt((a*x + b)/(b*b +cos(x)*cos(x))) - sin(x*x)/(a*b);
        sum += y;

    } printf("%.2lf", sum);
    return 0;

}