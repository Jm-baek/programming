#include <stdio.h>


/* �Լ��̸�(���ް�){

} */


//����
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
	// ����

	int num = 2;
	//printf("num �� %d �Դϴ�.\n", num); // 2
	p(num);

	// 2 + 3 ��?
	num = num + 3; // num += 3   
	//printf("num �� %d �Դϴ�.\n", num); // 5
	p(num);

	// 5 - 1 ��?
	num -= 1; // num = num -1
	//printf("num�� %d �Դϴ�.\n", num);  // 4
	p(num);

	// 4 X 3 ��?
	num *= 3;
	//printf("num�� %d �Դϴ�.\n", num); // 12
	p(num);

	// 12 / 6 ��?
	num /= 6;
	//printf("num�� %d �Դϴ�.\n", num); // 2
	p(num);

	// ��ȯ ���� �����Լ�
	printf("\n");
	function_without_return();

	// ��ȯ ���� �ִ� �Լ�
	printf("\n");
	int ret = function_with_return();
	printf("ret�� %d �Դϴ�.\n", ret);

	// �Ķ����(���ް�)�� ���� �Լ�
	printf("\n");
	function_without_param();

	// �Ķ����(���ް�)�� ���� �Լ�
	printf("\n");
	function_with_param(35, 32, 33);

	printf("\n");
	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	int apple = apples(5, 2); // 5���� ��� �� 2���� �Ծ����.
	printf("��� 5�� �߿� 2���� ������? %d ���� ���ƿ�.\n", apple);
	printf("\n");
	printf("��� %d �� �߿� %d ���� ������? %d ���� ���ƿ�.\n", 10, 4, apples(10, 4));

	// ���� �Լ�
	printf("\n���� num�� ���� %d �Դϴ�.\n", num);

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

// ����
void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}

void function_without_return() {
	printf("��ȯ ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_param() {
	printf("���� ���� ���� �Լ��Դϴ�.\n");
}

void function_with_param(int num1, int num2, int num3) {
	printf("���� ���� �ִ� �Լ��Դϴ�.\n");
	printf("���� ���� ���� %d, %d, %d \n", num1, num2, num3);
} 

int apples(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
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