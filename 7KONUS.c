#include <stdio.h>
int main () {
    int h, r;
    scanf("%d %d", &h, &r);
    const float pi = 3.14159265358979323846;
    printf("%.2f", pi*r*r*h/3.0);
    return 0;

}