#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int M;
    scanf("%d", &M);

    // M dan katta elementlarni chiqarish
    for (int i = 0; i < n; i++) {
        if (arr[i] > M) {
            printf("%d  ", arr[i]);
        }
    } printf("%d ", arr[n]);

    double sum = 1.0;
    int ok = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            ok = 0;
            break;
        }
        sum *= arr[i];
    }

    if (ok)
        printf("\n%.2lf", log(sum));
    else
        printf("\nLog hisoblab bo‘lmaydi");

    return 0;
}
