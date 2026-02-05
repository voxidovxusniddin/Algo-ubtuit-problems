#include <stdio.h>
#include <math.h>
int main () {
    int x, y, c, d;
    double S = 0.0, P=1.0, SP = 1.0;
    scanf("%d %d %d %d", &x, &y, &c, &d);

    for (int k = 1; k <= x; k++) {
        S += pow(-1,k) * (k+1)/(k*k*k+k*k+1);
    } printf("%.2lf\n", S);
    for (int i = 1; i <= y; i++) {
        P *= (i*i*i + fabs(i-9))/(log(i) + 7*i);
    } printf("%.2lf\n", P);

    for (int n = 1; n <= c; n++) {
        double sum = 0.0;
        for (int m = 1; m <= d; m++) {
            sum += pow(-1,m)*log(m+5)/(pow(m,n+3)+ n*m);
        }
        SP *=sum;
    }
    printf("%.2lf\n", SP);
    return 0;
}