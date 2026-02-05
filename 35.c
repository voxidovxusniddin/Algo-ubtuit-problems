#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("%d %d %d", 2 * a, 2 * b, 2 * c);
    } else {
        printf("%d %d %d", fabs(a), fabs(b), fabs(c));
    }
    return 0;
}
