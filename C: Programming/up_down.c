#include<stdio.h>
#include<time.h>

int main_updown() {

	srand(time(NULL));

	// int num = rand() % 100; // 0 ~99

	int num = rand() % 100 + 1; // 1 ~ 100
	printf("���� : %d\n", num);
	int answer = 0; //����
	int chance = 5; //��ȸ
	while (chance > 0) {
		printf("���� ��ȸ %d �� \n", chance--);
		printf("���ڸ� ���������� (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer < num) {
			printf("up \n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ� ! \n\n");
			break;
		}
		else {
			// �߻��� �� ������, Ȥ�� �𸣴� ��� ���
			printf("�� �� ���� ������ �߻��߾�� \n\n");
		}

		if (chance == 0) {
			printf("������ %d \n", num);
			printf("��ȸ�� �� ����߽��ϴ�.");
			break;
		}
	}
	return 0;
}