n=int(input("enter n\n"))
k=int(input("enter k\n"))
arr=[i for i in range(1,n+1)]

r=0
for i in range(1,n+1):
	r=(r+k)%i 

print(arr[r+1])



		

