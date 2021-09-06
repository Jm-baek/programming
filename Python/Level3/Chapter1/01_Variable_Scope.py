'''
Chapter 1
Python Adanced(1) - Python Variable Scope
Keyword - scope, global, nonlocal, locals, globals
'''
'''
전역 변수: 주로 변하지 않는 고정 값에 사용
지역 변수: 지역변수는 함수 내에 로직 해결에 국한, 소멸주기: 함수 실행 해제 시
전역변수를 지역내에서 수정되는 것은 권장 X
'''

# Ex1
a = 10 # Global variable 

def foo():
    # Read global variable
    # 사용 가능하다.
    print('Ex1 > ', a)

foo()

print('Ex1 > ', a)

# Ex2
# 파이썬은 지역 scope  내에서 먼저 찾고 없으면 밖에서 찿는다.
b = 20
def bar():
    b = 30  # Local variable
    print('Ex2 >', b) # output : Ex2 > 30

bar()  
print('Ex2 >', b) # b 값이 없으면 에러가 발생한다. # global variable

# Ex3
# UnboundLocalError: local variable 'c' referenced before assignment
# local C는 참조 전에 할당 되었다.
# 전역에 있는 값을 지역에서 어떤 특정한 예약어 없이 수정할 수 있다.
# 하지만 지금은 불가능하다.
c = 40
def foobar():
    # c = c + 10
    # c = 10
    # c += 100
    print('Ex3 >', c)

foobar()   

# Ex4
d = 50
def barfoo():
    global d   # global 사용은 자제하자.
    d = 60
    d += 100
    print('Ex4 > ', d)

barfoo()

print('Ex4 >', d)



# Ex5(중요)
# 가끔 코딩테스트에서 변형되기도 한다.
# closure, decorate 등등에서 사용된다.
def outer():
    # UnboundLocalError: local variable 'e' referenced before assignment
    # 함수 영역 안에 있는 scope 값을 메모리가 사라지지 않는다.
    # 함수가 끝나도 변수가 소멸되지 않고 사용할 수 있다.
    e = 70    # Local variable
    def inner():
        nonlocal e  # clousre 형태로 사용하기 위해서는 nonlocal을 많이 사용한다. # 이렇게 하면 사용 가능하다.
        e += 10 # e = e + 10
        print('Ex5 >', e)
    return inner

in_test = outer()  # Closure # 함수가 반환된다.
in_test() # 이렇게 실행된다.   # in_test() = inner() # 80
# 실행할 때마다 e 값이 계속 더해진다.
# 소멸 되지 않고 계속 가지고 있는다.
in_test() # 90
in_test() # 100
in_test() # 110


# Ex6
# Func Inner {'var': 'Hi', 'x': 10, 'printer': <function func.<locals>.printer at 0x000001B777D6C4C0>}
def func(var):
    x = 10
    def printer():
        print('Ex6 > ', "Printer Func Inner")
    print('Func Inner', locals()) # 지역 전체 출력

func('Hi')

# Ex7
print('Ex7 > ', globals()) # 전역 전체 출력
test_variable = 100
globals()['test_variable'] = 100
print('Ex7 > ', globals())

# Ex8(지역 -> 전역 변수 생성)
# 동적으로 전역 변수 생성
for i in range(1, 10):
    for k in range(1, 10):
        globals()['plus_{}_{}'.format(i, k)] = i + k

print(globals())

print('Ex8 > ', plus_5_5)

