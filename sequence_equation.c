#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the permutationEquation function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//

int get_index(int a[],int n,int num)
{
    int index;
 for(int i=0;i<n;i++)
 {
     if(num==a[i])
     {
         index=i+1;
         break;
     }
 }
 for(int i=0;i<n;i++)
 {
     if(index==a[i])
     {
         index=i+1;
         break;
     }
 }
 printf("%d\n",index);
return index;



}

int* permutationEquation(int p_count, int* p, int* result_count) {


*result_count=p_count;
static int a[20];
for(int i=0;i<p_count;i++)
{
    a[i]=get_index(p,p_count,i+1);

}
return a;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** p_temp = split_string(readline());

    int* p = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        char* p_item_endptr;
        char* p_item_str = *(p_temp + i);
        int p_item = strtol(p_item_str, &p_item_endptr, 10);

        if (p_item_endptr == p_item_str || *p_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(p + i) = p_item;
    }

    int p_count = n;

    int result_count;
    int* result = permutationEquation(p_count, p, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
