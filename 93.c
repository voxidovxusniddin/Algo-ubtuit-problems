#include <stdio.h>
#include <math.h>
int main() {
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);
    double S=0.0, P = 1.0, SP= 0;
    for ( int k = 1 ; k <= x ; k++) {
        S +=(k*k*sin(k) + 5)/pow(k*k*k*k*k*k*k + 1,0.2);
    } printf("%.2lf\n", S);
    for ( int n = 1; n <= y ; n++) {
        P *= (n+sqrt(n))/(n - pow(n+1,0.2));
    }
    printf("%.2lf\n", P);
    for ( int k= 1 ; k <= a ; k++) {
        double H=1.0;
        for ( int i = 1; i <= b ; i++) {
            H *= (i*i + pow(k,2/i))/((sin(i) + cos(k))*pow(i,k));
        }
        SP += H;
    }
    printf("%.2lf\n", SP);
}