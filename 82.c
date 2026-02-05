#include <stdio.h>
int main () {
    int a, b, c;
    double sum = 0, y, x;
    scanf("%d %d %d", &a, &b, &c);
    for ( x = 1; x <=10; x +=3) {
        y = a*x*x/b + x/c;
        sum += y;
    } printf("%.2lf", sum);
    return 0;
}