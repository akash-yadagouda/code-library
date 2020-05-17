
#include<stdio.h>
#include<string.h>

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

        int dp[n];
        int index=0;
        memset(dp,0,n*sizeof(int));
           int even_flag=0;
           int odd_flag=0;

        if(a[0]%4==0 || a[0]%2==1)
        {
            dp[0]=1;
            if(a[0]%2==1)
           {

           odd_flag=1;}
            else
            {


            even_flag=1;

            }
        }
        else
        {
            even_flag=1;
        }

        for(int i=1;i<n;i++)
        {

          if(a[i]%4==0 || a[i]%2==1)  //its a good number
          {

             // dp[i]=dp[i-1]+i+1;

              if(a[i]%2==0)
              {
                  even_flag++;
                  odd_flag=0;
              }
              else if(a[i]%2==1)
              {
                  odd_flag++;
                 // even_flag=0;

              }
            if(odd_flag>=2)
              {
                  //odd_flag==2;
                  dp[i]=dp[i-1]+odd_flag;
              }
              else if(even_flag>=1)
              {
             dp[i]=dp[i-1]+even_flag;
              }
              else{
                dp[i]=dp[i-1]+1;
              }

          }
          else //not a good number
          { even_flag++;
              if(even_flag>=1)
              {
                  //even_flag==2;
                  if(even_flag>odd_flag)
                  {
                      dp[i]=i+dp[i-1];
                  }
                  else if(odd_flag>0)
                  {
                      dp[i]=even_flag+dp[i-1]-odd_flag;
                  }
                  else{
                  dp[i]=dp[i-1]+i;
                  }
              }
              else
              {dp[i]=dp[i-1];

              }
              odd_flag=0;

          }




        }
        printf("%d\n",dp[n-1]);

    }





    return 0;
}

