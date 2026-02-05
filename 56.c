#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r;
    scanf("%lf %lf", &x, &y);
    r = sqrt(x * x + y * y);
    printf("%lf", r);
    if (r <= 1.0 && r >= 0.5) {
        printf("yes");
    } else printf("no");
    return 0;
}
