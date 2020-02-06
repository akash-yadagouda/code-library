#include<bits/stdc++.h>

using namespace std;


int main()
{   int size;
	cout<<"enter the size\n";
	cin>>size;
	cout<<"enter the array \n";
	vector<int> arr;
	int temp;
	for(int i=0;i<size;i++)
	{
		cin>>temp;
		arr.push_back(temp);

	}

	int flag=0;
	int com=arr[size-1];
	
		for(int j=size-2;j>=0;j--)
		{
			if(arr[j]<com)
			{
                arr[j+1]=com;
                flag=1;
                break;
			}
			else
			{
				arr[j+1]=arr[j];
			}
			for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
		}

		if(flag==0)
		{
			arr[0]=com;
		}
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	

	


}