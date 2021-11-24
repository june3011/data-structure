# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
hh=list()
n=int(input())
for i in range(n):
	hh.append(input())
hh.sort()
print(*hh)
# for i in range(n):
# 	print(hh[i], end=' ')