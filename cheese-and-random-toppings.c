#include <stdio.h>

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

long long binomial_coefficient(int n, int k) {
    if (n < k) {
        return 0;
    }
    long long ans = 1;
    k = k < (n - k) ? k : (n - k);
    for (int i = 1; i <= k; i++, n--) {
        if (n % i == 0) {
            ans *= n / i;
        } else if (ans % i == 0) {
            ans = (ans / i) * n;
        } else {
            ans = (ans * n) / i;
        }
    }
    return ans;
}

long long lucas_theorem(int n, int k, int p) {
    long long ans = 1;
    while (k > 0) {
        int temp_n = n % p;
        int temp_k = k % p;
        ans *= binomial_coefficient(temp_n, temp_k) % p;
        ans %= p;
        n /= p;
        k /= p;
    }
    return ans;
}

long long get_reminder_squarefree(int n, int k, int m) {
    long long ans = -1;
    long long last = 1;
    int primes_length = sizeof(primes) / sizeof(int);
    if (m == 1) {
        return 0;
    }
    for (int i = 0; i < primes_length && m > 1; i++) {
        if (m % primes[i] != 0) {
            continue;
        }
        long long reminder = lucas_theorem(n, k, primes[i]);
        if (ans == -1) {
            ans = reminder;
        } else {
            for (int j = 0; j < 50; j++) {
                if ((ans + (last * j)) % primes[i] == reminder) {
                    ans = (ans + (last * j));
                    break;
                }
            }
        }
        last *= primes[i];
        m /= primes[i];
    }
    return ans;
}

int main() {
    int t, m, r, n;
    scanf("%d", &t);
    for (; t > 0; t--) {
        scanf("%d %d %d", &n, &r, &m);
        printf("%lld\n", get_reminder_squarefree(n, r, m));
    }
    return 0;
}

