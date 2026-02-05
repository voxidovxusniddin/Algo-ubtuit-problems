#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k, l;
    int sum= 0;
    int count = 0;
    scanf("%d %d", &k, &l);
    for (int i = k-1; i <l; i++) {
        sum += arr[i];
        count++;

        printf("%d\n", arr[i]);
    }
    double avg = 1.0*sum/count;
    printf("%d\n", sum);
    printf("%.2lf\n", avg);
    return 0;
}