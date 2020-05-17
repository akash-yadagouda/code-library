#include<limits.h>
#include<stdio.h>



int count_bits_set1(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n&n-1;
        count++;
    }
    return count;
}

/*int count(int n)
{
    int count=0;
    while(n)
    {
        count=count+n&1;
        n>>=1;
    }
    return count;
}*/

int is_bit_not_set(int i,int j)
{
    return((i|(1<<j))==i);
}


int min(int a ,int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int n=8;
    int cost[3][3]={{3,2,7},{5,1,3},{2,7,2}};
    int dp[8]={INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX};
    dp[0]=0;
    for(int i=0;i<8;i++)
    {
        int x=count_bits_set1(i);
        for(int j=0;j<3;j++)
        {
            if(is_bit_not_set(i,j)==0)
            { // printf("1\n");
                dp[i|(1<<j)]=min(dp[i|(1<<j)],dp[i]+cost[x][j]);

            }
        }
    }
    printf("%d\n",dp[7]);
    return 0;
}
