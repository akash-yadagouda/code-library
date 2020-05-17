
#include <stdio.h>

int overpaid(unsigned long long int n,unsigned  long long int p,unsigned long long int a[])
{

    for(unsigned long long int i=0;i<n;i++)
    {

        if(p%a[i]!=0)
        {  //it is guaranteed that it is yes
            return 1;

        }
    }
    return 0;

}


void check_overpays(unsigned long long int n,unsigned long long int p,unsigned long long int a[])
{
    unsigned long long  int arr[n];
     unsigned long long  int index[n];
    unsigned long long   int count=0;




      int flag=0;
    for(unsigned long long int i=0;i<n;i++)
    {
        for(unsigned long long int j=i+1;j<n;j++)
        { // printf("i=%d \t j=%d\n",a[i],a[j]);
            if(a[j]%a[i]!=0)
            {
            //    printf("avcdf");
               flag=1;
                break;
            }

        }
        if(flag==1)
        {
            break;
        }
    }

    int ab=overpaid(n,p,a);
    if(flag==0 && ab==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES ");

         count=0;
        unsigned long long  int sum=0;
       long long    int sum1=p;
        for(unsigned long long int i=n-1;i>=0;i--)
        { // printf("%d\n",sum1);
            if(sum1<a[i])
            {
                arr[i]=1;
                count++;
                break;
            }

           if(sum1%a[i]==0)
           {  arr[i]=sum1/a[i];
           arr[i]--;
           sum1=sum1-(arr[i]*a[i]);
           count++;

              // i--;
              //  printf("b\n");
           }
           else
           {
               arr[i]=(sum1/a[i]);
               arr[i]++;

               count++;
               sum1=(sum1-(arr[i]*a[i]));

               // printf("%d\n",sum1);
                if(sum1<0)
                {
                    break;
                }

           }

        }
        //printf("bbbb\n");

        for(unsigned long long int i=0;i<n;i++)
        {
           if(n-i<=count)
           {
               printf("%llu ",arr[i]);
           }
           else
           {
              printf("0 ");
           }
        }


        }

    }






int main(void) {
	// your code goes here

unsigned long long int t;
	scanf("%llu",&t);
while(t--)
	{

unsigned long long int n;
unsigned long long int p;

	scanf("%llu",&n);
	scanf("%llu",&p);

unsigned long long	int a[n];
	for(unsigned long long int i=0;i<n;i++)
	{
	    scanf("%llu",&a[i]);
	  //  printf("aaa...  %d\n",a[i]);
	}
	int res;
	 //check_overpays(n,p,a);

   check_overpays(n,p,a);
   printf("\n");





	}
	return 0;
}

