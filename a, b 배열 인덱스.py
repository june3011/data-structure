# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

# 다음과 같은 형태의 배열이 있다.
# [a1, a2, a3..., an, b1, b2, ... bn]
# 위의 배열을 다음과 같이 바꾸도록 하시오.

# [a1, b1, a2, b2, ..., an, bn]

# [입력]
# a1 a2 a3 b1 b3
# [출력]
# a1 b1 a2 a3 b3

n = list(input().split())
# n = list(map(str,input().split()))
n.sort()
for i in range(len(n)):
	for j in range(len(n)):
		if(n[j].count(str(i))):
			print(n[j],end=" ")
