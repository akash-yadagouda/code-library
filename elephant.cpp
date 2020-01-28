#include<iostream>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>



int main()
{   vector<int> ans;
	vector<int> given;
	int ak,sum;
	int test_case=0,total_e=0;
	long long total_c=0;
	cin>>test_case;
	if(test_case>0 && test_case<=1000)
	{
		for(int i=0;i<test_case;i++)
		{
			cin>>total_e>>total_c;
			if( total_e>=1 && total_e<=100 && total_c>=1 && total_c<=pow(10,9))
			{
                  for(int i=0;i<total_e;i++)
                  { cin>>ak;
                  	if(ak>=1 && ak<=10000)
                  	{
                  	given.push_back(ak);
                    }
                    else
                    {
                    	return 0;
                    }
                  }
                   sum=accumalate(given.begin(),given.end(),0);
                   if(sum>=total_e)
                   {
                   	cout<<"YES";
                   }
                   else
                   {
                   	cout<<"NO";
                   }
                
			}

		}

	}
	return 0;
}