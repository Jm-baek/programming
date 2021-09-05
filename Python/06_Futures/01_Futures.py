# Chapter06-04
# Futures 동시성
# 비동기 작업 실행
# 지연시간(Block) cpu 및 리소스 낭비 방지 -> (File)Network I/O 관련 작업 -> 동시성 활용 권장
# 비동기 작업과 적합한 프로그램일 경우 압도적으로 성능 향상


# 3.2 버전 이전에는 작업이 어려웠지만
# 랩핑? 을 통해 사용하기 쉽게 만들었다,
# import threading
# import multiprocessing


# futures : 비동기 실행을 위한 API를 고수준으로 작성 -> 사용하기 쉽도록 개선
# low level의 코딩을 굳이 할 필요가 없다.
# concurrent.Futures
# 1. 멀티스레딩/멀티프로세싱 API통일 -> 매우 사용하기 쉬움
# 2. 실행 중 작업 취소, 완료 여부 체크, 타임아웃 옵션, 콜백 추가, 동기화 코드 매우 쉽게 작성 -> Promise 개념
# 최대한 자원을 활용해서 여러 개의 일을 동시에 하는 동시성을 배워보자!


# 2가지 패턴 실습
# concurrent.futures 사용법1
# concurrent.futures 사용법2

# 파이썬에만 존재한다.
# GIL : 두 개 이상의 스레드가 동시에 실행 될 때 하나의 자원을 엑세스 하는 경우 -> 문제점을 방지하기 위해
#       GIL 실행, 리소스 전체에 락이 걸린다. -> Context Swithc(문맥 교환)
# GIL이 걸리면 여러 개의 스레드가 실행되는 것보다 한 개의 스레드가 더 빠를 수 있다.

# GIL : 멀티프로세싱 사용, CPython


import os
import time
from concurrent import futures

# futures 안에 아래의 함수들이 들어가 있다.
# import threading, multiprocessing


# Wokr list 안에 함수를 넣어서 실행 할 수도 있다.
WORK_LIST = [10000, 100000, 1000000, 10000000]

# 동시성 합계 계산 메인 함수
# 누적 합계 함수(제레네이터)
def sum_generator(n):
    return sum(n for n in range(1, n+1))


def main():
    '''
    일꾼들 일을 시킬 때, thread or cpu를 사용할 수 있다.
    '''
    # worker count # 몇 명에서 일을 하는지
    worker = min(10, len(WORK_LIST))  # 몇 개가 필요한지 모를 경우 운영체제한테 맡겨도 된다.
    
    # 시작 시간
    start_time = time.time()

    # 결과 건수
    # ProcessPoolExecutor -> cpu
    # ThreadPoolExecutor -> thread
    with futures.ThreadPoolExecutor() as excuter:
        # map -> 작업 순서 유지, 즉시 실행
        result = excuter.map(sum_generator, WORK_LIST) # map 함수

    # 종료 시간
    end_time = time.time() - start_time
    # 출력 포맷
    msg = '\n Result -> {} Time : {:.2f}s'
    # 최종 결과 출력
    print(msg.format(list(result), end_time))


# 실행
if __name__=='__main__':
    main()
