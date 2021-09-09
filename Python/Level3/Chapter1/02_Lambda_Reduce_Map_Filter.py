'''
Chapter1 Adavanced(1) - Lambda, Reduce, Map, Filter Functions
Keyword - lambda, map, filter, reduce
'''

'''
lambda 장점 : 익명, 힙 영역 사용 즉시 소멸, pythonic? 파이썬 가비지(garbage) 컬렉션(Count=0)
일반함수 : 재사용성 위해 메모리 저장
시퀀스형 전처리에 Reduce, Map, Filter 주로 사용
'''

# Ex1
# 선언을 하는 것은 메모리에 저장된다.
def test(a, b, c):
    return a * b + c

print('Ex1 >', test(10, 15, 20))

# 즉시 소멸
cul = lambda a, b, c: a * b + c
print('Ex1 >', cul(10, 15, 20))

# Ex2
digits1 = [x * 10 for x in range(1, 11)]  # 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
print('Ex2 >', digits1)

# result = map(func, list)
result = map(lambda i: i ** 2, digits1)
print('Ex2 >', result)
result = list(map(lambda i: i ** 2, digits1))
print('Ex2 >', result)

def also_square(nums):
    def double(x):
        return x ** 2
    return map(double, nums)

print('Ex2 >', list(also_square(digits1)))

# Ex3
digits2 =[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = list(filter(lambda x: x % 2 == 0, digits2))
print('Ex3 >', result)


def also_events(nums):
    def is_even(x):
        return x % 2 == 0
    return filter(is_even, nums)

print('Ex3 >', list(also_events(also_events(digits2))))

# Ex4
# 누적계산
from functools import reduce

digits3 = [x for x in range(1, 101)]

result = reduce(lambda x, y: x + y, digits3) # 리스트가 아닌 최종 결과값만 보여준다.

print('Ex4 >', result)
def also_add(nums):
    def add_plus(x, y):
        return x + y
    return reduce(add_plus, nums)

print('Ex4 > ', also_add(digits3))