#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], min;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < n; i++) {
        if (i + 1 >= a && i + 1 <= b) printf("%.1lf ", 1.0 * arr[i] / min);
        else printf("%.1lf ", 1.0 * arr[i]);
    }
    return 0;
}
