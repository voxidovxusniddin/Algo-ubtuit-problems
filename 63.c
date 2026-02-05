#include <math.h>
#include <stdio.h>

int main() {
    int n, f = 1;
    double s = 0.0, m = -1.0;
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i += 2) {

        m = -1 * m;
        s += m / f;
        f *= (i + 1) * (i + 2);
        printf("n=%d\n", n);
        printf("s=%.2lf\n", s);
    }
    printf("s = %lf\n", s);
    return 0;
}
