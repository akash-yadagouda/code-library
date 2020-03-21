import math
def juggler(n):
	print(n,end=" ")
	while(n!=1):
		if(n%2==0):
			b=math.floor(math.sqrt(n))
		else:
			b=math.floor(math.sqrt(n)*math.sqrt(n)*math.sqrt(n))
		print(b,end=" ")
		n=b


k=int(input("enter value for juggler sequence : "))
juggler(k)
