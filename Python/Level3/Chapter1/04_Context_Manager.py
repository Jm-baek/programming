""""
Chapter 1
Python Advanced(1) - Context Manger(1)
Keyword - Contextlib, __enter__, __exit__, exception

컨텍스트 매니저 : 원하는 타이밍 정확하게 리소스를 할당 및 제공, 반환하는 역할
가장 대표적인 with 구문 이해
정확한 이해 후 사용 프로그래밍 개발 중요(문제 발생 요소)
"""

# 하드디스크 sdd에 저저장하기 위해서는
# 권한을 받아

# Ex1
file = open('./testfile1.txt', 'w')
try:
    file.write('Context Manager Test1 \nContextlib Test1')
finally:
    file.close()

# Ex2
with open('./testfile2.txt', 'w') as f:
    f.write('Context Manager Test1 \nContextlib Test1')

# Ex3
# 우리가 만든 class로 자원을 할당가 반환을 해본다.
# Use Class -> COntext Manager with exception handling.

class MyFileWriter():
    """
    doc string 
    """
    def __init__(self, file_name, method):
        print('MyFileWriter started : __init__')
        self.file_object = open(file_name, method)

    def __enter__(self):
        print('MyFileWriter started : __enter__')
        return self.file_object

    def __exit__(self, exc_type, value, trace_back):
        print('MyFileWriter started : __exit__')
        if exc_type:
            print('Logging exception {}'.format((exc_type, value, trace_back)))
        self.file_object.close()

with MyFileWriter('./testfile3.txt', 'w') as f:
    f.write('Context Manager Test3 \nContextlib Test1')



'''
Contextlib - Measure execution(타이머) 제작
'''

# Ex1
# Use Class

import time

# 모든 클래스는 object를 상속 받는다. 
# 굳이 적을 필요 없다.
# Low level, 조금 어렵다.^^;;;
class ExcuteTimer(object):
    def __init__(self, msg):
        self._msg = msg
    
    def __enter__(self):
        self._start = time.monotonic()
        return self._start

    def __exit__(self, exc_type, exc_value, exc_traceback):
        if exc_type:
            print('Logging exception {}'.format((exc_type, exc_value, exc_traceback)))
        else:
            print('{} : {} s'.format(self._msg, time.monotonic() - self._start))
        return True # 잘 빠져 나왔어요라는 의미



with ExcuteTimer('Start! job') as v:
    print('Received start monotonic1 : {}'.format(v))
    # Excute job
    for i in range(100000):
        pass
    raise Exception('Raise! Exception!!') # 강제로 발생



"""
Chapter2
Python Advaned(2) - Context manager Annotation
Keyword = @contextlib.contextmanager, __enter__, __exit__
"""

"""
가장 대포젹인 with 구문 이해
Contextlib 데코레이터 사용
코드 직관적, 예외 처리 용이성
"""
import contextlib

# Ex1
# Use decorator

@contextlib.contextmanager          # Annotation
def my_file_write(file_name, method):
    f = open(file_name, method)
    yield f # __enter__  
    f.close() # __exit__


with my_file_write('testfile4.txt', 'w') as f:
    f.write('Context manager Test4 \nContextlib Test4')


# Ex2
# Use decorator

@contextlib.contextmanager
def ExcuteTimeDC(msg):
    start = time.monotonic()
    try: # __enter__
        yield start
    except BaseException as e:
        print('Logging exception: {}: {}'.format(msg, e))
        raise
    else: # __exit__
        print('{} : {} s'.format(msg, time.monotonic() - start))
