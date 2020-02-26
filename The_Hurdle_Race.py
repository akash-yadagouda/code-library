def hurdleRace(k, height):
    if(k<max(height)):
        return max(height)-k
    else:
        return 0

height=list(map(int,input().split()))
k=int(input())
print(hurdleRace(k,height))