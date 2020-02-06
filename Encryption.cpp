#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


int main()
{
	string st;
	string ans;
	getline(cin,st);
	int letters=0;

	for(int i=0;i<st.length();i++)
	{
		if(st[i]==' ')
		{

		}
		else
		{
           letters++;
		}
	}

	


	double ak=sqrt(letters);


    int row=floor(ak);
  

    int col=ceil(ak);
  

    while((col*row)<letters)
    {
    	row++;

    }

    char arr[row][col];


    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		arr[i][j]='%';
    		
    	}
    	
    }
     






    int st_len=0;

    int i=0,j=0;

    
    int flag=0;
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{   if(st_len==st.length())
    		{
    			flag=1;
    			break;
    		}
    		if(st[st_len]==' ')
    		{
                while(st[st_len]==' '){
    			st_len++;}

    			arr[i][j]=st[st_len];
    			//cout<<arr[i][j];
    		}
    		else
    		{
    			arr[i][j]=st[st_len];
    			st_len++;
    			//cout<<arr[i][j];
    		}
    		
    	}
    	
    	if(flag==1)
    	{
    		break;
    		flag=0;
    	}
    	//cout<<" ";
    }


   

   
  

   int co=0;
   int g=0;
    for(int i=0;i<col;i++)
    {
    	for(int j=0;j<row;j++)
    	{ 


    	        if(arr[j][i]!='%')
    	        {
    	        	//cout<<arr[j][i];
    	        	ans.push_back(arr[j][i]);
    	        }
             
           
    	}
    	
    	//cout<<" ";
    	ans.push_back(' ');
    	
    }
    cout<<" \n"<<ans;

}