
#include<stdio.h>

int countDivisors(int n)
{
    int i=2;
    int cnt=0;
    int s=sqrt(n);

    while(i<=s || n>1)
    {
        if(n%i==0)
        {  printf("fact=%d\n",i);
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
   printf("%d\n",res);
      if(res>=k)
      {
          printf("1\n");
      }
      else
      {
          printf("0\n");
      }




    }



}
