#include <math.h>
#include <stdio.h>
int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ( fabs(x) + 2*fabs(y) <= 1 ) {
        printf("yes");
    } else {
        printf("no");
    } return 0;

}