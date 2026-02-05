#include <stdio.h>

int main() {
    int r1, r2, r3;
    scanf("%d %d %d", &r1, &r2, &r3);
    printf("%0.2f", (float)(r1 * r2 * r3) / (r2 * r3 + r1 * r3 + r1 * r2));
    return 0;
}
