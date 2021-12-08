cnt = 1
n=int(input())
array = [[0]*n for i in range(n)]
for i in range(n):
	for j in range(n):
		array[i][j]=cnt
		cnt = cnt + 1
		
sum = array[0][0] + array[0][-1] + array[-1][0] + array[-1][-1]
print(sum)