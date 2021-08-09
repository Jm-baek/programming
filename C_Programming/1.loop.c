# include <stdio.h>

int main_loop() {

	///* printf 사용 */
	printf("Hello World!! \n");
	printf("printf 사용이 끝났습니다.\n");
	printf("\n");
	

	///* for (선언; 조건; 증감) {} */
	printf("for문을 시작합니다.\n");

	for (int i = 1; i <= 5; i++) {
		printf("Hello World %d\n", i);
	} printf("for문이 끝났습니다. \n");
	printf("\n");

	//
	///* while (조건){} */
	///* 증감 부분*/
	int a = 1;
	printf("while문을 시작합니다.\n");

	while (a <= 5) {
		printf("Hello World!! %d\n", a++);
	} printf("while문이 끝났습니다. \n");
	printf("\n");


	///* do {} while(조건) */
	int b = 1;
	printf("do, while문을 시작합니다.\n");

	do {
		printf("Hello World %d\n", b++);
	} while (b <= 10); printf("\n");


	///* 이중 반목문 */
	for (int c = 1; c <= 3; c++) {
		printf("첫 번째 반복문 : %d\n", c);

		for (int j = 1; j <= 5; j++) {
			printf("   두 번째 반복문 : %d\n", j);
		}
	}

	/* 구구단 */
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6

	printf("\n구구단 테스트\n");

	for (int d = 1; d <= 9; d++) {
		printf("%d단 계산\n", d);
		for (int h = 1; h <=9; h++) {
			printf("  %d x %d = %d\n", d, h, d * h);
		}
	}


	/* 피라미드 쌓기 */
	 
	printf("\n");

	for (int e = 0; e < 5; e++) {
		for (int f = 0; f <= e; f++) {
			printf("*");
		} 
		printf("\n");
	}

	/* 오른쪽 피라미드 쌓기 */

	printf("\n");

	for (int g = 0; g < 5; g++) {
		for (int h = g; h < 5-1; h++) {
			printf(" ");
		} 
		for (int k = 0; k <= g; k++) {
			printf("*");
		}
		printf("\n");
	}
	/* 피라미드를 쌓아라 - 프로젝트 */
	
	/* 
	SSSS*   
	SSS***
	SS*****
	S*******
	*/
	
	int floor;

	printf("\n몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	for (int l = 0; l < floor; l++) {               // 한 칸씩 띄워준다.
		for (int m = l; m < floor - 1 ; m++) {      // 스페이스 생성
			printf(" ");
		}
		for (int o = 0; o < 2*l + 1; o++) {         // 별 생성
			printf("*");
		}
		printf("\n");
	}

	return 0;
}