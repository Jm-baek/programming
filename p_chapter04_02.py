# Chapter04-02
# 시퀀스형
# 컨테이너(Container : 서로다른 자료형[list, tuple, collections.deque])
# 플랫(Flat: 한개의 자료형[str, bytes, bytearray, array.array, memoryview])
# 위 두 개를 아래 두 개로 나눌 수 있다.
# 가변(list, bytearray, array.array, memoryview, deque)
# 불변(tuple, str, bytes)
# 리스트 및 튜플 고급

# Tuple Advanced
# b, a = a, b


# Unpacking
print(divmod(100, 9))
print(divmod(*(100, 9)))
print(*(divmod(100, 9)))

print()

x, y, *rest = range(10)
print(x, y, rest)

x, y, *rest = range(2)
print(x, y, rest)

x, y, *rest = 0, 1, 2, 3, 4, 5
print(x, y, rest)

x, y, z, i, *rest = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
print(x, y, rest)


# Mutable(가변) vs Immutable(불변)

l = (15, 20, 25)
m = [15, 20, 25]

print(l, id(l))
print(m, id(m))

l = l * 2
m = m * 2

print(l, id(l))  # id 값이 변했다.
print(m, id(m))  # id 값이 변했다.

# 정렬
# sort vs sorted
# reverse, key=len, key=str.lower, key=func...

# sorted: 정렬 후 새로운 객체 반환 (원본 변경 X)
f_list = ['orange', 'apple', 'mango', 'papaya', 'lemon', 'strawberry', 'coconut']

print('sorted - ', sorted(f_list))
print('reverse sorted - ', sorted(f_list, reverse=True))
print('key= len sorted - ', sorted(f_list, key=len))
print('key= lambda sorted - ', sorted(f_list, key=lambda x: x[-1])) # 단어의 마지막 글자를 기준으로
print('key= lambda sorted - ', sorted(f_list, key=lambda x: x[-1], reverse=True))
print('origin - ', f_list)

# sort: 정렬 후 객체 직접 변경 (원본 변경 O)
print('sort - ', f_list.sort(), f_list)
print('sort - ', f_list.sort(reverse=True), f_list)
print('sort - ', f_list.sort(key=len), f_list)
print('sort - ', f_list.sort(key=lambda x : x[-1]), f_list)
print('sort - ', f_list.sort(key=lambda x : x[-1], reverse=True), f_list)

# List vs Array 적합한 사용법 설명
# 리스트 기반: 융통성, 다양한 자료형, 범용적 사용
# 숫자 기반: 배열(리스트와 거의 호환)

import numpy as np
check1 = np.array([1, 2, 3, '안녕'])
check2 = np.array([1, 2, 3])
print(check1)
print(type(check1))

print(check2)
print(type(check2))