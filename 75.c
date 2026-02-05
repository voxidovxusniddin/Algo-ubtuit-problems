#include <stdio.h>
int main() {
    int n;
    double k, sum =0, fact = 1.0;
    scanf("%d %lf", &n, &k);
    double term = 1.0;
    for (int i = 1; i <= n; i++) {
        sum += term/fact;
        term *= -k;
        fact *= (i +1);


    } printf("%.3lf", sum);
}