# Chapter05-01
# 일금 함수(fist class), 일급 객체
# 파이썬 함수 특징
# 1. 런타임 초기화
# 2. 변수 할당 가능
# 3. 함수 인수 전달 가능
# 4. 함수 결과 반환 가능(return)

# 5! 5*4*3*2*1

# 함수 객채
def factorial(n):
    """Factorial Function -> n: int"""
    if n == 1:  # n < 2
        return 1
    return n * factorial(n-1)

class A:
    pass

# 5 * factorial(4)
# 5 * 4 * factorial(3)
# 5 * 4 * 3 * factorial(2)
# 5 * 4 * 3 * 2 * factorial(1)
# 5 * 4 * 3 * 2 * 1

print(factorial(5))
print(factorial.__doc__)
print(type(factorial) , type(A))
print(dir(factorial)) # 함수이지만 객체에서 사용할 수 있는 것도 포함 되어 있다.
print(set(sorted(dir(factorial))) - set(sorted(dir(A))))  # 함수 안의 성질들만 출력
print(factorial.__name__)
print(factorial.__code__)

print()
print()

# 변수 할당
var_func = factorial
print(var_func)
print(var_func(10))  # 변수에 할당한채로 함수를 사용 가능
print(list(map(var_func, range(1, 11))))

# 함수 인수 전달 및 함수 결과 반환 -> 고위 함수(Higher-order function)
# map, filter, reduce
print(list(map(var_func, filter(lambda x: x % 2, range(1, 6))))) # 함수 인수 전달
print([var_func(i) for i in range(1, 6) if i % 2])

print()
print()

# reduce
# 여러 개의 데이터를 대상으로 주로 누적집계를 내기 위해서 사용한다.
from functools import reduce
from operator import add

print(reduce(add, range(1, 11)))
print(sum(range(1, 11)))

# 익명 함수(lambda)
# 가급적 주석 작성
# 가급적 함수 작성
# 일반 함수 형태로 리팩토링 권장
# https://www.daleseo.com/python-functools-reduce/

print(reduce(lambda x, t: x + t, range(1, 11)))

# Callable: 호출 연산자 -> 메소드 형태로 호출 가능한지 확인
print(callable(str), callable(A), callable(list), callable(var_func), callable(3.14))
# str('a')

# partial 사용법: 인수 고정 -> 콜백 함수 사용
from operator import add, mul           # 곱해준다.
from functools import partial

print(mul(10, 10))

# 인수 고정
# 인수 한 쪽을 고정하고 싶을 때
five = partial(mul, 5)  # 5 * ?

# 고정 추가
six = partial(five, 6)

print(five(100))
print(six())

print([five(i) for i in range(1, 11)])
print(list(map(five, range(1, 11))))