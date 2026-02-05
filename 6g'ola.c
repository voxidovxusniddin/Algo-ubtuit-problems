/*#include <stdio.h>
#include <tgmath.h>

int main() {
    int a, b, h;
    const float pi = 3.14;
    scanf("%d %d %d", &a, &b, &h);
    float l;
    l = sqrt(h*h + (a - b)*(a-b));
    printf("%.2f\n", pi * l*(a+b) + pi*a*a + pi * b*b);
    return 0;
}*/
#include <stdio.h>
#include <math.h>

int main() {
float a, b, h, l;
const float PI = 3.14f;

scanf("%f %f %f", &a, &b, &h);

l = sqrt(h * h + (a - b) * (a - b));

printf("%.2f\n", PI * (a + b) * l + PI * a * a + PI * b * b);

return 0;
}