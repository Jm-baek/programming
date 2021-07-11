# Chapter04-04
# 시퀀스형
# 해시테이블(hashtable) -> 적은 리소스로 많은 데이터를 효율적으로 관리
# DIct -> key 중복 허용 x, set -> 중복 허용 x
# Dict 및 Set 심화

# immutable Dict

from types import MappingProxyType

d = {'key': 'value1'}

# Read Only
d_frozen = MappingProxyType(d)

print(d_frozen, id(d_frozen))
print(d, id(d))

# 수정 불가
# d_frozen['key2'] = 'value2'

# 수정 가능
d['key2'] = 'value2'


print()
print()

s1 = {'Apple', 'Orange', 'Apple', 'Orange', 'Kiwi'}         # 중복 허용 X
s2 = (['Apple', 'Orange', 'Apple', 'Orange', 'Kiwi'])
s3 = {3}
s4 = {}
s5 = set()  # Not {}
s6 = frozenset({'Apple', 'Orange', 'Apple', 'Orange', 'Kiwi'})

print(s1, type(s1))
print(s2, type(s2))
print(s3, type(s3))
print(s4, type(s4))
print(s5, type(s5))

s1.add('Melon')  # 데이터가 추가는 되지만, 중복을 허용하지 않는다.
# s6.add('Melon')  # 증복 X, 수정 X


# 선언 최적화
# 바이트 코드 -> 파이썬 인턴프리터 실행

from dis import dis

print('------')
print(dis('{10}'))
print('------')
print(dis('set([10])'))

# 지능형 집합(Comprehending set)

print('-----')
from unicodedata import name
print({name(chr(i), "") for i in range(0, 256)})