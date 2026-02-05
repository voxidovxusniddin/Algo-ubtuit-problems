#include <math.h>
#include <stdio.h>
int main () {
    int a;
    double y, sum = 0.0;
    scanf("%d", &a);
    for (double x = 0; x <= 10; x += 0.5) {
        y = a*cos(x) - sin(x*x);
        sum += y;
    }
    printf("%.2lf", sum);
    return 0;
}