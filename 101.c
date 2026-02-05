// #include <stdio.h>
//
// int main() {
//     int n;
//     scanf("%d", &n);
//
//     int arr[n]; // massiv o‘lchami aniq
//
//     double s = 0.0, sum = 0.0;
//
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         s += arr[i];
//     }
//
//     double s_avg = s / n;
//
//     int counter = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < s_avg) {
//             sum += arr[i];
//             counter++;
//         }
//     }
//
//     printf("%.2lf\n", sum / counter);
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0, avg, sum2=0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    int avarege = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < avg) {
            sum2 += arr[i];
            avarege++;
        }
    }
    printf("%.2lf\n", sum2 / avarege);
    return 0;
}
