#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the introTutorial function below.
int introTutorial(int V, int arr_count, int* arr) {
int i,j;
for( i=0;i<arr_count;i++)
{
    if(V==arr[i])
    {
        j=i;
        break;
    }
}
return j;

}

int main()
{
int V;
scanf("%d",&V);
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int arr_count=n;
    int result = introTutorial(V, arr_count, arr);

    printf("%d",result);

    return 0;
}

