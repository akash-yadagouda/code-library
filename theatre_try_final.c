#include<stdio.h>
#include<string.h>


int ab={0};

void sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {

            if(arr[j]<arr[j+1])
            { temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

            }
        }
    }
}

long long int get_count1(int arr[4][4])
{
    int data[4]={0};


    long long int total=-500;



  int temp;



for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        //printf("%d ",arr[i][j]);
    }
 //   printf("\n");
}







for(int j=0;j<4;j++ )
 {

  for(int k=0;k<4;k++)
  {

      for(int l=0;l<4;l++)
      {

          for(int m=0;m<4;m++)
          {


             if(!(j==k || j==l  || k==l || k==m || l==m ||j==m))
             { // printf(" %d %d %d %d\n",j,k,l,m);
            data[0]=arr[0][j];
            data[1]=arr[1][k];
            data[2]=arr[2][l];
            data[3]=arr[3][m];
         //  printf("%d ",data[k]);

          //printf("\n");

           sort(data,4);
                  int price=100;
                  int total1=0;
           for(int p=0;p<4;p++)
                 { //printf("data=%d ",data[p]);

      if(data[p]==0)
           { total1=total1-100;}
           // printf(" total in 0=%d ",total1);


        else
        {
           if(p==0)
           {
            total1=total1+(data[p]*100);

           }
           else if(p==1)
           {

            total1=total1+(data[p]*75);
           }
           else if(p==2)
           {

            total1=total1+(data[p]*50);
           }
           else
           {

            total1=total1+(data[p]*25);
           }
             // printf(" total in else =%d ",total1);
        }

                 }     // printf("total1=%d\n",total1);  //printf("\n");


                  if(total1 > total)
                 {  ab=0;
                     total=total1;

                 }


          }

          }

  }


  }


 }



























    return total;

}



int main()
{

    int t;
    scanf("%d",&t);

  long long   sum=0;

    for(int i=0;i<t;i++)
    {

        int n;
         scanf("%d",&n);

        int arr[4][4]={0};

        for(int j=0;j<n;j++)
        {



            char sh[2];
            int ti;
            scanf("%s",sh);
           //sh = getchar();
            scanf("%d",&ti);



            int in=(ti/3)-1;
            if(sh[0]=='A')
            {

                arr[0][in]++;




            }
            else if(sh[0]=='B')
            {
                arr[1][in]++;

            }
            else if(sh[0]=='C')
            {
                arr[2][in]++;

            }
            else
            {
                arr[3][in]++;

            }

        }



        long long int count=get_count1(arr);
       // count=count-(ab*100);
        printf("%lld\n",count);
        sum=sum+count;



    }



    printf("%lld",sum);
}


