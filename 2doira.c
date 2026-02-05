#include <stdio.h>
int main () {
    int r1, r2, r3;
    float s1, s2, s3;
    scanf("%d %d %d", &r1, &r2, &r3);
    const float PI = 3.14159265358979323846;
    s1 = PI * r1 * r1;
    s2 = PI * r2 * r2;
    s3 = PI * r3 * r3;
    printf("%.2f\t", s1);
    printf("%.2f\t", s2);
    printf("%.2f\t", s3);
    return 0;


}