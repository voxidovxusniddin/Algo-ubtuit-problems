#include <stdio.h>
int main() {
    double y, x;
    scanf("%lf", &x);
    if ( x < -1) {
        y = -1.0/(x*x);
    }
    if (x > -1 ) {
        y = x*x;
    }
    if (x >= 2) y = x;

    printf("%.2lf", y);

    return 0;
}