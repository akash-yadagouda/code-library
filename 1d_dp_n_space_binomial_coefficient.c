#include<stdio.h>
#include<string.h>

int min(int a,int b)
{

    if(a<b)
    {
        return a;
    }
    return b;
}
int bcf(int n,int k)
{
    int dp[n+1];
    memset(dp,0,(n+1)*(sizeof(int)));
    dp[0]=1;
    for(int i=0;i<=n;i++)
    {

        for(int j=min(i,k);j>0;j--)
        {
            dp[j]=dp[j]+dp[j-1];

        }
    }
    return dp[k];
}

int main()
{

    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);

    int res=bcf(n,k);

    printf("%d",res);

}
