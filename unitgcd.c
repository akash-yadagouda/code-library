#include <stdio.h>

int main(void) {
	// your code goes here

	int t;

	scanf("%d",&t);

	while(t--)
	{

	    int n;

	    scanf("%d",&n);

	    int tot=n/2;
	    if(tot==0)
        {
            tot=1;
        }


	    printf("%d\n",tot);
	    int i=0;
	    tot=n;
	    while(tot>1)
	    {
	        if(tot==3)
	        {
	            printf("3 %d %d %d\n",i+1,i+2,i+3);
	            break;
	        }

	        if(tot>=2)
	        {
	            printf("2 %d %d\n",i+1,i+2);
	            i+=2;
	            tot=tot-2;
	        }



	    }
	    if(tot==1)
        {
            printf("1 %d\n",i+1);
        }


	}



	return 0;
}


