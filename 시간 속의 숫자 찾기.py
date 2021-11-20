# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
h=int(input())
count=0
for i in range(h+1):	# 시
	for j in range(60):	# 분
		for k in range(60):	# 초
			ss=str(i)+str(j)+str(k)
			if '3' in ss:	# '3' 이라는 숫자가 발견되면
				count+=ss.count('3')    # ss안에 '3'의 개수
print(count)

# 숫자를 숫자로만 바라보지 말고 문자로 바꿨을 때 장점도 생각해보기