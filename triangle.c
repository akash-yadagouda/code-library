#include <stdio.h>



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
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int verify(int y,int x1,int x2)
{

    return((x1*x2+(y*y)==0));
}


int main(void) {
	// your code goes here

	int t;
	scanf("%d",&t);
	while(t--)
	{ int count=0;
	    int n;
	    int m;
	    scanf("%d",&n);
	    scanf("%d",&m);
	    int x[n];
	    int y[m];
	    int index_x=n-1;
	    int index_pos_y=m-1;
	    int index_neg_y=0;

	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&x[i]);
	    }
	    for(int j=0;j<m;j++)
	    {
	        scanf("%d",&y[j]);
	    }
	    quickSort(x,0,n-1);
	    quickSort(y,0,m-1);


	    for(int i=0;i<n;i++)
	    {
	        if(x[i]>=0)
	        {
	            break;
	        }
	      //  printf("a\n");

	        for(int j=index_x;j>0;j--)
	        {
	           // printf("ab\n");

	            if(x[j]<=0)
	            {
	                break;
	            }

	            for(int k=index_neg_y;y[k]<0;k++)
	            {
	                if(verify(y[k],x[i],x[j])==1)
	                {
	                    count++;
	                    index_neg_y=k+1;
	                    printf("caught down\n");
	                    break;
	                }//printf("abc\n");

	            }

	            for(int k=index_pos_y;y[k]>0;k--)
	            {
	                if(verify(y[k],x[i],x[j])==1)
	                {
	                    count++;
	                    index_pos_y=k-1;
	                    printf("caught up\n");
	                    break;
	                }//printf("abd\n");

	            }




	        }
	    }
	    printf("%d\n",count);

	}


	return 0;
}

