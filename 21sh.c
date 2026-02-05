#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf", pow((a),1.0/5) + pow(b*(a + b)/(2*b + a*b),1.0/4) * (a*a + b*b + 2));
    return 0;

}