# Chapter04-02
# 시퀀스형
# 컨테이너(Container : 서로다른 자료형[list, tuple, collections.deque])
# 플랫(Flat: 한개의 자료형[str, bytes, bytearray, array.array, memoryview])
# 위 두 개를 아래 두 개로 나눌 수 있다.
# 가변(list, bytearray, array.array, memoryview, deque)
# 불변(tuple, str, bytes)
# 해시테이블
# key의 value를 저장하는 구조
# 파이썬 dict 해쉬 테이블 예제
# 키 값의 연산 결과에 따라 직접 접근이 가능한 구조
# key 값을 해싱 함수 -> 해쉬 주소 -> key에 대한 value 참조

# Dict 구조
# print(__builtins__.__dict__)

# Hash 값 확인
# 불변현 값만 들어가야한다.

# 증명
t1 = (10, 20, (30, 40, 50))  # tuple은 immutable
# t2 = (10, 20, [30, 40, 50])  # list는 mutable 값이기 때문에 hash 함수를 사용할 수 없다.

print(hash(t1))
# print(hash(t2))

# Dict Setdefault 예제
source = (('k1', 'val1'),
          ('k1', 'val2'),
          ('k2', 'val3'),
          ('k2', 'val4'),
          ('k2', 'val5'))

new_dict1 = {}
new_dict2 = {}

# No use Setdefault
for k, v in source:
    if k in new_dict1:
        new_dict1[k].append(v)
    else:
        new_dict1[k] = [v]

print(new_dict1)

# Use Setdefault
for k, v in source:
    new_dict2.setdefault(k, []).append(v)

print(new_dict2)

# 주의
new_dict3 = {k: v for k, v in source}