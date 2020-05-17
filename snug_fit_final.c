#include<stdio.h>



int get_second_max(int index,int a[4][4],int max)
{
    printf("\n\n index in function== %d\n\n",index);

    int sec_max=-1000;

    for(int i=0;i<4;i++)
    { printf("\nin loop ARRAY[INDEX]= %d\n",a[index][i]);
        if(  sec_max<max)
        {   //second=sec_max;
            printf("\nmax=%d,,,sec_max=%d\n",max,sec_max);
            if(sec_max<=a[index][i])
            {sec_max=a[index][i];
            }
        }

    }
    printf("\n\nsecond_max -returning == %d\n\n",sec_max);
    return sec_max;

}

int find_max(int a[4][4])
{

    int max[4]={-1};
    int visited_show[4]={0};
    int visited_time[4]={0};
    int id_show;
    int id_time;
    for(int i=0;i<4;i++)
    {

        int j=0;
            while(j<4 )
            {  if(visited_show[j]==1)
            {   j++;
                continue;
            }
                int k=0;
                while(k<4 )
                {
                  if(visited_time[k]==1)
                  {   k++;
                      continue;
                  }




                if(max[i]<=a[j][k])
                {
                    int next_max,this_next_max;
                    if(max[i]==a[j][k])
                    {
                        next_max=get_second_max(id_show,a,max[i]);
                        this_next_max=get_second_max(j,a,max[i]);

                         printf("\n  next max=%d  this_next-max=%d\n ",next_max,this_next_max);

                        if(this_next_max<next_max)
                        {
                            id_show=j;
                            id_time=k;
                        }

                    }
                    else
                    {



                    max[i]=a[j][k];
                    id_show=j;
                    id_time=k;
                    }
                }
                k++;

            }
            j++;
            }
            visited_show[id_show]=1;
            visited_time[id_time]=1;
            printf("index i=%d     \t index j=%d \n",id_show,id_time);


    }
     int total=0;
    int price=100;
     // printf("max .....\n%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    for(int i=0;i<4;i++)
    {
       // printf("max %d =%d",i+1,max[i]);
        if(max[i]==0)
        {
            total=total-100;
        }
        else
        {
            total=total+(max[i]*price);
            price=price-25;
        }
    }
    printf("%d\n",total);
    return total;




}






int main()
{
   int count;
    int t;
    scanf("%d",&t);
    if(t<1 || t>150)
    {
        return 0;
    }
    int sum=0;
    for(int i=0;i<t;i++)
    {

        int n;
         scanf("%d",&n);
        if(n<0 || n>100)
        {
            return 0;
        }

        int arr[4][4]={0};



        for(int j=0;j<n;j++)
        {



            char sh[2];
            int ti;
            scanf("%s",sh);
           //sh = getchar();
            scanf("%d",&ti);
            if(sh[0]!='A' && sh[0]!='B' && sh[0]!='C' && sh[0]!='D')
            {
                return 0;
            }
            if(ti!=3 && ti!=6 && ti!=9 && ti!=12)
            {
                return 0;
            }

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

     // printf("max .....\n%d %d %d %d\n",max[0],max[1],max[2],max[3]);
         count=find_max(arr);
         //}
         //else

       // printf("\ntotal profit =%d\n\n",count);
        //print(arr);
        sum=sum+count;
    }
    printf("%d",sum);
}
