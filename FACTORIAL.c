#include <stdio.h>

int main() {
    int n;
    double S = 0.0;
    double fact = 1.0;

    printf("n ni kiriting: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int m = 2 * k - 1;   // (2k-1)!

        // factorialni davomiy hisoblash
        for (int i = (k == 1 ? 1 : 2 * (k - 1)); i <= m; i++)
            fact *= i;

        if (k % 2 == 1)
            S += 1.0 / fact;
        else
            S -= 1.0 / fact;
    }

    printf("S = %.10f\n", S);
    return 0;
}