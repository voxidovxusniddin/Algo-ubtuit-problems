#include <stdio.h>
#include <math.h>
int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ( x*x+y*y <= 1 && y<= x/2.0 ) {
        printf("yes");
    } else {
        printf("no");
    } return 0;
}