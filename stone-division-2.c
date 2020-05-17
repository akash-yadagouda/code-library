#include <stdio.h>
#include <stdlib.h>

int compare( const void* a, const void* b)
{
    long long num_a = * ( (long long*) a );
    long long num_b = * ( (long long*) b );
    return (num_a > num_b) - (num_a < num_b);
}

int main() {
    int q;
    long long n;
    long long m_tab[1000];
    long long divisions[1000];
    int m_size;

    scanf("%d", &q);
    for (;q > 0; q--) {
        scanf("%lld", &n);
        scanf("%d", &m_size);
        int i = 0;
        long long m;
        for (; m_size > 0; m_size--) {
            scanf("%lld", &m);
            if (n % m == 0 && n > m) {
                m_tab[i] = m;
                i++;
            }
        }
        m_size = i;
        qsort(m_tab, m_size, sizeof(long long), compare);
        for (i = 0; i < m_size; i++) {
            divisions[i] = 1;
        }

        for (i = m_size - 1; i >= 0; i--) {
            int j;
            for(j = i + 1; j < m_size; j++) {
                if (m_tab[j] % m_tab[i] == 0) {
                    long long number_of_piles = n / m_tab[j];
                    long long possible_divisions = divisions[j] + number_of_piles;
                    if (possible_divisions > divisions[i]) {
                        divisions[i] = possible_divisions;
                    }
                }
            }
        }
        long long max_divisions = 0;
        for (i = 0; i < m_size; i++) {
            if (divisions[i] > max_divisions) {
                max_divisions = divisions[i];
            }
        }
        printf("%lld\n", max_divisions);
    }
    return 0;
}

