#include <stdio.h>
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (y>=-1 && y <= 3*x + 2 && y <= -3 *x +2) printf("yes"); else printf("no");
}