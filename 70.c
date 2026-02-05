#include <stdio.h>

int main() {
    int n, x;
    double sum = 0, m = 1.0, f = 1.0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        sum += m * x / f;
        x *= x * x;
        m *= -1;
        f *= (i + 1) * (i + 2);
    }
    printf("%.3lf", sum);
    return 0;
}
