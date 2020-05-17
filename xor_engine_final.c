
#include<stdio.h>
int BitsSetTable256[256];


void initialize()
{

    BitsSetTable256[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        BitsSetTable256[i] = (i & 1) +
        BitsSetTable256[i / 2];
    }
}

int countSetBits(long long  int n)
{
    return (BitsSetTable256[n & 0xff] +
            BitsSetTable256[(n >> 8) & 0xff] +
            BitsSetTable256[(n >> 16) & 0xff] +
            BitsSetTable256[n >> 24]);
}

int main()
{
initialize();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int q;
        scanf("%d",&q);
        long long int a[n];
        int even=0;
          int odd=0;

        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);

long long int k=countSetBits(a[i]);
        if(k%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        }
        int p[q];

        for(int i=0;i<q;i++)
        {
          scanf("%d",&p[i]);

             if( countSetBits(p[i])%2==0)
             {
                 printf("%d %d\n",even,odd);
             }
             else
             {
                 printf("%d %d\n",odd,even);
             }


        }



    }

}
