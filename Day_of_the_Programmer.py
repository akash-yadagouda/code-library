

def check(a):
	if(a%400):
		return True
	else:
		if a%400:
			if a%100!=0:
				return True
			else:
				return False
		else:
			return False



a=256

year=int(input())

if check(year)==True:
	print(12.09.2016)


else:
	
	print(13.09.2017)



