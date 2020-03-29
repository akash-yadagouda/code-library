n=int(input("enter the number to check the set bits \n"))
cou=0
while n:
	cou=cou+(n & 1)
	n=n>>1

print(cou)