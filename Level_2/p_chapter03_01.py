# Chapter03-01
# Special Method(Magic Method)
# 파이썬의 핵심 -> 시퀀스(Sequence), 반복(Iterator), 함수(FUnctions), Class(클래스)
# 클래스 안에 정의할 수 있는 특별한(Built-in) 메소드
# low level 기반으로 좀 더 클래스를 작성할 수 있다.


# 파이썬 데이터 모델
# https://docs.python.org/ko/3/reference/datamodel.html

# 기본형
# 모든 파이썬의 데이터 타입은 class
print(int)
print(float)

# 모든 속성 및 메소드 출력
print(dir(int))
print(dir(float))

n = 10

print(n + 100)
print(n.__add__(100))
# print(n.__doc__)
print(n.__bool__(), bool(n))
print(n * 100, n.__mul__(100))
print(type(n)) # 변수 하나도 class

print()
print()

# 클래스 예제1
class Fruit:
    def __init__(self, name, price):
        self._name = name
        self._price = price

    def __str__(self):
        return 'Fruit Class Info: {}, {}'.format(self._name, self._price)

    # Magic Method
    # s1이 self로 인식, s2가 other로 인식 된다.

    def __add__(self, other):
        print('Called >> __add__')
        return self._price + other._price

    def __sub__(self, other):
        print('Called >> __sub__')
        return self._price - other._price

    # 대소 비교
    def __le__(self, other):
        print('Called >> __le__')
        if self._price <= other._price:
            return True
        else:
            return False

    def __ge__(self, other):
        print('Called >> __ge__')
        if self._price >= other._price:
            return True
        else:
            return False

# 인스턴스 생성
s1 = Fruit('Orange', 7500)
s2 = Fruit('Banana', 3000)

# 일반적인 계싼
print(s1._price + s2._price)
print(s1 + s2)

# 매직메소드
print(s1 >= s2)
print(s1 <= s2)
print(s1 - s2)
print(s2 - s1)
print(s1)
print(s2)