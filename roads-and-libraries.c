#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

struct node {
    int number;
    struct node *next;
};

void push_element(struct node **head, int data) {
    struct node* new_node = malloc(sizeof(struct node));
    new_node->number = data;
    new_node->next = *head;
    *head = new_node;
}

void clear(struct node *head) {
    if (head) {
        clear(head->next);
        free(head);
    }
}

void dfs(struct node **tab, char *visited, int start) {
    visited[start] = 1;
    struct node *child = tab[start];
    while (child) {
        if (!visited[child->number]) {
            dfs(tab, visited, child->number);
        }
        child = child->next;
    }
}

int main() {
    int q;
    scanf("%d", &q);
    struct node *tab[MAX]={};
    char visited[MAX]={};
    for (int a0 = 0; a0 < q; a0++){
        int n, m, road_cost, lib_cost; 
        int city_1, city_2; 
        scanf("%d %d %d %d", &n, &m, &lib_cost, &road_cost);

        for (int a1 = 0; a1 < m; a1++) {
            scanf("%d %d", &city_1, &city_2);
            push_element(&tab[city_1], city_2);
            push_element(&tab[city_2], city_1);
        }

        if (road_cost >= lib_cost) {
            printf("%ld\n", (long) n * lib_cost);
            goto clear;
        }

        long libraries = 0;
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                libraries++;
                dfs(tab, visited, i);
            }
        }
        printf("%ld\n", (long) libraries * lib_cost + road_cost * (n - libraries));

clear:
        for (int a2 = 1; a2 < MAX; a2++) {
            if (tab[a2]) {
                clear(tab[a2]->next);
                tab[a2] = NULL;
            }
            visited[a2] = 0;
        }

    }
    return 0;
}
