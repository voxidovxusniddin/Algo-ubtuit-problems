#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    double sum = 0, fact = 1.0;
    for (int i = 1; i <= n; i++) {
            fact *= i;
            sum += x / fact;
            x *= x;
    }
    if (n == 0) printf("%.1lf", 1.0);
    printf("%.1lf", sum);
    return 0;
}
