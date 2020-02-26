n=int(input())
k=int(input())
c=[]

for i in range(0,n+1):
	c.append([])

for i in range(0,n+1):
	for j in range(0,k+1):
		c[i].append(0)




for i in range(0,n+1):
	for j in range(0,min(i,k)+1):
		if(i==j or j==0):
			c[i][j]=1
		else:
			c[i][j]=(c[i-1][j-1]+c[i-1][j])

print(c)