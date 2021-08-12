#include <stdio.h>

int main_array(void) {
	
	
	/*
	int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다.
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);
	*/


	// 여러 개의 변수를 함께, 동시에 생성
	int subway_array[3];    // [0][1][2]

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	}

	printf("\n");

	// 값 설정 방법
	// 값을 선언하지 않으면 더미(쓰레기) 값이 나온다.
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	// 배열 크기는 항상 상수로 선언
	// int size = 10;
	// int arr[size] = 10;  // 에러가 발생한다.


	printf("\n");
	int arr1[10] = { 1, 2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	printf("\n");
	// 중괄호 개수에 따라 배열 크기를 조정한다.
	int arr2[] = { 1, 2 };    //arr2[2]

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}

	printf("\n");
	// 문자 vs 문자열
	char c = 'A';
	printf("%c\n", c);

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
	char str[6] = "coding";  // [c][o][d][i][n][g]
	char str1[7] = "coding";  // [c][o][d][i][n][g]

	printf("%s\n", str);
	printf("%s\n", str1);

	printf("\n");
	// 배열 크기를 지정 안하면 알아서 정해준다.
	char str3[] = "coding";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));

	for (int i = 0; i < sizeof(str3); i++) {
		printf("%c\n", str3[i]);
	}

	printf("\n");
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// 영어 한 글자: 1byte
	// 한글 한 글자: 2byte
	// char 크기 : 1byte

	char c_array1[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	printf("%s\n", c_array1);
	char c_array2[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array2);


	// 남는 공간은 문자열 끝이 자동으로 들어간다.
	printf("\n");
	char c_array3[10] = { 'c', 'o', 'd', 'i', 'n', 'g'};
	printf("%s\n", c_array3);

	for (int i = 0; i < sizeof(c_array3); i++) {
		printf("%d\n", c_array3[i]); // ASCII 코드 값 출력 (null 문자 0으로 입력됨)
	} 
	
	// 문자열 
	char name[256];
	printf("이름을 입력하세요 :");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	// 참고: ASCII 코드? ANSI (미국표준협회)에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드 (0~127)
	// a : 97 (문자 a의 아스키코드 정수값)
	// A : 65
	// 0 : 48

	printf("\n");
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	
	printf("\n");
	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("\n");
	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("\n");
	printf("%c\n", '0');
	printf("%d\n", '0');

	// 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
		printf("아스키코드 정수 %d : %s\n", i, i);
	}

	return 0;

}