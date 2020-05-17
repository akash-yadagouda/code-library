#include <stdio.h>
#include <string.h>

#define MAX 1001

int main() {
    int tests, n, y, t, i, k;
    int tab[MAX];
    double result;

    scanf("%d", &tests);
    for (t = 0; t < tests; t++) {
        result = 0;
        k = 0;
        memset(tab, 0, sizeof(int) * MAX);

        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &y);
            tab[y]++;
        }

        for (i = MAX - 1; i > 0; i--) {
            k += tab[i];
            result += (double) tab[i] * (n + 1)/(k + 1);
        }
        printf("%.2f\n", result);
    }
    return 0;
}
