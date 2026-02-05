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

    double sum = 1.0;
    int arr2[n];
    for (int i = 0; i < n; i++) {
        if (arr[i] > M) {
            sum *= arr[i];
        }
    }printf("%.2lf\n", log(sum));
    return 0;
}