#include <stdio.h>
#include <time.h>

int main_condition() {

	// void는 함수에서 아무것도 돌려주지 않는다.
	// return을 사용하지 않아도 된다. or return;만 사용 가능

	// if(조건) {...} else{...}

	// 버스를 탄다고 가정 학생 or 일반인으로 구분 (일반인: 20세 이상)
	int age1 = 25;
	if (age1 >= 20) {
		printf("일반인입니다.\n");
	}
	else {
		printf("학생입니다.\n");
	}

	// if / else if / else
	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?

	int age2 = 8;
	if (age2 >= 8 && age2 <= 13) {
		printf("초등학생입니다.\n");
	}
	else if(age2 >= 14 && age2 <= 16){
		printf("중학생입니다.\n");
	}
	else if (age2 >= 17 && age2 <= 19) {
		printf("고등학생입니다..\n");
	}
	else {
		printf("학생이 아닌가봐요");
	}


	// break / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.

	printf("\n");
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요\n");
			break;            // 조건을 만족할 때, 탈출
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	}

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.

	printf("\n");
	for (int s = 1; s <= 30; s++) {
		if (s >= 6 && s <= 10) {
			if (s == 7) {
				printf("%d번 학생은 결석입니다.\n", s);
				continue;        //  이후 실행은 생략하고 다음으로 넘어간다.
			}
			printf("%d번 학생은 조별 발표 준비를 하세요.\n", s);
		}
	}

	printf("\n");
	int a = 10;
	int b = 10;
	int c = 11;
	int d = 12;
	if (a == b || c == d) {
		printf("a 와 b 혹은 c와 d의 값이 같습니다.\n");
	}
	else {
		printf("값이 서로 다르네요\n");
	}

	printf("\n");
	/* 가위 바위 보 */
	srand(time(NULL));              // time.h를 사용
	int e = rand() % 3;				// 0 ~ 2 반환
	if (e == 0) {
		printf("가위\n");
		printf("%d\n", e);
	}
	else if (e == 1) {
		printf("바위\n");
		printf("%d\n", e);
	}
	else if (e == 2) {
		printf("보\n"); 
		printf("%d\n", e);
	}
	else {
		printf("몰라요\n");
		printf("%d\n", e);
	}

	/*
	switch (값){
		case 가위
	}

	*/
	printf("\n");
	int f = rand() % 3;
	switch (f) {
		case 0:printf("가위\n"); break;
		case 1:printf("바위\n"); break;
		case 2:printf("보\n"); break;
		default:printf("몰라요"); break;
	}

	return 0;
}