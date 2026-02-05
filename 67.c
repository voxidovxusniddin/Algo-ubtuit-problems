#include <stdio.h>
#include <math.h>
int main () {
    int n, x;
    scanf("%d %d", &n, &x);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / sqrt(i);

    }
    printf("%.3lf", sum);
    return 0;

}