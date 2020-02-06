#include<iostream>
#include<string>

using namespace std;


int main()
{
   string s1;
   string s2;
   cin>>s1>>s2;


   int row=s1.length()+1;
   int col=s2.length()+1;

   int a[row][col];
   for(int i=0;i<row;i++)
   {
   	for(int j=0;j<col;j++)
   	{
   		a[i][j]=0;
   	}
   }

   for(int i=1;i<row;i++)
   {
   	for(int j=1;j<col;j++)
   	{
   		if(s1[i]==s2[j])
   		{
   			a[i][j]=a[i-1][j-1]+1;
   		}
   		else
   		{
   			a[i][j]=max(a[i-1][j],a[i][j-1]);
   		}
   	}
   }
  for(int i=0;i<row;i++)
   {
   	for(int j=0;j<col;j++)
   	{
   		cout<<a[i][j];

   	}
   	cout<<"\n";
   }
}