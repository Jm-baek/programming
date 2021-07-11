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
class Car:
    """
    car class
    Author: Baek Jong Min
    Date: 2021.06.02
    Description: Class, Static, Instance Method
    """
    # 클래스 변수(모든 인스턴스가 공유)
    price_per_raise = 1.0

    def __init__(self, company, details):
        # 인스턴스 변수
        self._company = company
        self._details = details

    # 인스턴스 메소드
    def __str__(self):
        return 'str : {} - {}'.format(self._company, self._details)

    def __repr__(self):
        return 'str : {} - {}'.format(self._company, self._details)

    # Instance Method
    # self: 객체의 고유한 속성 값을 사용
    def detail_info(self):
        print('current ID : {}'.format(id(self)))
        print('car detail info : {} {}'.format(self._company, self._details.get('price')))

    # Instance Method
    def get_price(self):
        return 'Before Car Price -> company: {}, price: {}'.format(self._company, self._details.get('price'))

    # Instance Method
    def get_price_calc(self):
        return 'After Car Price -> company: {}, price: {}'.format(self._company, self._details.get('price') * Car.price_per_raise)

    # Class Method
    @classmethod
    def rias_price(cls, per):
        # cls가 클래스이다
        if per <= 1:
            print('Please Enter 1 Or More')
            return
        cls.price_per_raise = per
        print('Succeed! price increased')

    # Static Method
    @staticmethod
    def is_bmw(inst):
        if inst._company == 'BMW':
            return 'Okay This is {}'.format(inst._company)
        return 'Sorry This car is not BMW'



# self 의미
car1 = Car('Ferrari', {'color': 'white', 'horsepower': 400, 'price': 8000})    # 1 증가 누적 1
car2 = Car('BMW',     {'color': 'Black', 'horsepower': 270, 'price': 5000})    # 1 증가 누적 2
car3 = Car('Audi',    {'color': 'Silver', 'horsepower': 300, 'price': 6000})   # 1 증가 누적 3

# 전체 정보 출력
car1.detail_info()

# 가격 정보 출력(직접 접근)
# 좋지 못한 방법 # 보통 막아 놓는다 # 캡슐화
print(car1._details.get('price'))
print(car1._details['price'])

# 가격정보(인상 전, 메소드 접근)
print(car1.get_price())
print(car2.get_price())

print()

# 가격정보(인상 gn)
Car.price_per_raise = 1.4  # 이것도 직접 접근은 좋지 않다.
print(car1.get_price_calc())
print(car2.get_price_calc())


Car.rias_price(1)
Car.rias_price(1.6)

print(car1.get_price_calc())
print(car2.get_price_calc())
print()
# 인스턴스 호출
print(car1.is_bmw(car1))
print(car2.is_bmw(car2))
print()
# 클래스 호출
print(Car.is_bmw(car1))
print(Car.is_bmw(car2))