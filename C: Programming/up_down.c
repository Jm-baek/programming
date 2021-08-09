#include<stdio.h>
#include<time.h>

int main_updown() {

	srand(time(NULL));

	// int num = rand() % 100; // 0 ~99

	int num = rand() % 100 + 1; // 1 ~ 100
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (chance > 0) {
		printf("남은 기회 %d 번 \n", chance--);
		printf("숫자를 맞혀보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer < num) {
			printf("up \n\n");
		}
		else if (answer == num) {
			printf("정답입니다 ! \n\n");
			break;
		}
		else {
			// 발생할 수 없지만, 혹시 모르는 경우 대비
			printf("알 수 없는 오류가 발생했어요 \n\n");
		}

		if (chance == 0) {
			printf("정답은 %d \n", num);
			printf("기회를 다 사용했습니다.");
			break;
		}
	}
	return 0;
}