
#include <stdio.h>

int main(void) {
	// your code goes here

	int t,n,c;

	scanf("%d",&t);

	if(t>=1 && t<=1000)
	{


	    for(int k=0;k<t;k++)
	    {

	    scanf("%d",&n);

	    if(n>=1 && n<=100)
	    {  int a[n];
	        scanf("%d\n",&c);
	        if(c>=1 && c<=1000000000)
	        {
	            for(int i=0;i<n;i++)
	            {
	                scanf("%d",&a[i]);
	            }

	            int sum=0;

	            for(int i=0;i<n;i++)
	            {
	                sum=sum+a[i];
	            }

	            if(sum<=c)
	            {
	                printf("Yes\n");

	            }
	            else
	            {
	                printf("No\n");
	            }
	        }
	    }
	    }
	}




		return 0;
}

