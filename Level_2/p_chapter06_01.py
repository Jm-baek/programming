# Chapter06-01
# 병행성(Cocurrent)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이썬 반복 가능한 타입
# collections, text file, list, Dict, Set, Tuple, unpacking, *args... : iterable

# 반복 가능한 이유? ->  iter(x) 함수 호출
t = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
print(dir(t))

for c in t:
    pass
#    print(c)

# while
w = iter(t)
print(dir(w)) # __next__가 있다.

print(next(w)) # A
print(next(w)) # B
print(next(w)) # C

# for 문에서 작동하는 내부적 원리가 아래와 같다.
while True:
    try:
        print(next(w))
    except StopIteration:
        break
print()

# 반복형 확인
from collections import abc
print(dir(t))                  # dir안에 __iter__가 있는지 직접 확인
print(hasattr(t, '__iter__'))  # hasattr을 통해 확인 가능
print(isinstance(t, abc.Iterable)) # Iterable 클래스를 상속 받았는지 확인

# next
class WordSplitter:
    def __init__(self, text):
        self._idx = 0
        self._text = text.split(' ')

    def __next__(self):
        # print('Called __next__')
        try:
            word = self._text[self._idx]
        except IndexError:
            raise StopIteration('Stopped Iteration ^^*')
        self._idx += 1
        return word

    def __repr__(self):
        return 'WordSplit(%s)' % (self._text)

wi = WordSplitter('Do today what you could do tomorrow')

# print(wi)
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))
# print(next(wi))

# Generator 패턴
# 1. 지능형 리스트, 딕셔너리, 집합 -> 데이터 양 증가 후 메모리 사용량 증가 -> 제네레이터 사용 권장
# 2. 단위 실행 간으한 코루틴(Corotine) 구현과 연동
# 3. 작은 메모리 조각 사용

class WordSplitGenerator:
    def __init__(self, text):
        self._text = text.split(' ')

    def __iter__(self):
        for word in self._text:
            yield word   # 제네레이터
        return

    def __repr__(self):
        return 'WordSplit(%s)' % (self._text)

wg = WordSplitGenerator('Do today what you could do tomorrow')

wt = iter(wg)

print(wt, wg)
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))


