#include<bits/stdc++.h>
#include<vector>

using namespace std;



int main()
{
	int size;
	cin>>size;
	long long int goal[size]={0};
    
    for(int i=0;i<size;i++)
    {
         cin>>goal[i];
    }
	long long int rised=0;
	long long int down=0;
    long long int r=goal[0];
    long long int b=goal[0];
	for(int i=1;i<size;i++)
	{
		if(r<goal[i])
		{
			rised++;
			r=goal[i];
		}
		if(b>goal[i])
		{
			down++;
			b=goal[i];
		}

	}
	cout<<rised<<" "<<down;
}