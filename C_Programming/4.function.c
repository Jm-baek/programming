#include <stdio.h>


/* 함수이름(전달값){

} */


//선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);


int apples(int total, int ate);

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void) {
	//
	// function
	// 계산기

	int num = 2;
	//printf("num 은 %d 입니다.\n", num); // 2
	p(num);

	// 2 + 3 은?
	num = num + 3; // num += 3   
	//printf("num 은 %d 입니다.\n", num); // 5
	p(num);

	// 5 - 1 은?
	num -= 1; // num = num -1
	//printf("num은 %d 입니다.\n", num);  // 4
	p(num);

	// 4 X 3 은?
	num *= 3;
	//printf("num은 %d 입니다.\n", num); // 12
	p(num);

	// 12 / 6 은?
	num /= 6;
	//printf("num은 %d 입니다.\n", num); // 2
	p(num);

	// 반환 값이 없는함수
	printf("\n");
	function_without_return();

	// 반환 값이 있는 함수
	printf("\n");
	int ret = function_with_return();
	printf("ret은 %d 입니다.\n", ret);

	// 파라미터(전달값)가 없는 함수
	printf("\n");
	function_without_param();

	// 파라미터(전달값)가 없는 함수
	printf("\n");
	function_with_param(35, 32, 33);

	printf("\n");
	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	int apple = apples(5, 2); // 5개의 사과 중 2개를 먹었어요.
	printf("사과 5개 중에 2개를 먹으면? %d 개가 남아요.\n", apple);
	printf("\n");
	printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요.\n", 10, 4, apples(10, 4));

	// 계산기 함수
	printf("\n현재 num의 값은 %d 입니다.\n", num);

	//int num3 = 2;
	num = add(num, 3);
	p(num);

	printf("\n");

	num = sub(num, 1);
	p(num);

	printf("\n");

	num = mul(num, 3);
	p(num);

	printf("\n");

	num = div(num, 6);
	p(num);

	return 0;
}

// 정의
void p(int num) {
	printf("num은 %d입니다.\n", num);
}

void function_without_return() {
	printf("반환 값이 없는 함수입니다.\n");
}

int function_with_return() {
	printf("반환 값이 있는 함수입니다.\n");
	return 10;
}

void function_without_param() {
	printf("전달 값이 없는 함수입니다.\n");
}

void function_with_param(int num1, int num2, int num3) {
	printf("전달 값이 있는 함수입니다.\n");
	printf("전달 받을 값은 %d, %d, %d \n", num1, num2, num3);
} 

int apples(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}