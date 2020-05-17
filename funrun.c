#include <stdio.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n;
	   scanf("%d",&n);
	   
	   int a[n];
	   int b[n];
	   
	   int mina;
	   int minb;
	   
	   
	   int maxa,maxb;
	   
	   for(int i=0;i<n;i++)
	   {
	       
	       scanf("%d",&a[i]);
	       if(i==0)
	       {
	          
	           maxa=a[i];
	       }
	       else
	       {
	          
	          if(maxa<a[i])
	          {
	              maxa=a[i];
	          }
	       }
	       
	   }
	   for(int i=0;i<n;i++)
	   {
	       
	       scanf("%d",&b[i]);
	       if(i==0)
	       {
	           minb=b[i];
	           maxb=b[i];
	       }
	       else
	       {
	          
	          if(maxb<b[i])
	          {
	              maxb=b[i];
	          }
	       }
	       
	       
	       
	   }
	 //  printf("%d %d\n",maxa,maxb);
	   if(maxa==maxb)
	   {
	       printf("NO\n");
	   }
	   else
	   {
	       printf("YES\n");
	   }
	   
	    
	    
	}
	
	return 0;
}

