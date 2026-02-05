#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c;
    double x, y, sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    for ( x=5; x <=10; x +=0.5) {
        y = (a*a + b*x + pow(x,c)/(a*a + b*b + x*x));
        sum += y;
    } printf("%.2lf", sum);
    return 0;

}