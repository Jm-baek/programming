# Chapter05-02
# 일급 함수(fist class), 일급 객체
# 클로저 기초

# 파이썬 변수 범위(scope)

# Ex1
def func_v1(a):
    print(a)
    print(b)

# func_v1(a)


# Ex2
b = 20              # global variable
def func_v2(a):
    print(a)        # local variable
    print(b)

func_v2(10)

# Ex3
c = 30
def func_v3(a):
    print(a)
    print(c)  #
    c = 40

# func_v3(10)  # UnboundLocalError: local variable 'c' referenced before assignment

c = 30
def func_v3(a):
    global c
    print(a)
    print(c)  #
    c = 40

print('>>', c)  # 함수 실행 전 이기 떄문에 30 출력
func_v3(10)  # 전역 변수에 접근이 가능하다.
print('>>', c)


# Closure(클로저) 사용 이유
# 서버 프로그래밍 -> 동시성(Concurrency) 제어 -> 메로 공간에 여러 자원이 접근 -> 교착상태(Dead Lock)
# 메모리를 공유하지 않고 메세지 전달로 처리하기 위한 -> Erlang
# 클로저는 공유하되 변경되지 않는(Immutable, Read Only) 적극적으로 사용 -> 함수형 프로그래밍
# 클로저는 불변자료구조 및 atom, STM -> 멀티스레드(coroutine) 프로그래밍에 강점
# scope가 끝나더라도 값을 잊지 않는다.(기억한다)

a = 100
print(a + 100)
print(a + 1000)

# 결과 누적(함수 사용)
print(sum(range(1, 51)))
print(sum(range(51, 101)))

# 클래스 이용
class Averager():
    def __init__(self):
        self._series = []

    def __call__(self, v):  # 클래스를 함수처럼 사용 가능
        self._series.append(v)
        print('inner >> {} / {}'.format(self._series, len(self._series)))
        return sum(self._series) / len(self._series)

# 인스턴스 생성
averager_cls = Averager()

# 누적
print(averager_cls(10))  # 함수처럼 실행하고 있다.
print(averager_cls(30))
print(averager_cls(50))
print(averager_cls(193))
print(dir(averager_cls))
