#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x >= 0 && x*x + y*y <= 1 || x >= -2 && x <= 0 && fabs(y) <= (x+2)/2) {
        printf("yes");
    } else {
        printf("no");
    } return 0;

}
