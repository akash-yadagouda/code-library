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
	 int flag=0;
	 int count=0;
	 for(int i=0;i<n;i++)
	 {
	     scanf("%d",&a[i]);
	     
	     
	 }
	 
	 int start=100;
	 for(int i=0;i<n;i++)
	 {
	     if(a[i]==0)
	     {
	         start++;
	     }
	     
	     if(a[i]==1)
	     {
	         
	         
	         if(start>5)
	         {
	             start=0;
	             start++;
	             
	         }
	         else
	         {
	             flag=1;
	             break;
	         }
	     }
	     
	     
	 }
	 
	 
	 if(flag==1)
	 { 
	     printf("NO\n");
	     
	 }else
	 	 {
	 	     printf("YES\n");
	     
	 }
	    
	}
	
	return 0;
}

