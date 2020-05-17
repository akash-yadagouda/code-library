
#include<stdio.h>

int min(int a ,int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

int main()
{

    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);

    int dp[n+1][k+1];
   // memset(dp,0,(n+1)*(k+1)*sizeof(int));

    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0||j==i)
            {
                dp[i][j]=1;
            }
            else{
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
    }


    printf("\n%d",dp[n][k]);
}
