#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the equalizeArray function below.
int equalizeArray(int arr_count, int* arr) {
int ar[101]={0};
int max=-100;

for(int i=0;i<arr_count;i++)
{
    ar[arr[i]]++;
    if(ar[arr[i]]>max)
    {
        max=ar[arr[i]];
    }
}

if(arr_count-max<=0)
{
 return 0;
}
return(arr_count-max);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int result=equalizeArray(n,a);
    printf("%d",result);
    return 0;
}
