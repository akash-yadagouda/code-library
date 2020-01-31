#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans[100000]={0};
    int q=2;
    ans[0]=1;
    int len=1;
    int num=0;
    int x=0;
    
    while(q<=n)
    {
        x=0;
        num=0;
        while(x<len)
        {
            ans[x]=ans[x]*q;
            ans[x]=ans[x]+num;
            num=ans[x]/10;
            ans[x]=ans[x]%10;
            x++;
        }
        while(num!=0)
        {
            ans[len]=num%10;
            num=num/10;
            len++;
        }
        q++;
        
        
    }
    len--;
    while(len>=0)
    {
        cout<<ans[len];
        len=len-1;
    }
    
    
    
}

