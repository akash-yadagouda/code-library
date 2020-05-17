#include<stdio.h>
#include<limits.h>

int main()
{

int t;
scanf("%d",&t);

while(t--)
{
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);

    int bas[n];
    int price[n];

    int tot[m+2];
   int index[m+2];
    memset(tot,0,(m+1)*sizeof(int));
    memset(index,0,(m+1)*sizeof(int));



    for(int i=0;i<n;i++)
    {
        scanf("%d",&bas[i]);

    }
    int min=INT_MAX;
     for(int i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
        tot[bas[i]]+=price[i];


    index[bas[i]]=1;

    }

   for(int i=0;i<m+1;i++)
    {

      //  printf("%d\n",tot[i]);

       if(tot[i]<min && index[i]==1)
        {
            min=tot[i];

        }

    }

    printf("%d\n",min);


}

return 0;

}
