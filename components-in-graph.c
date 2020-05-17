#include <stdio.h>
#include <stdlib.h>

#define MAX 30001

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

void dfs(struct node **tab, char *visited, int start, int *number) {
    visited[start] = 1;
    ++(*number);
    struct node *child = tab[start];
    while (child) {
        if (!visited[child->number]) {
            dfs(tab, visited, child->number, number);
        }
        child = child->next;
    }
}

int main() {
    struct node *tab[MAX]={};
    char visited[MAX]={};
    int n;
    int node_1, node_2; 
    scanf("%d", &n);

    for (int a1 = 0; a1 < n; a1++) {
        scanf("%d %d", &node_1, &node_2);
        push_element(&tab[node_1], node_2);
        push_element(&tab[node_2], node_1);
    }

    int max = 0;
    int min = n * 2;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int number_of_nodes = 0;
            dfs(tab, visited, i, &number_of_nodes);
            if (number_of_nodes > max) {
                max = number_of_nodes;
            }
            if (number_of_nodes < min && number_of_nodes > 1) {
                min = number_of_nodes;
            }
        }
    }

    printf("%d %d", min, max);
    return 0;
}
