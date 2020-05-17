
#include <stdio.h>
#include <stdlib.h>




// Complete the findDigits function below.
int findDigits(int n) {
int temp=n;
int digit;
int count=0;
while(n>9)
 {
   digit=n%10;
    n=n/10;
   if(digit!=0)
   {
      // printf("%d ",digit);


   if((temp%digit)==0)
   {
       count++;
       //printf("%d ",n);
   }
   }



 }
 if((temp%n)==0)
 { //printf("%d ",n);
     count++;
 }
 return count;
}

int main()
{

int t1;
scanf("%d",&t1);
int a[t1];

for(int i=0;i<t1;i++)
{  scanf("%d",&a[i]);

}
int result;
for(int i=0;i<t1;i++)
{
    result=findDigits(a[i]);
    printf("%d\n",result);
}


    return 0;
}

