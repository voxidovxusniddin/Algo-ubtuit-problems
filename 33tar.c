#include <stdio.h>
int main () {
    int x, y, z, t, max;
    double min, l;
    scanf("%d %d %d", &x, &y, &z);
    t = x + y + z;
    l = x+y/2.0;
    max = x;
    min = x;
    if (y > max) max = y;
    if (z > max) max = z;
    if (t >max) max = t;

    if (y<min) min = y;
    if (z<min) min = z;
    if (l< min) min = l;
    printf("%d %.2lf", max, min*min);
    return 0;
}