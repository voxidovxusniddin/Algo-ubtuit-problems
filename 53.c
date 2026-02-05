#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ( y <= 1.5 && y >=1 && x >= -2 && x<=2) {
        printf("yes");
    } else {
        printf("no");
    } return 0;

}