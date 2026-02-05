#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ( i+1 < a || i +1> b) {
            sum += arr[i];
            count++;
        }
    } printf("%.2lf", 1.0*sum / count);
    return 0;
}
