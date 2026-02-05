#include <math.h>
#include <stdio.h>
int main() {
    double x, y, r;
    scanf("%lf %lf", &x, &y);
    if ( x*x + y*y <= 1 ) {
        printf("Yes");
    } else {
        printf("No");
    } return 0;
}