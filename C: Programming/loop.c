# include <stdio.h>

int main_loop() {

	///* printf ��� */
	printf("Hello World!! \n");
	printf("printf ����� �������ϴ�.\n");
	printf("\n");
	

	///* for (����; ����; ����) {} */
	printf("for���� �����մϴ�.\n");

	for (int i = 1; i <= 5; i++) {
		printf("Hello World %d\n", i);
	} printf("for���� �������ϴ�. \n");
	printf("\n");

	//
	///* while (����){} */
	///* ���� �κ�*/
	int a = 1;
	printf("while���� �����մϴ�.\n");

	while (a <= 5) {
		printf("Hello World!! %d\n", a++);
	} printf("while���� �������ϴ�. \n");
	printf("\n");


	///* do {} while(����) */
	int b = 1;
	printf("do, while���� �����մϴ�.\n");

	do {
		printf("Hello World %d\n", b++);
	} while (b <= 10); printf("\n");


	///* ���� �ݸ� */
	for (int c = 1; c <= 3; c++) {
		printf("ù ��° �ݺ��� : %d\n", c);

		for (int j = 1; j <= 5; j++) {
			printf("   �� ��° �ݺ��� : %d\n", j);
		}
	}

	/* ������ */
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6

	printf("\n������ �׽�Ʈ\n");

	for (int d = 1; d <= 9; d++) {
		printf("%d�� ���\n", d);
		for (int h = 1; h <=9; h++) {
			printf("  %d x %d = %d\n", d, h, d * h);
		}
	}


	/* �Ƕ�̵� �ױ� */
	 
	printf("\n");

	for (int e = 0; e < 5; e++) {
		for (int f = 0; f <= e; f++) {
			printf("*");
		} 
		printf("\n");
	}

	/* ������ �Ƕ�̵� �ױ� */

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
	/* �Ƕ�̵带 �׾ƶ� - ������Ʈ */
	
	/* 
	SSSS*   
	SSS***
	SS*****
	S*******
	*/
	
	int floor;

	printf("\n�� ������ �װڴ���?");
	scanf_s("%d", &floor);

	for (int l = 0; l < floor; l++) {               // �� ĭ�� ����ش�.
		for (int m = l; m < floor - 1 ; m++) {      // �����̽� ����
			printf(" ");
		}
		for (int o = 0; o < 2*l + 1; o++) {         // �� ����
			printf("*");
		}
		printf("\n");
	}

	return 0;
}