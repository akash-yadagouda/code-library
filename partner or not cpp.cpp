// C++ program for stable marriage problem
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

// Number of Men or Women
#define n 10

// This function returns true if woman 'w' prefers man 'm1' over man 'm'
bool wPrefersM1OverM(int prefer[][n], int w, int m, int m1,int n1)
{
	// Check if w prefers m over her current engagment m1
	for (int i = 0; i < n1; i++)
	{
		// If m1 comes before m in lisr of w, then w prefers her
		// cirrent engagement, don't do anything
		if (prefer[w][i] == m1)
			return true;

		// If m cmes before m1 in w's list, then free her current
		// engagement and engage her with m
		if (prefer[w][i] == m)
		return false;
	}
}

// Prints stable matching for N boys and N girls. Boys are numbered as 0 to
// N-1. Girls are numbereed as N to 2N-1.
void stableMarriage(int prefer[][n],int n1)
{
	// Stores partner of women. This is our output array that
	// stores paing information. The value of wPartner[i]
	// indicates the partner assigned to woman N+i. Note that
	// the woman numbers between N and 2*N-1. The value -1
	// indicates that (N+i)'th woman is free
	printf("hi1\n");
	int wPartner[n1];

	// An array to store availability of men. If mFree[i] is
	// false, then man 'i' is free, otherwise engaged.
	bool mFree[n1];

	// Initialize all men and women as free
	memset(wPartner, -1, sizeof(wPartner));
	memset(mFree, false, sizeof(mFree));
	int freeCount = n1;

	// While there are free men
	while (freeCount > 0)
	{ printf("hi2\n");
		// Pick the first free man (we could pick any)
		int m;
		for (m = 0; m < n1; m++)
			if (mFree[m] == false)
				break;

		// One by one go to all women according to m's preferences.
		// Here m is the picked free man
		for (int i = 0; i < n1 && mFree[m] == false; i++)
		{ printf("hi3\n");
			int w = prefer[m][i];

			// The woman of preference is free, w and m become
			// partners (Note that the partnership maybe changed
			// later). So we can say they are engaged not married
			if(w<n1)
            {
               if (wPartner[n1-w] == -1)
			{
				wPartner[n1-w] = m;
				mFree[m] = true;
				freeCount--;
			}

			else // If w is not free
			{
				// Find current engagement of w
				int m1 = wPartner[n1-w];

				// If w prefers m over her current engagement m1,
				// then break the engagement between w and m1 and
				// engage m with w.
				if (wPrefersM1OverM(prefer, w, m, m1,n1) == false)
				{
					wPartner[n1-w] = m;
					mFree[m] = true;
					mFree[m1] = false;
				}
			}
            }
            else
            {


			if (wPartner[w-n1] == -1)
			{
				wPartner[w-n1] = m;
				mFree[m] = true;
				freeCount--;
			}

			else // If w is not free
			{
				// Find current engagement of w
				int m1 = wPartner[w-n1];

				// If w prefers m over her current engagement m1,
				// then break the engagement between w and m1 and
				// engage m with w.
				if (wPrefersM1OverM(prefer, w, m, m1,n1) == false)
				{
					wPartner[w-n1] = m;
					mFree[m] = true;
					mFree[m1] = false;
				}
			} // End of Else
		}} // End of the for loop that goes to all women in m's list
	} // End of main while loop


	// Print the solution
	cout << "Woman Man" << endl;
	for (int i = 0; i < n1; i++)
	cout << " " << i+n1 << "\t" << wPartner[i] << endl;
}

// Driver program to test above functions
int main()
{
	/*int n;
scanf("%d",&n);
int men[n][n];
int prefer[2*N][N];
int women[n][n];
int visited_men[10]={0};
int visited_women[10]={0};
for(int i=0;i<n;i++)
{

    for(int j=0;j<n;j++)
    {

        scanf("%d",&men[i][j]);
        prefer[i][j]=men[i][j];
    }
}

for(int i=0;i<n;i++)
{

    for(int j=0;j<n;j++)
    {

        scanf("%d",&women[i][j]);
        prefer[i+3][j]=women[i][j];
    }
}

int queries;

//scanf("%d",&queries);
//int q[queries];
for(int i=0;i<queries;i++)
{
scanf("%d",&q[i]);

}*/


int n1;
scanf("%d",&n1);
 int prefer[2*n1][10];

 for(int i=0;i<2*n1;i++)
 {
     for(int j=0;j<n1;j++)
     {
         scanf("%d",&prefer[i][j]);
     }
 }
 /*for(int i=n1;i<2*n1;i++)
 {
     for(int j=0;j<n1;j++)
     {
         scanf("%d",&prefer[j][i]);
     }
 }*/


	stableMarriage(prefer,n1);

	return 0;
}
