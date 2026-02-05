#include <stdio.h>
#include <math.h>
int main() {
    int n, x, m = -1.0, f=1;
    scanf("%d %d", &n, &x);
    double sum = 0;
    if (n == 0 && x != 0) {
        printf("%.1lf", 1.0);
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        f *=i;
        sum += m*x/f;
        x *=x;
        m *=m;
    }
    printf("%.1lf", sum);
    return 0;
}