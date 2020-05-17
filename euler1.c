#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int a[t];
    for(int a0 = 0; a0 < t; a0++){
         
        scanf("%d",&a[a0]);
    }
long long  int sum=0,sum1=0,sum2=0;
    for(int i=0;i<t;i++)
    { sum=0;
      
      if(a[i]%3==0 && a[i]>=0)
      {
 sum=(a[i]/3);
 sum=sum-1;
      }
      else
      { sum=(a[i]/3);

      }
      
        sum=((3*sum))*(sum+1);
        sum=sum/2;
        

       sum1=0;


if(a[i]%5==0 && a[i]>0)
      {
 sum1=(a[i]/5);
 sum1=sum1-1;
      }
      else
      { sum1=(a[i]/5);

      }
    
      
       sum1=((5*sum1))*(sum1+1);
       sum1=sum1/2;


 sum2=0;
if(a[i]%15==0 && a[i]>0)
      {
 sum2=(a[i]/15);
 sum2=sum2-1;
      }
      else
      { sum2=(a[i]/15);

      }
    

       
       
       sum2=((15*sum2))*(sum2+1);
       sum2=sum2/2;

   


       sum=sum+sum1-sum2;
        printf("%lld\n",sum);
    }
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int a[t];
    for(int a0 = 0; a0 < t; a0++){
         
        scanf("%d",&a[a0]);
    }
long long  int sum=0,sum1=0,sum2=0;
    for(int i=0;i<t;i++)
    { sum=0;
      
      if(a[i]%3==0 && a[i]>=0)
      {
 sum=(a[i]/3);
 sum=sum-1;
      }
      else
      { sum=(a[i]/3);

      }
      
        sum=((3*sum))*(sum+1);
        sum=sum/2;
        

       sum1=0;


if(a[i]%5==0 && a[i]>0)
      {
 sum1=(a[i]/5);
 sum1=sum1-1;
      }
      else
      { sum1=(a[i]/5);

      }
    
      
       sum1=((5*sum1))*(sum1+1);
       sum1=sum1/2;


 sum2=0;
if(a[i]%15==0 && a[i]>0)
      {
 sum2=(a[i]/15);
 sum2=sum2-1;
      }
      else
      { sum2=(a[i]/15);

      }
    

       
       
       sum2=((15*sum2))*(sum2+1);
       sum2=sum2/2;

   


       sum=sum+sum1-sum2;
        printf("%lld\n",sum);
    }
    return 0;
}

