#include <stdio.h>

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int checkYear(int year)
{

    if (year % 400 == 0)
        return 1;


    if (year % 100 == 0)
        return 0;

    if (year % 4 == 0)
        return 1;
    return 0;
}

int get_co(int m,int y)
{
    int mod=y %400;
    int count=0;
    for(int i=0;i<y;i++)
    {
        int leap=checkYear(i);

        if(leap==1)
        {
            if(dayofweek(1,2,i)==6)
            {
                count++;
            }


        }
        else
        {
            if(dayofweek(1,2,i)==0 || dayofweek(1,2,i)==6)
            {
                count++;
            }

        }

    }

    return count;
}


int main(void) {
	// your code goes here

	int t;
	scanf("%d",&t);

	while(t--)
	{

	    int m1,m2;
	    int y1,y2;

	    scanf("%d",&m1);
	    scanf("%d",&y1);
	    scanf("%d",&m2);
	    scanf("%d",&y2);

	    int res=get_co(m1,y1);
	    int res1=get_co(m2,y2);

	    printf("%d\n",res1-res);



	}

	return 0;
}

