#include<stdio.h>
#include<stdlib.h>

int main()
{
  int arr[100][1000][2];
    int t;   int flag=0;

    scanf("%d",&t);
    int t_page[t],left_pages[t],remaining_money[t],no_of_notebooks[t];
    if(t>=1 && t<=100000)
    {
        for(int i=0;i<t;i++)
        {
            scanf("%d",&t_page[i]);
            if(t_page[i]>=1   && t_page[i]<=1000 )
            {

                scanf("%d",&left_pages[i]);

                if(left_pages[i]>=1  && left_pages[i]<=1000 )
                {

                    scanf("%d",&remaining_money[i]);
                    scanf("%d\n",&no_of_notebooks[i]);

                    for(int j=0;j<no_of_notebooks[i];j++)
                    {
                        for(int k=0;k<2;k++)
                        {


                        scanf("%d",&arr[i][j][k]);
                        }
                    }





                }
            }
        }



              for(int i=0;i<t;i++)
              {

                     flag=0;

                    for(int j=0;j<no_of_notebooks[i];j++)
                    {
                        //for(int k=0;k<2;k++)



                     //   scanf("%d %d\n",&arr[j][k]);

                       if(remaining_money[i]>=arr[i][j][1] && arr[i][j][0]>=(t_page[i]-left_pages[i]))
                       {
                           flag=1;
                           break;

                       }
                       }

                       if(flag==0)
                       {
                           printf("UnluckyChef\n");
                       }

                     if(flag==1)
                       {
                           printf("LuckyChef\n");
                           flag=0;
                       }

    }
    }




}
