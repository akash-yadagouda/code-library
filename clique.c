#include <stdio.h>

int pow2(int a) {
    return a * a;
}

int divceil(int x, int y) {
    return 1 + ((x - 1) / y);
}

int turan(int n, int k) {
    return (pow2(n) - (n % k) * pow2(divceil(n, k)) - (k - (n % k)) * pow2(n / k) ) / 2;
}

int bin(int n, int e, int first, int last) {
    int middle = (first + last) / 2;
    if (middle == n) {
        return n;
    }
    if (e > turan(n, middle)) {
        if (e <= turan(n, middle + 1)) {
            return middle + 1;
        } else {
            return bin(n, e, middle + 1, last);
        }
    } else {
        return bin(n, e, first, middle - 1);
    }
}

int main() {

    int q, nodes, edges;
    scanf("%d", &q);
    for (int a0 = 0; a0 < q; a0++) {
        scanf("%d %d", &nodes, &edges);
        printf("%d\n", bin(nodes, edges, 1, nodes));
    }
    return 0;
}

