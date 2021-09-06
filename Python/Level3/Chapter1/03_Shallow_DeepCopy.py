'''
Chapter 1
Python Advanced(1) - Shallow Copy & Deep Copy
'''

'''
파이썬은 모든 것을 객체로 선언한다.

객체의 복사 종류 : Copy, Shallow Copy, Deep Copy 
정확한 이해 후 사용 -> 프로그래밍 개발 중요(문제 발생 요소)

가변: list, set, dict
불변: 그 외 등등
'''

# Ex1 - Copy
# Call by value, Call by Refference, Call by Share

a_list = [1, 2, 3, [4, 5, 6], [7, 8, 9]]

# 주소 값을 전달 했기 때문에 값이 변경되면 같이 변경된다.
b_list = a_list  

print('Ex1 >', id(a_list))
print('Ex1 >', id(b_list))

b_list[2] = 100

print('Ex1 >', a_list)
print('Ex1 >', b_list)

b_list[3][2] = 100

print('Ex1 >', a_list)
print('Ex1 >', b_list)

# immutable: int, str, float, bool, unicode ...

# Ex2 -  Shallow Copy
import copy

c_list = [1, 2, 3, [4, 5, 6], [7, 8, 9]]
# 다른 주소 값을 가지고 있는다. 
d_list = copy.copy(c_list)  

print('Ex2 >', id(c_list))
print('Ex2 >', id(d_list))

d_list[1] = 100

print('Ex2 >', c_list)  # Ex2 > [1, 2, 3, [4, 5, 6], [7, 8, 9]]
print('Ex2 >', d_list)  # Ex2 > [1, 100, 3, [4, 5, 6], [7, 8, 9]]

d_list[3].append(1000)
d_list[4][1] = 1000

# Shallow copy
# 첫 번째 list의 주소 값은 다르지만, 안에 있는 리스트는 똑같은 주소 값을 공유한다.
print('Ex2 >', c_list)
print('Ex2 >', d_list)

# Ex3 - Deep copy
# 내부 요소까지 다른 주소로 만들어준다.
e_list = [1, 2, 3, [4, 5, 6], [7, 8, 9]]
f_list = copy.deepcopy(e_list)

print('Ex3 >', id(e_list))
print('Ex3 >', id(f_list))

f_list[3].append(1000)
f_list[4][1] = 1000

print('Ex2 >', e_list)
print('Ex2 >', f_list)