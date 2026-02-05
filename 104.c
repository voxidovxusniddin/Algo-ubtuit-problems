#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    } arr[min_index] = arr[n-1];
    arr[n-1] = min;
    for (int i = 0; i <n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
// #include <stdio.h>
//
// int main() {
//     int n;
//     int a[100];
//
//     scanf("%d", &n);
//
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//
//     // 1. Min elementni topamiz
//     int min = a[0];
//     for (int i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//         }
//     }
//
//     // 2. Oxirgi elementni saqlab olamiz
//     int last = a[n - 1];
//
//     // 3. Min elementlarni oxirgi element bilan almashtiramiz
//     for (int i = 0; i < n; i++) {
//         if (a[i] == min) {
//             a[i] = last;
//         }
//     }
//
//     // 4. Oxirgi elementga min qiymatini qo‘yamiz
//     a[n - 1] = min;
//
//     // 5. Natijani chiqaramiz
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//
//     return 0;
// }
