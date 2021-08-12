#include <stdio.h>


void swap(int a, int b);
void changeArray(int* ptr);

int main_pointer(void)
{
	// 포인터
	// [철수] : 101호
	// [영희] : 201호
	// [민수] : 301호

	int 철수 = 1;  // 암호
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 미션맨 !

	// 첫 번째 미션 : 아파트의 각 집에 반문하여 문에 적힌 암호 확인
	int* 미션맨; // 포인터 변수

	미션맨 = &철수;  //  & 는 주소
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	/* 
	철수네 주소 : 11532888, 암호 : 1
	영희네 주소 : 11532876, 암호 : 2	
	민수네 주소 : 11532864, 암호 : 3
	미션맨이 방문하는 곳 주소 : 11532888, 암호 : 1
	*/

	미션맨 = &영희; 
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	/*
	철수네 주소 : 19920936, 암호 : 1
	영희네 주소 : 19920924, 암호 : 2
	민수네 주소 : 19920912, 암호 : 3
	미션맨이 방문하는 곳 주소 : 19920936, 암호 : 1
	미션맨이 방문하는 곳 주소 : 19920924, 암호 : 2
	*/

	미션맨 = &민수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	/*
	철수네 주소 : 9435292, 암호 : 1
	영희네 주소 : 9435280, 암호 : 2
	민수네 주소 : 9435268, 암호 : 3
	미션맨이 방문하는 곳 주소 : 9435292, 암호 : 1
	미션맨이 방문하는 곳 주소 : 9435280, 암호 : 2
	미션맨이 방문하는 곳 주소 : 9435268, 암호 : 3
	*/

	// 두 번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	/*
	철수네 주소 : 8060252, 암호 : 1
	영희네 주소 : 8060240, 암호 : 2
	민수네 주소 : 8060228, 암호 : 3
	미션맨이 방문하는 곳 주소 : 8060252, 암호 : 1
	미션맨이 방문하는 곳 주소 : 8060240, 암호 : 2
	미션맨이 방문하는 곳 주소 : 8060228, 암호 : 3
	미션맨이 암호를 바꾼 곳 주소 : 8060252, 암호 : 3
	미션맨이 암호를 바꾼 곳 주소 : 8060240, 암호 : 6
	미션맨이 암호를 바꾼 곳 주소 : 8060228, 암호 : 9
	*/

	// 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라!

	int* 스파이 = 미션맨;    // 초기화인가?
	printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
	printf("현재 스파이 주소 및 암호 : % d, % d\n", 스파이, *스파이);

	스파이 = &철수;
	*스파이 = *스파이 - 2; // 철수 = 철수 - 2 랑 같다.
	printf("현재 스파이 방문하는 곳 주소 및 암호 : % d, % d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 2; 
	printf("현재 스파이 방문하는 곳 주소 및 암호 : % d, % d\n", 스파이, *스파이);

	스파이 = &영희;
	*스파이 = *스파이 - 2;
	printf("현재 스파이 방문하는 곳 주소 및 암호 : % d, % d\n", 스파이, *스파이);

	printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 .. \n\n");

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 참고로 .. 미션맨이 사는 곳의 주소는 /// &미션맨 으로 확인
	printf("미션맨의 주소 : %d\n", &미션맨);
	printf("스파이의 주소 : %d\n", &스파이);
	
	// 배열 
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	printf("\nptr 값을 변경하면 arr 값도 변경된다.\n");
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	printf("\narr의 값\n");
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}

	printf("\n *(arr + i) 표현방법 \n");
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	}

	printf("\nptr의 값");
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	printf("\n *(ptr + i) 표현방법 \n");
	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d]의 값 : %d\n", i, *(ptr + i));
	}
	// *(arr + i) == arr[i] 똑같은 표현
	// arr = arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	printf("arr 자체의 값: %d\n", arr);
	printf("arr[0]의 주소 : %d\n", &arr[0]);

	printf("arr의 실제 값: %d\n", *arr);
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	// *& 는 아무것도 없는 것과 같다. &는 주소이며, * 는 그 주소의 값이기 때문에
	// *& 는 서로 상쇄된다.
	printf("\narr[0]의 실제 값 : %d\n", *&*&*&*&*&*&*&*&*&*&arr[0]);
	printf("arr[0]의 실제 값 : %d\n", arr[0]);


	int a = 10;
	int b = 20;

	printf("a의 주소 : %d\n", &a);
	printf("b의 주소 : %d\n", &b);

	// SWAP
	// a와 b 의 값을 바꾼다.
	printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("\nSwap 함수 후 => b : %d, b : %d\n", a, b);


	// 배열일 때, arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);     // arr2[3] = 50으로 변경
	
	/* 이 부분 조금 이해가 헷갈릴 수 있다. */
	changeArray(&arr2[0]); // arr2[0] 번째 주소를 줘도 arr2[3]의 값이 변할 수 있다.
 	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}


	return 0;
}


void swap(int a, int b)
{
	printf("\nSwap 함수 내 -> a의 주소 : %d\n", &a);
	printf("Swap 함수 내 -> b의 주소 : %d\n", &b);

	int temp = a;
	a = b;
	b = temp;

	printf("Swap 함수 내 a, b의 값 => a : %d, b : %d\n", a, b);

}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}