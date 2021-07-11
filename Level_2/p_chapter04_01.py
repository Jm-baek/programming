# Cahpter04-01
# 시퀀스형
# 컨테이너(Container : 서로다른 자료형[list, tuple, collections.deque])
# 플랫(Flat: 한개의 자료형[str, bytes, bytearray, array.array, memoryview])
# 위 두 개를 아래 두 개로 나눌 수 있다.
# 가변(list, bytearray, array.array, memoryview, deque)
# 불변(tuple, str, bytes)

# 리스트 및 튜플 고급


# 지능형 리스트(Comprehending Lists)
chars = '+_)(*&^%$#@!'
code_list1 = []

for s in chars:
    code_list1.append(ord(s))

print(code_list1)

# Comprehending Lists
code_list2 = [ord(s) for s in chars]
print(code_list2)

# Comprehending Lists + map, Filter
code_list3 = [ord(s) for s in chars if ord(s) > 40]
code_list4 = list(filter(lambda x: x > 40, map(ord, chars)))

print()

# 전체 출력
print(code_list1)
print(code_list2)
print(code_list3)
print(code_list4)
print([chr(s) for s in code_list1])
print([chr(s) for s in code_list2])
print([chr(s) for s in code_list3])
print([chr(s) for s in code_list4])

print(dir(chars))  # __iter__가 있으면 반복문(for 문)을 통해서 연속 출력이 가능하다.

# Generator 생성
import array
# 한 번에 한 개의 항목을 생성(메모리 유지 X)
# 작은 메모리를 가지고 연속적인 내가 반환할 값만 가지고 있다, 메모리 정보를

tuple_g = (ord(s) for s in chars)

print(tuple_g)         # <generator object <genexpr> at 0x00000216399FCE40>
print(type(tuple_g))   # <class 'generator'>

# 값을 호출하기 위해서는 next를 사용해야한다.
print(next(tuple_g))


array_g = array.array('I', (ord(s) for s in chars))
print(array_g)
print(type(array_g))
print(array_g.tolist())       # tolist: array를 list 형태로 변환

print()
print()

# Generator 예제
print(('%s' % c + str(n) for c in ['A', 'B', 'C', 'D'] for n in range(1, 21)))

for s in ('%s' % c + str(n) for c in ['A', 'B', 'C', 'D'] for n in range(1, 21)):
    print(s)

# 리스트 주의
marks1 = [['~'] * 3 for _ in range(4)]
marks2 = [['~'] * 3] * 4
print(marks1)
print(marks2)

print()

# 수정
marks1[0][1] = 'x'
marks2[0][1] = 'x'
print(marks1)  # 0번의 1번만 x로 바뀐다.
print(marks2)  # 1번의 위치가 모두 x로 바뀐다.

print()

# 증명
print([id(i) for i in marks1])
print([id(i) for i in marks2])

# 깊은 복사 vs 얕은 복사