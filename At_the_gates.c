#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        char coin[n][2];
        int c_count[2]={0};
        int flipped=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",coin[i]);
            if(strcmp(coin[i],"H")==0)
            {
                c_count[0]++;
            }
            else
            {
                c_count[1]++;

            }
        }

        while(k--)
        { //printf("%d",k);
            if(flipped%2==1)
            {    //flipped
                if(coin[n-1][0]=='H')
                {
                   n--;
                   c_count[1]--;
                }
                else
                {
                   // c_count[0]--;
                   // c_count[1]--;
                    n--;
                    int temp=c_count[0];
                    c_count[0]=c_count[1];
                    c_count[1]=temp;
                        flipped++;

c_count[1]--;
                }

            }
            else
            {
                  if(coin[n-1][0]=='T')
                {
                   n--;
                   c_count[1]--;
                }
                else
                {
                  //  c_count[0]--;
                    n--;
                     // c_count[1]--;
                    int temp=c_count[0];
                    c_count[0]=c_count[1];
                    c_count[1]=temp;
                    flipped++;
c_count[1]--;
                }

            }


        }






   printf("%d\n",c_count[0]);





    }





    return 0;
}
