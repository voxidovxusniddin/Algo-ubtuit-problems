#include <stdio.h>

int main () {
    int n;
    double x, sum = 0.0, term;

    scanf("%d %lf", &n, &x);

    term = x;

    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= x * x * (2 * i - 1) / (2 * i + 1);
    }
    printf("%.3lf\n", sum);
    return 0;
}
