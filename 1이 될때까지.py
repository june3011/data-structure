# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n, k=map(int, input().split())
cnt=0

while n>=k:	# 5 7 의 경우 바로 빠져나옴
	while n%k!=0:
		n-=1
		cnt+=1
		continue
	n//=k
	cnt+=1
while n>=1:
	n=n-1
	cnt+=1
print(cnt)
