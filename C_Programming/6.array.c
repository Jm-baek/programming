#include <stdio.h>

int main_array(void) {
	
	
	/*
	int subway_1 = 30; // ����ö 1ȣ���� 30���� Ÿ�� �ִ�.
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);
	*/


	// ���� ���� ������ �Բ�, ���ÿ� ����
	int subway_array[3];    // [0][1][2]

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}

	printf("\n");

	// �� ���� ���
	// ���� �������� ������ ����(������) ���� ���´�.
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	// �迭 ũ��� �׻� ����� ����
	// int size = 10;
	// int arr[size] = 10;  // ������ �߻��Ѵ�.


	printf("\n");
	int arr1[10] = { 1, 2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	printf("\n");
	// �߰�ȣ ������ ���� �迭 ũ�⸦ �����Ѵ�.
	int arr2[] = { 1, 2 };    //arr2[2]

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}

	printf("\n");
	// ���� vs ���ڿ�
	char c = 'A';
	printf("%c\n", c);

	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0' �� ���ԵǾ�� ��
	char str[6] = "coding";  // [c][o][d][i][n][g]
	char str1[7] = "coding";  // [c][o][d][i][n][g]

	printf("%s\n", str);
	printf("%s\n", str1);

	printf("\n");
	// �迭 ũ�⸦ ���� ���ϸ� �˾Ƽ� �����ش�.
	char str3[] = "coding";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));

	for (int i = 0; i < sizeof(str3); i++) {
		printf("%c\n", str3[i]);
	}

	printf("\n");
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	// ���� �� ����: 1byte
	// �ѱ� �� ����: 2byte
	// char ũ�� : 1byte

	char c_array1[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	printf("%s\n", c_array1);
	char c_array2[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array2);


	// ���� ������ ���ڿ� ���� �ڵ����� ����.
	printf("\n");
	char c_array3[10] = { 'c', 'o', 'd', 'i', 'n', 'g'};
	printf("%s\n", c_array3);

	for (int i = 0; i < sizeof(c_array3); i++) {
		printf("%d\n", c_array3[i]); // ASCII �ڵ� �� ��� (null ���� 0���� �Էµ�)
	} 
	
	// ���ڿ� 
	char name[256];
	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	// ����: ASCII �ڵ�? ANSI (�̱�ǥ����ȸ)���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128�� �ڵ� (0~127)
	// a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
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

	// 0 ~ 127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++) {
		printf("�ƽ�Ű�ڵ� ���� %d : %s\n", i, i);
	}

	return 0;

}