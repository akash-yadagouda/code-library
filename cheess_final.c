

#include<stdio.h>

int main()
{


    int ways[42][2]={{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{7,7},{6,8},{5,7},
                     {4,6},{3,5},{2,4},{1,3},{2,2},{3,1},{4,2},{5,3},{6,4},{7,5},{8,6},
                     {7,5},{8,4},{7,3},{6,2},{5,1},{6,2},{7,1},{8,2},{7,3},{6,4},{5,5},
                     {4,6},{3,7},{2,8},{1,7},{2,6},{1,5},{2,6},{3,7},{4,8}};

    int n;
    scanf("%d",&n);

    while(n--)
    { int res=42;
      int a,b;
      scanf("%d %d",&a,&b);
      if(a==b && a!=1)
      {
           res=res+(a-1);
          printf("%d\n",res);
          for(int i=a;i>1;i--)
          {
              printf("%d %d\n",a,a);

          }
      }
      else if(a<b)
      {
          int c=b-a;
          res=res+(c/2);
          res=res+(a+b)/2;
          res=res-1;
          printf("%d\n",res);
          while(a!=b)
          {
              printf("%d %d\n",a,b);
              a=a+1;
              b=b-1;
          }
         // res=res+(a-1);
          //printf("%d\n",res);
          for(int  i=a;i>1;i--)
          {
              printf("%d %d\n",a,a);

          }


      }
      else if(a>b)
      {
          int c=a-b;
          res=res+(c/2);
          res=res+(a+b)/2;
          res=res-1;
          printf("%d\n",res);
          while(a!=b)
          {
              printf("%d %d\n",a,b);
              a=a-1;
              b=b+1;
          }
         // res=res+(a-1);
          //printf("%d\n",res);
          for(int  i=a;i>1;i--)
          {
              printf("%d %d\n",a,a);

          }

      }
      else
      {

          printf("42\n");
      }


        for(int i=0;i<42;i++)
        {
            printf("%d %d\n",ways[i][0],ways[i][1]);
        }

    }


}

