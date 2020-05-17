#include <stdio.h>

#define MAX 100000

int main() {
    int n, i;
    int tab[MAX], out[MAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        out[i] = 1;
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    for (i = 1; i < n; i++) {
        if (tab[i - 1] < tab[i]) {
            out[i] = out[i-1] + 1;
        }
    }
    for (i = n - 1; i > 0; i--) {
        if (tab[i - 1] > tab[i]) {
            if (out[i-1] <= out[i]) {
                out[i-1] = out[i] + 1;
            }
        }
    }
    long sum = 0;
    for (i = 0; i < n; i++) {
        sum += out[i];
    }
    printf("%ld\n", sum);
    return 0;
}

