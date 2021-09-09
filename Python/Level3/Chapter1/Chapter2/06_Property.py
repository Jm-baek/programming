"""
Chapter 2
Python Advanced(2) - Property(2) - Getter, Setter
Keyword - @Property
"""

"""
프로퍼티(Property) 사용 장점
1. 파이써닉한 코드
2. 변수 제약 설정
3. Getterm Seeter 효과 동등(코드 일관성)
    - 캡슐화 -유효성 검사 기능 추가 용이
    - 대체 표현(속성 노출, 내부의 표현 숨기기 가능)
    - 속성의 수명 및 메모리 관리 용이
    - 디버깅 용이
    - Getter, Setter 작동에 대해 설계된 여러 라이브러리(오픈소스) 상호 운용성 증가
"""

# Ex1
# Property 활용 Getter, Setter 작성
# 이전 수업에는 def get_y, def set_y 를 작성했었다,
class SampleA:
    def __init__(self):
        self.x = 0
        self.__y = 0 # private

    @property      # getter
    def y(self):
        print('Called get method')
        return self.__y

    @y.setter
    def y(self, value):
        print('Called set method')
        self.__y = value
    
    @y.deleter
    def y(self):
        del self.__y




a = SampleA()

a.x = 1
# 내부 메소드의 이름이 다 같지만, 알아서 수정이 된다.
# setter
a.y = 2  


print('Ex1 > x : {}'.format(a.x))
print('Ex1 > x : {}'.format(a.y)) # getter

# deleter
del a.y    # '_SampleA__y' 삭제된다,
print('Ex1 >', dir(a))



# Ex2
# Property 활용 제약 조건 추가
class SampleB:
    def __init__(self):
        self.x = 0
        self.__y = 0 # private

    @property      # getter
    def y(self):
        print('Called get method')
        return self.__y

    @y.setter
    def y(self, value):
        print('Called set method')
        if value < 0:
            raise ValueError('0 보다 큰 값을 입력하세요.')
        self.__y = value
    
    @y.deleter
    def y(self):
        del self.__y


b = SampleB()

b.x = 1
b.y = 10

# b.y = -5  # 예외 발생.
