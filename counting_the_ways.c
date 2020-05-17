#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the countWays function below.
 */
int countWays(int arr_count, int* arr, long l, long r) {
    /*
     * Write your code here.
     */

const unsigned int M = 1000000007; 
 long  count=0;
r=r%M;
l=l%M;
 unsigned long long int i=r;
//int *a;
   long a[i+1];
 //  long a1[i+1]
  // a=( int *)malloc((i+1)*sizeof(int));
  memset(a+1,0,(i+1 )*(sizeof(long)));
  a[0]=1;



 for(unsigned long long int j=0;j<arr_count;j++ )
 {
     for(unsigned long long int k=arr[j];k<i+1;k++)
     {
         a[k]=((a[k-arr[j]]%M)+(a[k]%M))%M;
         
     }
   
 }
 //printf("%d\n",i);
 //count=count+a[i];


 
 for( int m=l;m<i+1;m++)
  {  a[m]=a[m]%M;
      count=(count%M+a[m]%M)%M;
      //count=count%M;
     // printf("%d\n",count);
  }

return (count);


}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* arr_count_endptr;
    char* arr_count_str = readline();
    int arr_count = strtol(arr_count_str, &arr_count_endptr, 10);

    if (arr_count_endptr == arr_count_str || *arr_count_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int* arr = malloc(arr_count * sizeof(int));

    for (int arr_itr = 0; arr_itr < arr_count; arr_itr++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + arr_itr);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + arr_itr) = arr_item;
    }

    char** lr = split_string(readline());

    char* l_endptr;
    char* l_str = lr[0];
    long l = strtol(l_str, &l_endptr, 10);

    if (l_endptr == l_str || *l_endptr != '\0') { exit(EXIT_FAILURE); }

    char* r_endptr;
    char* r_str = lr[1];
    long r = strtol(r_str, &r_endptr, 10);

    if (r_endptr == r_str || *r_endptr != '\0') { exit(EXIT_FAILURE); }

    int result = countWays(arr_count, arr, l, r);

    fprintf(fptr, "%d\n", result);

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

