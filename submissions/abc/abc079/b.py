N = int(input())
l=[2,1]
if N==1:
	print(l[1])
else:
	for i in range(2, N+1):
		l.append(l[i-1]+l[i-2])
	print(l[N])
