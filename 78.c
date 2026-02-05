#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x, y, sum = 0.0;
    scanf("%d %d %d", &a, &b, &c);
    for (x = a; x <= b; x +=2) {
        y = (pow(a,b) + pow(b,x) + pow(c,a))/(2*x*x+3*pow(a,x));
        sum += y;
    }

    printf("%.2lf\n", sum);
    return 0;
}
