
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
    if(n>=3 && n<=10)
    {
  int visited[20]={0};

    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }



    int min=1;
    int flag=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {  // printf("%d\n",min);
            if(a[i][j]==min)
            {//  printf("%d\n",a[i][j]);
                visited[a[i][j]-1]=1;
                min++;
                break;
            }

        }
    }

    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
           printf("%d\n",i+1);
            flag=1;
        }
    }
        if(flag==0)
        {printf("-1");
        }

    }
}
