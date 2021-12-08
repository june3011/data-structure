arr=list(map(int,input().split()))
mar=[]
par=[]
for i in range(len(arr)):
	if arr[i]<0:
		mar.append(arr[i])
	else:
		par.append(arr[i])
print(*mar,*par)
