#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_PSWD_LEN 11
#define PSWD_NUM 10
#define ATTEMPT_LENGTH 2001

char *tab[PSWD_NUM];
int lengths[PSWD_NUM];
char pass[ATTEMPT_LENGTH];
char visited[ATTEMPT_LENGTH];
struct node *match[ATTEMPT_LENGTH] = {};
int t, n, len;

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

struct node* find_pass(int position) {
    struct node *result = NULL;
    if (position == len) {
        push_element(&result, -1);
        return result;
    } else if (!visited[position]){
        struct node *head = match[position];
        int offset;
        while(head) {
            offset = lengths[head->number];
            result = find_pass(position + offset);
            if (result) {
                push_element(&result, head->number);
                return result;
            }
            head = head->next;
        }
        visited[position] = 1;
    }
    return NULL;
}


int main() {
    scanf("%d", &t);
    for (int m = 0; m < PSWD_NUM; m++) {
        tab[m] = malloc(MAX_PSWD_LEN * sizeof(char));
    }
    for (int tests = 0; tests < t; tests++) {
        for (int v = 0; v < ATTEMPT_LENGTH; v++) {
            visited[v]=0;
        }

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%s", tab[i]);
            lengths[i] = strlen(tab[i]);
        }
        scanf("%s", pass);

        len = strlen(pass);
        int index = 0;
        for (int i = 0; i < n; i++) {
            char *pointer = pass;
            while (pointer = strstr(pointer, tab[i])) {
                index = pointer - pass;
                pointer++;
                push_element(&match[index], i);
            }
        }

        struct node *result = find_pass(0);

        if(!result) {
            printf("WRONG PASSWORD");
        }

        while(result && result->number >= 0) {
            printf("%s ", tab[result->number]);
            result = result->next;
        }
        printf("\n");

        for (int i = 0; i < len; i++) {
            if (match[i]) {
                clear(match[i]->next);
                match[i] = NULL;
            }
        }
    }
    return 0;
}

