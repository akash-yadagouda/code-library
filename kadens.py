nn=int(input())
inp = list(map(int,input().split()))

se=list(map(int,input().split()))

given_len=se[1]
sum_=se[0]

print(given_len,sum_)

#print(inp)
ways=0


currentsum=0
for i in range(len(inp)):
    for j in range(i,len(inp)):
        currentsum=currentsum+inp[j]
        #print(currentsum)
        if(currentsum==sum_):
            #print("hi")
            #print(inp[i:j+1])
            if(len(inp[i:j+1])==given_len):
                ways=ways+1
            currentsum=0
            break
        if(currentsum>sum_):
            #print("no")
            currentsum=0
            break;
print(ways)
        
    



        
        
        
        
        
                
                
    
    
    
            
            

    




