#include <math.h>
#include <stdio.h>
int main() {
    double s = 0.0;
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i=1; i<=n; i++) {
        s += 1.0*i/pow(x, i*2.0);
        printf("s = %.3lf\n", s);
        printf("i = %d\n", i);
    }
    printf("s = %lf\n", s);
}
/*#include <stdio.h>
int main() {
int n, x;
double s=0, p= x*x;
scanf("%d %d", &n, &x);
for ( int i = 1; i <= n; i++) {
s +=i/p;
p += x*x;
} printf("%.3lf", s);
return 0;
}*/
