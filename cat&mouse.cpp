#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a,b,c;
	cin>>a>>b>>c;
 
   if(abs(c-a)<abs(c-b))
   {
   	cout<<"A";
   }
   else if(abs(c-a)==abs(c-b))
   {
   	cout<<"C";
   }
   else
   {
   	cout<<"B";
   }



}