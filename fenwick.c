#include<stdio.h>

int BIT[1000];
int n=10;
void update(int i,int value)//index where value is inserted
{
    for(;i<=n;i+=(i& -i)) //~ 1's complement ,,,,- is 2's complement
    {

        BIT[i]+=value;
    }

}


int query(int i)  //find sum of first ten numbers if i=10
{
    int querysum=0;

    for(;i>0;i=i-(i&-i))
    {
        querysum=querysum+BIT[i];

    }
   return querysum;

}


int main()
{
    update(1,3);
    update(2,5);
    update(3,4);
    // query
    printf("%d",query(3));
    return 0;
}
