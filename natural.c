#include<stdio.h>

void nat(int n)
{

    if(n>0)
    { printf("%d\n",n);
        nat(n-1);


    }

}
void main()
{
    int n;
    scanf("%d",&n);
    nat(n);
}
