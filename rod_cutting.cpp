#include<iostream>
#include<vector>
using namespace std;

int main()
{

   int rod,cut_l;
   cin>>rod>>cut_l;
     cut_l=cut_l+1;
     rod=rod+1;
   int price[cut_l]={0};
   int cut_len[cut_l]={0};
   for(int i=1;i<cut_l;i++)
   {
   	    cin>>cut_len[i];
   }

   for(int i=1;i<cut_l;i++)
   {
   	    cin>>price[i];
   }
   int serial_len[rod];
   for(int i=0;i<rod;i++)
   {
   	     serial_len[i]=i;
   }


  int mm[cut_l][rod]={0};


  for(int i=0;i<cut_l;i++)
  {
  	for(int j=0;j<rod;j++)
  	{
  		mm[i][j]=0;
  	}
  }




  for(int i=1;i<cut_l;i++)
  {
  	for(int j=1;j<rod;j++)
  	{
  		
        if(i==1)
        {
        	for(int m=1;m<rod;m++)
        	{
        		mm[i][m]=price[i]*m;

        	}
        }
        if(i>j)
        {
        	mm[i][j]=mm[i-1][j];

        }
  		else
  		{
  		     mm[i][j]=max(mm[i-1][j],price[i]+mm[i][j-i]);
        }
  	}
  }
  int ll=0;;
   for(int i=0;i<cut_l;i++)
  {
  	for(int j=0;j<rod;j++)
  	{
  		if(mm[i][j]>ll)
  		{
  			ll=mm[i][j];
  		}
  	}
  }
  cout<<ll<<endl;




}

