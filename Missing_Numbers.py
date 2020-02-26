# -*- coding: utf-8 -*-
"""
Created on Wed Feb 26 21:53:32 2020

@author: Akash
"""

#size1=int(input())
list1=list(map(int,input().split()))
#size2=int(input())
list2=list(map(int,input().split()))
list1.sort()
list2.sort()



fre=0
fre2=0
frequency=[]
set_list2=set(list2)
for i in set_list2:
    for j in list2:
        if(i==j):
            fre=fre+1
    for k in list1:
    	if(k==i):
    		fre2=fre2+1
    if(fre2!=fre):
    	print(i,end=' ')
    fre=0
    fre2=0

    







    
    
        
    
    


