#include <stdio.h>
int main () {
    long long n;
    int s=1;
    scanf("%lld", &n);
    while (n != 0) {
        s *= n % 10;
        n /= 10;
        printf("%lld %d\n", n, s);
    }
    printf("s = %d\n", s);
}