#include <stdio.h>
#include <tgmath.h>

int main () {
    int h;
    const float g = 9.81;
    scanf("%d", &h);
    printf("%.2f", sqrt((2*h/g)));
    return 0;

}
