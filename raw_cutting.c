#include<stdio.h>


int max(int a, int b) { return (a > b)? a : b;}

 int rod_cutting(int n)
{
    int result[n+1];
    if(n==0)
    {

        return 0;
    }
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        result[i]=0;
        for(int j=1;j<=i/2;j++)
        {
            result[i]=max(result[i],j*(i-j));

        }
    }

}




int main()
{
    int n,n1;
    scanf("%d",&n);
    n1=rod_cutting(n);
    printf("%d\n",n1);
}
