#include<bits/stdc++.h>
#include<string.h>
long arr[3][1000000]={0};

using namespace std;
void get_ways(long c[],long sum[],int sum_size,long size,int from,int to)
{

   cout<<"sum array11\n";
   for(int i=0;i<sum_size;i++)
   {
      cout<<sum[i]<<" ";
   }
   cout<<"\n";


   cout<<"coins array \n";
   for(int i=0;i<size;i++)
   {
      cout<<c[i]<<" ";
   }
   cout<<"\n";


   
   

 

long i=0;
long j=0;

cout<<"i=0;i<size;i++)\n";
   for(i=0;i<1;i++)
   {arr[i][0]=1;
      cout<<"sum:"<<sum[0]<<" "<<"c[i]"<<c[0]<<endl;
      for(j=c[i];j<=sum[0];j++)
      {
         arr[i][j]=arr[i][j]+arr[i][j-c[0]];

      }
   cout<<"\n";
   }

for(long ii=0;ii<size;ii++)
{
   for(long jj=0;jj<sum[0];jj++)
   {
     
      

        cout<<arr[ii][jj]<<" ";

     
   }
   cout<<"\n";
}
   cout<<"\n";


long n=from+1;
long r=to;
long col=0;
col=j+1;
cout<<"before col"<<col<<endl;
while(n<=r){

     
    
    for(long m=0;m<size;m++)
    {
      for(long h=0;h<size;h++)
         if(m==0){

            arr[m][col]=arr[m][col]+arr[m][col-sum[h]];

         }
         else{

             arr[m][col]=arr[m-1][col]+arr[m][col-sum[h]];

         }

      
    }
    n++;
     col++;
     
}

cout<<"col:"<<col-1<<endl;
     for(long i=0;i<3;i++)
{
   for(long j=0;j<col;j++)
   {
      if(arr[i][j]==-1)
      {
         break;
      }
      else{

        cout<<arr[i][j]<<" ";

      }
     
   }
   cout<<"\n";
}




   
 }

 





   

int main()
{




     long  size;
    cin>>size;
    long  weight[size]={0};
    long   temp;
    for(int i=0;i<size;i++)
    { // cout<<"hi";
      cin>>temp;
      weight[i]=temp;
    }


    cout<<"coins array \n";
   for(int i=0;i<size;i++)
   {
      cout<<weight[i]<<" ";
   }
   cout<<"\n";








    long from =0;
    long  to=0;
    int tempp;


    int fro_to[2]={0};
    for(int i=0;i<2;i++)
    {
      cin>>tempp;
      fro_to[i]=tempp;

    }
    cout<<"fro_to[0]"<<fro_to[0]<<"\n";
     cout<<"fro_to[1]"<<fro_to[1]<<"\n";

    long sum[(fro_to[1]-fro_to[0])+1]={0};
    int ii=0;
    for(int i=fro_to[0];ii<=fro_to[1];ii++)
    {
      sum[ii]=i;
      i++;
    }
    
      cout<<"hi";



   cout<<"coins array \n";
   for(int i=0;i<size;i++)
   {
      cout<<weight[i]<<" ";
   }
   cout<<"\n";

      get_ways(weight,sum,size,(fro_to[1]-fro_to[0])+1,fro_to[0],fro_to[1]);





















	


}