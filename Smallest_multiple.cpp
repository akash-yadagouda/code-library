#include<bits/stdc++.h>

using namespace std;


int main()
{

  int T;
  int k;
  int ans=0;

  for(int i=0;i<T;i++)
  {
  	cin>>k;
  	ans=1;

  	for(int j=2;j<=k;j++)
  	{
      ans=(ans*j)/__gcd(ans,j);
  	}
  	cout<<ans<<endl;

  }


}