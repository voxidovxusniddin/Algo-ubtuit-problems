#include <stdio.h>

int main() {
    int s, h;
    float a;
    scanf("%d%d", &s, &h);
    a = 2.0 * s / h;
    printf("%.2f\t", a);
    return 0;
}
