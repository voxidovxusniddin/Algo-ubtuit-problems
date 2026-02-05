#include <stdio.h>
#include <math.h>
int main() {
    int n, x;
    double s=0, m= -1.0;
    scanf("%d %d", &n, &x);
    for (int i=1; i<=n; i++) {
        m = -1 * m;
        s += m/i * sin(i*x);
    } printf("s = %.3lf", s);
    return 0;
}