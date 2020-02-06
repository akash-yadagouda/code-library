#include<bits/stdc++.h>
using namespace std;



void insertionSort2(int n, vector<int> arr) {
  // cout<<"\n\n";

	int st=arr[0],temp;
   int com,flag=0;
	for(int i=0;i<n;i++)
	{  com=arr[i];
		flag=0;
       for(int j=i-1;j>=0;j--)
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

       }
        if(flag==0)
		{
			arr[0]=com;
		}
		if(i!=0)
       for(int k=0;k<n;k++)
       {
       	cout<<arr[k]<<" ";
       }
       cout<<"\n";
      
	}


}


int main()
{
	int size;
	cin>>size;
	vector<int> arr;
	int temp;
	for(int i=0;i<size;i++)
	{
           cin>>temp;
           arr.push_back(temp);
	}
	insertionSort2(size,arr);
}