#include <stdio.h>
#include <math.h>
int main() {
    double x, y, r;
    scanf("%lf %lf", &x, &y);
    r = sqrt(x*x + y*y);
    if ( r >= 1 && r <=2 && y >=0) {
        printf("yes");
    } else printf("no");
    return 0;

}