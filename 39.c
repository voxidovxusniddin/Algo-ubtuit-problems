#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double t = (a + b) / 2.0;
    int l = 2 * a * b;
    if (a > b) {
        printf("%.d %.2lf ", l, t);
    } else {
        printf("%.2lf %d", t, l);
    }
    return 0;
}
