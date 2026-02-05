#include <stdio.h>

int main() {
    int n;
    double sum = 0, x;
    scanf("%d %lf", &n, &x);
    double term = x;
    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= x * x / ((2 * i + 1) * (2 * i));
    }
    printf("%.3lf", sum);
    return 0;
}
