#include<istream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;



int main()
{

	int n1,n2;
	cout<<"enter any two positive number \n";
	cin>>n1>>n2;
	vector<int> nn1;
	deque<int> nn2;
	int carry=0,sum=0;
   
  



   while(n2!=0)
   {
   	nn2.push_back(n2%10);
   	n2=n2/10;
   }



   reverse(nn2.begin(),nn2.end());


   // all set above 


   int aa;
 
   	for(int j=nn2.size()-1;j>=0;j--)
   	{   cout<<" "<<nn2[j]<<" "<<n1;
   		aa=nn2[j]*n1+carry;
   		nn2[j]=aa%10;
   		carry=aa/10;

   	}
   	while(carry!=0)
   	{ //  cout<<"\nin carry"<<carry;
   		nn2.push_front(carry%10);
   		carry=carry/10;
   	}

   cout<<"after multiplication \n";

   cout<<"\n";
     for(int i=0;i<nn2.size();i++)
   {
   	cout<<nn2[i];
   }
	return 0;
}