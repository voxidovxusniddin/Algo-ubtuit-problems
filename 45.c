#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double D, x1, x2;
    D = b * b - (4 * a * c);
    x1 = (-b + sqrt(D)) / (a * 2.0);
    x2 = (-b - sqrt(D)) / (a * 2.0);
    if (D >= 0) {
        printf("%.2lf %.2lf", x1, x2);
    } else {
        printf("No");
    }
    return 0;
}