#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main()
{



	int size_o_rank,size_o_alice;
	//cin>>size_o_rank;
	long long int temp;
	vector<long long int> marks;
	vector<long long int> alice_marks;
/*	for(int i=0;i<size_o_rank;i++)
	{    
		cin>>temp;
		marks.push_back(temp);
	}*/
	marks=score;
	size_o_rank=score.size();
	alice_marks=alice;
	size_o_alice=alice.score();



  // cin>>size_o_alice;

 /*for(int i=0;i<size_o_alice;i++)
 {
 	cin>>temp;
 	alice_marks.push_back(temp);

 }*/




   int cu_rank[marks.size()];
   int r=1;
   cu_rank[0]=1;

	for(int i=1;i<marks.size();i++)
	{
		if(marks[i]<marks[i-1])
		{
			cu_rank[i]=++r;
		}
		else
			cu_rank[i]=r;

	};
 


 
	

 //sort(marks.begin(),marks.end(),greater<long long int>());




int rank[size_o_alice]={0};
for(int i=0;i<size_o_alice;i++)
{ // cout<<alice_marks[i]<<" ";
	for(int j=marks.size()-1;j>=0;j--)
	{   
		if(alice_marks[i]==marks[j])
		{
			rank[i]=cu_rank[j];
		}
        if(alice_marks[i]>=marks[j])
        {
        	rank[i]=cu_rank[j];
        }
        if(alice_marks[i]<marks[j] && j==marks.size()-1)
        {
        	rank[i]=cu_rank[j]+1;
        }
		

	}
}

/*for(int i=0;i<size_o_alice;i++)
{
	cout<<rank[i]<<" ";
}*/

vector<int> ans;
for(int i=0;i<size_o_alice;i++)
{
	ans.push_back(rank[i]);
}
return ans;






















}
