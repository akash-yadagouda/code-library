
#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int q;
        scanf("%d",&q);
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int quer[3];
        while(q--)
        {


        for(int i=0;i<3;i++)
        {
            scanf("%d",&quer[i]);
        }
        int y=quer[2];
        int above=0;
        int below=0;
        int count=0;
        for(int i=quer[0];i<=quer[1];i++)
        { // printf("x=%d y=%d\n",i,a[i]);

            if(a[i]<y)
            {
                below=1;
                if(above==1)
                {

                    count++;
                }
                above=0;
            }
            if(a[i]>y)
            {
                above=1;
                if(below==1)
                {

                    count++;
                }
                below=0;
            }
            if(a[i]==y && i!=quer[0] && i!=quer[1])
            {
                count++;
            }

        }
        printf("%d\n",count);

        }
    }

}
