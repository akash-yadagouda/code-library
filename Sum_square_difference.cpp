#include<bits/stdc++.h>
using namespace std;

typedef  long long lint;


lint nsum(lint a)
{
	return(a*(a+1)/2);
}
lint n2sum(lint a)
{
	return((a*(a+1)*(2*a+1))/6);

}



int main()
{

	lint T;
	cin>>T;
	lint k;
	lint ans,ans1;

	for(lint i=0;i<T;i++)
	{
		cin>>k;
		ans=nsum(k);

		ans1=n2sum(k);

		//cout<<ans1<<endl;

		cout<<abs(ans1-(ans*ans))<<endl;



	}



}