#include <stdio.h>

#define MAX 100000

int main(){
    int g;
    scanf("%d", &g);
    for (int a0 = 0; a0 < g; a0++) {
        int n, x;
        int max = 0;
        int count = 0;
        scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
            if (x > max) {
                max = x;
                count++;
            }
        }

        if (count%2 == 1) {
            printf("BOB\n");
        } else {
            printf("ANDY\n");
        }

    }
    return 0;
}

