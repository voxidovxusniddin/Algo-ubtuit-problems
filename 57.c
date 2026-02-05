#include <stdio.h>
int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ( y<= 1 && y >= -1 && x <= 1 && x >=-1) {
        printf("Yes");
    } else {
        printf("No");
    } return 0;
}