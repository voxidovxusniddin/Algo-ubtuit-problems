// #include <stdio.h>
// #include <math.h>
//
// int main() {
//     double a, b, c, d;
//     scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
//     double sum = 0.0, pul = 1, m, k, l, sl = 0;
//     for (m = 1; m <= a; m++) {
//         sum += (3 * m * m * m + 4 * m + 5) / (m * m * m + log(m));
//     }
//     printf("%.2lf\n", sum);
//     for (k = 1; k <= b; k++) {
//         pul *= k / (k * k * k + 7 * k + 5);
//     }
//     printf("%.2lf\n", pul);
//     for (double i = 1; i <= c; i++) {
//         l = 1;
//         for (double j = 1; j <= d; j++) {
//             l *= (log(i) + pow(j, i)) / pow(j, i);
//         }
//         sl += l;
//     }
//     printf("%.2lf\n", sl);
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    double S = 0.0, P = 1.0, SP = 0.0;

    // S
    for (int m = 1; m <= a; m++) {
        S += (3.0 * m * m * m + 4.0 * m + 5.0) / (m * m * m + log(m));
    }
    printf("%.2lf\n", S);

    // P
    for (int k = 1; k <= b; k++) {
        P *= (double) k / (k * k * k + 7.0 * k + 5.0);
    }
    printf("%.2lf\n", P);

    // SP
    for (int i = 1; i <= c; i++) {
        double l = 1.0;
        for (int j = 1; j <= d; j++) {
            l *= (log(i) + pow(j, i)) / pow(j, i);
        }
        SP += l;
    }
    printf("%.2lf\n", SP);

    return 0;
}
