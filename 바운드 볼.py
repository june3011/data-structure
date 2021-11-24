# deque 를 사용하면 1초 걸리는데
# stack 을 사용하면 n초 걸림 
# 따라서 deque 사용

# deque provieds an 0(1) time complexity for append and pop operations
# as compared to list
# which provieds 0(n) time complexity

# deque가 속도가 더 빠름

# deque
# from collections import deque
# stack=deque()
# stack.append('a')
# stack.append('b')
# stack.append('c')

# print(stack.pop())  # c
# print(stack.pop())  # b
# print(stack.pop())  # a
# 다시 고쳐야함

# 과정과 결과는 같지만 deque가 시간복잡도가 적어서
# 코딩테스트에서 점수를 좀 더 높게 받을 수 있음

# deque로 풀기 실패작
# from collections import deque
# stack=deque()
# a=list()
# N=int(input())
# for i in range(1,N+1):
# 	if(N%2==1):
# 		a=int(input(stack.append(a[i])))
# 	else:
# 		a=int(input(stack.pop(a[i])))
# print(stack)




# 스택
# stack=[] # stack=list()

# stack.append('a')
# stack.append('b')
# stack.append('c')

# print(stack)    # 스택의 현재 상태

# print(stack.pop())  # c
# print(stack.pop())  # b
# print(stack.pop())  # a
# print(stack.pop())  # IndexError: pop from empty list

# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
stack=[]
n=int(input())
for i in range(1,n+1):
	stack+=list(map(int,input().split()))
	m=int(input())
	for j in range(m):
		stack.pop()
print(*stack)