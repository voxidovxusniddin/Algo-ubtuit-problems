#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0) a = a * a;
    if (b > 0) b = b * b;
    if (c > 0) c = c * c;
    printf("%d %d %d", a, b, c);
    return 0;
}
