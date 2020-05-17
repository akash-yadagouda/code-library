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

// Complete the minimumDistances function below.
int minimumDistances(int a_count, int* a) {


int arr[100001]={0};
int arr1[100001]={0};
int min=10000000;
for(int i=0;i<a_count;i++)
{

  
   if(arr[a[i]]==1)
   { // printf("if\n");
       arr1[a[i]]=i-arr1[a[i]];
       if(min>arr1[a[i]] && arr1[a[i]]!=0)
       {
           min=arr1[a[i]];
       }
   }
   else
   {
       arr[a[i]]++;
       arr1[a[i]]=i;
   }



}

if(min==10000000)
{
    return -1;
}

return min;

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
 
    int a_count = n;

    int result = minimumDistances(a_count, a);

   // fprintf(fptr, "%d\n", result);

    //fclose(fptr);

printf("%d",result);
    return 0;
}

