#include <stdio.h>

int main() {
    int n, x;
    double sum = 0, term = 1.0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i ++) {
        sum += term;
        term *= -x * x / (2*i * (2*i - 1));
    } printf("%.3lf", sum);
    return 0;
}
