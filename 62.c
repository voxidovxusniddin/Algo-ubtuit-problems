#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double s=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        s += pow(-1,i-1)*sin(pow(i,i))/pow(2,i);
        printf("n=%d\n", n);
        printf("s=%.2lf\n", s);
    } printf("%.2lf\n", s);
    return 0;
}