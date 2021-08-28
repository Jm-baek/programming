#include <stdio.h>


void swap(int a, int b);
void changeArray(int* ptr);

int main_pointer(void)
{
	// ������
	// [ö��] : 101ȣ
	// [����] : 201ȣ
	// [�μ�] : 301ȣ

	int ö�� = 1;  // ��ȣ
	int ���� = 2;
	int �μ� = 3;

	printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	// �̼Ǹ� !

	// ù ��° �̼� : ����Ʈ�� �� ���� �ݹ��Ͽ� ���� ���� ��ȣ Ȯ��
	int* �̼Ǹ�; // ������ ����

	�̼Ǹ� = &ö��;  //  & �� �ּ�
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	/* 
	ö���� �ּ� : 11532888, ��ȣ : 1
	����� �ּ� : 11532876, ��ȣ : 2	
	�μ��� �ּ� : 11532864, ��ȣ : 3
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 11532888, ��ȣ : 1
	*/

	�̼Ǹ� = &����; 
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	/*
	ö���� �ּ� : 19920936, ��ȣ : 1
	����� �ּ� : 19920924, ��ȣ : 2
	�μ��� �ּ� : 19920912, ��ȣ : 3
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 19920936, ��ȣ : 1
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 19920924, ��ȣ : 2
	*/

	�̼Ǹ� = &�μ�;
	printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	/*
	ö���� �ּ� : 9435292, ��ȣ : 1
	����� �ּ� : 9435280, ��ȣ : 2
	�μ��� �ּ� : 9435268, ��ȣ : 3
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 9435292, ��ȣ : 1
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 9435280, ��ȣ : 2
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 9435268, ��ȣ : 3
	*/

	// �� ��° �̼� : �� ��ȣ�� 3�� ���ض�
	�̼Ǹ� = &ö��;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &����;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	�̼Ǹ� = &�μ�;
	*�̼Ǹ� = *�̼Ǹ� * 3;
	printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	/*
	ö���� �ּ� : 8060252, ��ȣ : 1
	����� �ּ� : 8060240, ��ȣ : 2
	�μ��� �ּ� : 8060228, ��ȣ : 3
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 8060252, ��ȣ : 1
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 8060240, ��ȣ : 2
	�̼Ǹ��� �湮�ϴ� �� �ּ� : 8060228, ��ȣ : 3
	�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : 8060252, ��ȣ : 3
	�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : 8060240, ��ȣ : 6
	�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : 8060228, ��ȣ : 9
	*/

	// ������
	// �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����!

	int* ������ = �̼Ǹ�;    // �ʱ�ȭ�ΰ�?
	printf("\n ... �����̰� �̼� �����ϴ� �� ... \n\n");
	printf("���� ������ �ּ� �� ��ȣ : % d, % d\n", ������, *������);

	������ = &ö��;
	*������ = *������ - 2; // ö�� = ö�� - 2 �� ����.
	printf("���� ������ �湮�ϴ� �� �ּ� �� ��ȣ : % d, % d\n", ������, *������);

	������ = &�μ�;
	*������ = *������ - 2; 
	printf("���� ������ �湮�ϴ� �� �ּ� �� ��ȣ : % d, % d\n", ������, *������);

	������ = &����;
	*������ = *������ - 2;
	printf("���� ������ �湮�ϴ� �� �ּ� �� ��ȣ : % d, % d\n", ������, *������);

	printf("\n ... ö�� ���� �μ��� ���� �������� �ٲ� ��ȣ�� ���� ���� .. \n\n");

	printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	// ������ .. �̼Ǹ��� ��� ���� �ּҴ� /// &�̼Ǹ� ���� Ȯ��
	printf("�̼Ǹ��� �ּ� : %d\n", &�̼Ǹ�);
	printf("�������� �ּ� : %d\n", &������);
	
	// �迭 
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("�迭 ptr[%d]�� �� : %d\n", i, ptr[i]);
	}

	printf("\nptr ���� �����ϸ� arr ���� ����ȴ�.\n");
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	printf("\narr�� ��\n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}

	printf("\n *(arr + i) ǥ����� \n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
	}

	printf("\nptr�� ��");
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 ptr[%d]�� �� : %d\n", i, ptr[i]);
	}

	printf("\n *(ptr + i) ǥ����� \n");
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 ptr[%d]�� �� : %d\n", i, *(ptr + i));
	}
	// *(arr + i) == arr[i] �Ȱ��� ǥ��
	// arr = arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
	printf("arr ��ü�� ��: %d\n", arr);
	printf("arr[0]�� �ּ� : %d\n", &arr[0]);

	printf("arr�� ���� ��: %d\n", *arr);
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

	// *& �� �ƹ��͵� ���� �Ͱ� ����. &�� �ּ��̸�, * �� �� �ּ��� ���̱� ������
	// *& �� ���� ���ȴ�.
	printf("\narr[0]�� ���� �� : %d\n", *&*&*&*&*&*&*&*&*&*&arr[0]);
	printf("arr[0]�� ���� �� : %d\n", arr[0]);


	int a = 10;
	int b = 20;

	printf("a�� �ּ� : %d\n", &a);
	printf("b�� �ּ� : %d\n", &b);

	// SWAP
	// a�� b �� ���� �ٲ۴�.
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("\nSwap �Լ� �� => b : %d, b : %d\n", a, b);


	// �迭�� ��, arr2 -> �ּ�
	int arr2[3] = { 10, 20, 30 };
	//changeArray(arr2);     // arr2[3] = 50���� ����
	
	/* �� �κ� ���� ���ذ� �򰥸� �� �ִ�. */
	changeArray(&arr2[0]); // arr2[0] ��° �ּҸ� �൵ arr2[3]�� ���� ���� �� �ִ�.
 	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}


	return 0;
}


void swap(int a, int b)
{
	printf("\nSwap �Լ� �� -> a�� �ּ� : %d\n", &a);
	printf("Swap �Լ� �� -> b�� �ּ� : %d\n", &b);

	int temp = a;
	a = b;
	b = temp;

	printf("Swap �Լ� �� a, b�� �� => a : %d, b : %d\n", a, b);

}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}