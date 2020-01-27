#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h> 

using namespace std;
vector<string> ga;


int  check(string b,int k)
{  
    auto it=find(ga.begin(),ga.end(),b);
    if(it!=ga.end())
    {  
        
       return 0; 
    }
    ga.push_back(b);
    
    
 
    vector<char> av,ab;
	int flag=0;
	for(int i=0;i<b.length();i++)
		av.push_back(b[i]);


	for(int i=0;i<av.size();i++)
	{
		if(av[i]=='x')
		{
			ab.push_back(av[i]);
		}
		else
		{
			if(ab.size()==0)
			{
				//cout<<"fail:"<<b<<endl;
				
				flag=1;
				break;
				
			}
			else
			ab.pop_back();
		}
	}
	if(flag==0)
	{
		cout<<b<<endl;
		
		
	}
	return 0;
    
}










void permute(string &a,int l,int r)
{
	int i;
	if(l==r)
	{
	 // ga.push_back(ga);
	//  cout<<"before calling fun"<<" "<<a<<"\n";
	
	check(a,r);

	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(a[l],a[i]);
			permute(a,l+1,r);
			swap(a[l],a[i]);
		}
	}
}

int main()
{

    string a="xyxyxyxy";
	int n=a.length();
	cout<<"all dynk_paths for n"<<endl;
	permute(a,0,n-1);
	
	return 0;
}