
#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition1 (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] > pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort1(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition1(arr, low, high);


        quickSort1(arr, low, pi - 1);
        quickSort1(arr, pi + 1, high);
    }
}



int main()
{

    int t;
    scanf("%d",&t);
    int s;
    scanf("%d",&s);


    while(t--)
    {
         int n;
    scanf("%d",&n);
    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

         for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    quickSort(a,0,n-1);
    quickSort1(b,0,n-1);
    int flag=0;
    int table[100001];
    memset(table,0,100001*(sizeof(int)));
    for(int i=0;i<n;i++)
    {
        if( ((a[i]==b[i] && i!=n-1) || a[i]>b[i]))
        {
            flag=1;
            break;

        }

        if(i>0 && table[a[i]]==0)
        {
            flag=1;
            break;
        }

        table[a[i]]=1;
        table[b[n-1]]=1;
        printf("%d %d table=%d %d\n",a[i],b[i],table[a[i]],table[b[i]]);

    }

    if(flag==1)
    {

        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }




    }





}
