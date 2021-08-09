#include <stdio.h>
#include <time.h>

int main_condition() {

	// void�� �Լ����� �ƹ��͵� �������� �ʴ´�.
	// return�� ������� �ʾƵ� �ȴ�. or return;�� ��� ����

	// if(����) {...} else{...}

	// ������ ź�ٰ� ���� �л� or �Ϲ������� ���� (�Ϲ���: 20�� �̻�)
	int age1 = 25;
	if (age1 >= 20) {
		printf("�Ϲ����Դϴ�.\n");
	}
	else {
		printf("�л��Դϴ�.\n");
	}

	// if / else if / else
	// �ʵ��л�(8~13) / ���л�(14~16) / ����л�(17~19)���� ������?

	int age2 = 8;
	if (age2 >= 8 && age2 <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if(age2 >= 14 && age2 <= 16){
		printf("���л��Դϴ�.\n");
	}
	else if (age2 >= 17 && age2 <= 19) {
		printf("����л��Դϴ�..\n");
	}
	else {
		printf("�л��� �ƴѰ�����");
	}


	// break / continue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.

	printf("\n");
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������\n");
			break;            // ������ ������ ��, Ż��
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}

	// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���.

	printf("\n");
	for (int s = 1; s <= 30; s++) {
		if (s >= 6 && s <= 10) {
			if (s == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", s);
				continue;        //  ���� ������ �����ϰ� �������� �Ѿ��.
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", s);
		}
	}

	printf("\n");
	int a = 10;
	int b = 10;
	int c = 11;
	int d = 12;
	if (a == b || c == d) {
		printf("a �� b Ȥ�� c�� d�� ���� �����ϴ�.\n");
	}
	else {
		printf("���� ���� �ٸ��׿�\n");
	}

	printf("\n");
	/* ���� ���� �� */
	srand(time(NULL));              // time.h�� ���
	int e = rand() % 3;				// 0 ~ 2 ��ȯ
	if (e == 0) {
		printf("����\n");
		printf("%d\n", e);
	}
	else if (e == 1) {
		printf("����\n");
		printf("%d\n", e);
	}
	else if (e == 2) {
		printf("��\n"); 
		printf("%d\n", e);
	}
	else {
		printf("�����\n");
		printf("%d\n", e);
	}

	/*
	switch (��){
		case ����
	}

	*/
	printf("\n");
	int f = rand() % 3;
	switch (f) {
		case 0:printf("����\n"); break;
		case 1:printf("����\n"); break;
		case 2:printf("��\n"); break;
		default:printf("�����"); break;
	}

	return 0;
}