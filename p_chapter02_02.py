# 딕셔너리 구조
# 코드 반복 지속, 중첩 문제(키), 키 조회 예외 처리 등
car_dicts = [
    {'car_company': 'Ferrari', 'car_detail': {'color': 'white', 'horsepower': 400, 'price': 8000}},
    {'car_company': 'BMW', 'car_detail': {'color': 'Black', 'horsepower': 270, 'price': 5000}},
    {'car_company': 'Audi', 'car_detail': {'color': 'Silver', 'horsepower': 300, 'price': 6000}}
]

# 삭제
# pop(key)
del car_dicts[1]
print()
print(car_dicts)
print()

# 클래스 구조
# 구조 설계 후 재사용성 증가, 코드 반복 최소화, 메소드 활용


# 인스턴스 변수는 self가 첫 번째 매개변수로 넘어온다.
class car:
    """
    car class
    Author: Baek Jong Min
    Date: 2021.06.02
    """
    # 클래스 변수(모든 인스턴스가 공유)
    car_count = 0

    def __init__(self, company, details):
        # 인스턴스 변수
        self._company = company
        self._details = details
        car.car_count += 1         # 인스턴스 변수 생성 시 1씩 증가

    # 인스턴스 메소드
    def __str__(self):
        return 'str : {} - {}'.format(self._company, self._details)

    def __repr__(self):
        return 'str : {} - {}'.format(self._company, self._details)

    def __del__(self):
        print('지워지는거야?')
        car.car_count -= 1

    def __reduce__(self):
        pass

    # 인스턴스 메소드
    def detail_info(self):
        print('current ID : {}'.format(id(self)))
        print('car detail info : {} {}'.format(self._company, self._details.get('price')))


# 인스턴스 변수
car1 = car('Ferrari', {'color': 'white', 'horsepower': 400, 'price': 8000})    # 1 증가 누적 1
car2 = car('BMW',     {'color': 'Black', 'horsepower': 270, 'price': 5000})    # 1 증가 누적 2
car3 = car('Audi',    {'color': 'Silver', 'horsepower': 300, 'price': 6000})   # 1 증가 누적 3

# ID확인
print(id(car1))
print(id(car2))
print(id(car3))


# is 와 ==의 차이점
list1 = [1, 2, 3]
list2 = [1, 2, 3]
print(list1 == list2)
print(list1 is list2)

# dir & __dict__ 의미
# 해당 인스턴스가 가지고 있는 매직메소드를 리스트 형태로 보여준다.
# 너무 많은 불필요한 정보를 보여준다
print(dir(car1))
print(dir(car2))

print()

# 자기 안의 namespace영역
print(car1.__dict__)
print(car2.__dict__)

# Docstring
print(car.__doc__)

# 실행
car1.detail_info()
car.detail_info(car1)
car2.detail_info()
car.detail_info(car2)

# 비교
# id 값이 같다, 왜?
# 자식의 인스턴스가 아니라 부모의 클래스 id를 출력한 것이다.
print(car1.__class__, car2.__class__)
print(id(car1.__class__), id(car2.__class__), id(car3.__class__))

# 에러
# car.detail_info()  # 에러가 발생


# 공유 확인
print(car1.__dict__)  # 여기에는 car_count 가 안나온다.
print(dir(car1)) # 여기는 보인다
print(car1.car_count) # 여기는 출력이 된다.

del car2
# 삭제 호가인
print(car1.car_count)
print(car.car_count)

# 인스턴스 네임스페이스에 없으면 상위에서 검색
# 증, 동일한 이름으로 변수 생성 가능(인스턴스 검색 후 -> 상위 클래스 검색(부모 변수)
print(car1.car_count)
print(car.car_count)
