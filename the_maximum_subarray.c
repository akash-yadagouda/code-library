#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void maxSubarray(int arr_count, int* arr) {


int max=INT_MIN;
int max1=INT_MIN;
 int tmax[2]={0};

for(int i=0;i<arr_count;i++)
{
    tmax[0]+=arr[i];
    if(arr[i]>0)
    {
      tmax[1]+=arr[i];
if(max1<tmax[1])
{
    max1=tmax[1];
}
 if(tmax[1]<0)
  {
      tmax[1]=0;
  }

    }
    if(max<tmax[0])
    {
        max=tmax[0];
    }
  
  if(tmax[0]<0)
  {
      tmax[0]=0;
  }
 

}
if(max<0)
{
    max1=max;
}


printf("%d ",max);
printf("%d\n",max1);

}


int main()
{

int t;
scanf("%d",&t);

while(t--)
{
  int n;
  scanf("%d",&n);
  int a[n];

  for(int i=0;i<n;i++)
  {
     scanf("%d",&a[i]);

  }
  maxSubarray(n,a);



}
return 0;


}
