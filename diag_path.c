#include <stdio.h>
#include <stdlib.h>



void generate_seq(int n);

void generate_seq(int n);
{


    int i=0;

    for()
}

void generate(int n);


long long fact(int n);

long long  fact(int n)
{
    int i;
 long long  res=1;
    for(i=2;i<=n;i++)
    {
        res=i*res;
       // printf("%d\n",res);
    }
    return res;
}


long long  fact1(int n)
{
    int i;
 long long  res=1;
    for(i=n;i>n/2;i--)
    {
        res=i*res;
       // printf("%d\n",res);
    }
    return res;
}
void generate(int n)
{
    long long  res;
    int i;
    long long a,b,c;

    for(i=1;i<=n;i++)
    {
        a=2*i;
        b=i+1;
        //c=i;
        a=fact1(a);

        b=fact(b);
        //c=fact(c);
        //res=b*c;
        res=a/b;
       printf("%d\t",res);



    }


}

void main()
{

    //Generating catalan series
     int n;
    scanf("%d",&n);
    generate(n);
//n=fact(12);
//printf("%d",n);

}
