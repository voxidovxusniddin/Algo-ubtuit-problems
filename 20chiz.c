#include <stdio.h>
#include <math.h>
int main() {
    double x, y, result1, result2, result3, result4;
    scanf("%lf %lf", &x, &y);
    result1 = y*y + (y + x * y)/(fabs(x*y) + 5);
    result2 = x*x + (x*y + y*y)/result1;
    result3 = (x*x +1)/result2;
    result4 = 1 + cos(x) + 1/sin(fabs(x));
    printf("%.2lf\n", result3 + 1/result4);
    return 0;

}