#include <stdio.h>

int main_m_array(void)
{
	// 陥託据 壕伸 Multidimentsionla Array
	int i;            
	// け
	int arr[5];        
	// けけけけ
	
	int arr2[2][5];  // 2託据 壕伸  
	// けけけけけ
	// けけけけけ

	// [0, 1][0, 2][0, 3][0, 4] -> arr2[0][4]
	// [1, 1][1, 2][1, 3][1, 4] -> arr1[1][4]

	int arr3[4][2];  
	// けけ
	// けけ
	// けけ
	// けけ

	int arr4[2][2][2]; // 3託据 壕伸
	// けけ
	// けけ

	// けけ
	// けけ

	// けけ
	// けけ

	int arr5[5] = { 1, 2, 3, 4, 5 };
	int arr6[2][5] = { 
		{ 1, 2, 3, 4, 5 }, 
		{ 1, 2, 3, 4, 5 } 
	};
	int arr7[4][2] = { 
		{1, 2}, 
		{1, 2}, 
		{1, 2}, 
		{1, 2} 
	};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2託据 壕伸 (%d, %d) 税 葵 : %d\n", i, j, arr7[i][j]);
		}
		printf("\n");
	}

	int arr8[3][3][3] = { 
		{
			{1, 2, 3}, 
			{4, 5, 6},
			{7, 8, 9}
		}, 
		{
			{11, 12, 13}, 
			{14, 15, 16},
			{17, 18, 19}
		},
		{
			{21, 22, 23},
			{24, 25, 26},
			{27, 28, 29}
		}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++) {
				printf("3託据 壕伸 (%d,%d, %d) 税 葵精 : %d\n", i, j, k, arr8[i][j][k]);
			}
			printf("\n");
		}
	}

	return 0;
}