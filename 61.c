#include <math.h>
#include <stdio.h>
int main() {
    int n;
    double s=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        s += sin(i)/pow(2,i);

        printf("i=%d\n", i);
        printf("s = %lf\n", s);
    }
    printf("%.2lf", s);
    return 0;
}