#include <stdio.h>
#include <math.h>
int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (y<= 2.0*x +3 && y <= -x && x <= 1 && y>= 1.0/3*x -1.0/3 && y >=1/3) {
        printf("Yes");
    } else {
        printf("No");
        return 0;
    }
}