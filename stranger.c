
#include<stdio.h>
#include<math.h>

int countDivisors(int n)
{
    int i=2;
    int cnt=0;
   

    while(i<=sqrt(n))
    {
        if(n%i==0)
        {  
            cnt=cnt+1;
            n=(n/i);
            i=2;
        }else
        {
            i=i+1;
        }
       
    }
    if(n>1)
    {
        return (cnt+1);
    }else
    {
        return cnt;
    }
}


int main()
{


    int t;

    scanf("%d",&t);

    while(t--)
    {
        int x,k;

        scanf("%d",&x);

        scanf("%d",&k);

      int res=  countDivisors(x);
 //  printf("%d\n",res);
      if(res>=k)
      {
          printf("1\n");
      }
      else
      {
          printf("0\n");
      }




    }

return 0;

}
