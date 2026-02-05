#include <stdio.h>
int main() {
    int a, b, c;
    float p;
    scanf ("%d %d %d", &a, &b, &c );
    p = (float)(a+b+c)/2.0;
    printf("%.2f\n", p);
    return 0;
}