#include<stdio.h>

int bcf(int n,int k)
{

    if(n==k || k==0)
    {
        return 1;
    }
    return(bcf(n-1,k-1)+bcf(n-1,k));
}
int main()
{

    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int res=bcf(n,k);
    printf("%d",res);

}
