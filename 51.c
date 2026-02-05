#include <math.h>
#include <stdio.h>
int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ( x>=-1 && x <= 1 && y >= -2 &&  y <= fabs(x)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;

}