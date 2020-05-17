#include<stdio.h>

int getcount1(int *arr2,int n)
{
    int count1=0;
    int i=0,j=0;;

    int ccc=0;
    int codd=0;
      while(i<n)
    {
      if(arr2[i]%4==0)
      {  codd=codd+(ccc*(ccc+1)/2);
       ccc=0;
          count1=count1+(n-i);
      }
      else if(arr2[i]%2!=0)
     {

         ccc++;

     }
     else
     {
      codd=codd+(ccc*(ccc+1)/2);
       ccc=0;
     }

      i++;
    }


    codd=codd+(ccc*(ccc+1)/2);
    return (count1+codd);
}
int getcount2(int *arr1,int n)
{
    int ii=0;
    int count2=0;
     while(ii<n)
    {
        for(int i=0;i<1;i++)
    {

    }
      if(arr1[ii]%2==0 && arr1[ii]%4!=0)
      {
          int jas=ii+1;
       while(jas<n)
       {
         if(arr1[jas]%2==0)
         {
           count2=count2+(n-jas);
           ii=jas-1;
           jas=n;

         }
         jas++;
       }
      }

     ii++;

    }

    return count2;

}

int getcount3(int *arr3,int n)
{
    int count3=0;

    int sum=0;
    int ijk=0;
    while(ijk<n)
    {
        for(int i=0;i<1;i++)
    {

    }
     if(arr3[ijk]%2!=0)
     {
       count3++;
      }
     else if(arr3[ijk]%4==0)
     {
      sum=sum+(count3*(n-ijk));
       count3=0;
     }
       else if(arr3[ijk]%2==0)
     {
         int jkl=ijk+1;
    while(jkl<n)
       {
         if(arr3[jkl]%2==0)
       {
        sum=sum+(count3*(n-(jkl-1)-1));

       count3=0;
         break;
       }
       jkl++;
        }

     }
      ijk++;
    }
    int ij=0;
      while(ij<2)
      {
          ij++;
      }
   return sum;

}







int main() {
   int test;
  scanf("%d",&test);


  while(test--)
  {
      int number;
    scanf("%d",&number);
     int arr[number];

    for( int i=0;i<number;i++)
    {
      scanf("%d",&arr[i]);
    }


      int count1=0;

      count1=getcount1(arr,number);
      int ij=0;
      while(ij<2)
      {
          ij++;
      }

      int count2=0;

      count2=getcount2(arr,number);

      int count3=0;


     count3=getcount3(arr,number);

    for(int i=0;i<1;i++)
    {

    }





    printf("%d\n",count1+count2+count3);



  }

	return 0;
}
