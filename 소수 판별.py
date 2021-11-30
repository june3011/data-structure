num = int(input())

if num <= 1:
    print('False')
else:
    for i in range(2, int(num ** 0.5)+1):
        if not num % i: # 나누어지면 소수가 아니므로
            print('False')
            exit(0) # 종료
    
    print('True')


# 소수 판별 함수
# def isPrimeNumber(x):
#     # 2부터 (x - 1)까지의 모든 수를 확인하며
#     for i in range(2,x):
#         # x가 해당 수로 나누어떨어진다면
#         if x % i == 0:
#             return False    # 소수가 아님
#     return True # 소수임
#
# n = int(input())
# print(isPrimeNumber(n))


# # 개선된 소수 판별 함수
# import math
# def isPrimeNum(x):
#     # 2부터 x의 제곱근까지의 모든 수를 확인하며
#     for i in range(2, int(math.sqrt(x))+1):
#         # x가 해당 수로 나누어떨어진다면
#         if x % i == 0:
#             return False    # 소수가 아님
#     return True # 소수임

# n = int(input())
# print(isPrimeNum(n))