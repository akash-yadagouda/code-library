
#include<stdio.h>




int main()
{


    unsigned long long int t;
    scanf("%llu",&t);

    for(unsigned long long int j=0;j<t;j++)
    {






   unsigned long long int n;
    scanf("%llu",&n);
    unsigned long long  int k;
    scanf("%llu",&k);
   unsigned long long   int a[n];
    unsigned long long  int sum=0;
    for(  unsigned long long int i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);




         unsigned long long int dif=k-(a[i]%k);
       unsigned long long   int mo=a[i]%k;
    // printf("before cal %llu\t %llu\n",dif,mo);
      if(dif>=mo &&mo!=0)
      {
        if(sum>=dif)
        {
            sum=sum-dif;
           // printf("1\n");
        }

        else
        {
            sum=sum+mo;
            //  printf("111\n");
        }

      }
      else if(mo!=0)
        {
         if(sum>=dif)
        {
            sum=sum-dif;
             // printf("1111\n");
        }

        else
        {
            sum=sum+mo;
              //printf("111111\n");
        }

      }



    }
    printf("%llu\n",sum);
    }

}
