#include <stdio.h>
#include <time.h>

/*
	10原軒税 辞稽 陥献 疑弘 (唖 朝球 2舌梢)
	紫遂切稽採斗 2鯵税 脊径葵聖 閤焼辞 -> 旭精 疑弘 達生檎 朝球 及増奄
	乞窮 疑弘 瞬聖 達生檎 惟績 曽戟
	恥 叔鳶 判呪 硝形爽奄
*/

int arrayAnimal[4][5];  // 朝球 走亀(20舌税 朝球)
int checkAnimal[4][5];  // 及増縛澗走 食採 溌昔
char* strAnimal[10]; // 朝球 疑弘 識情

void initAnimalArray();
void initAnimalName();
int getEmptyPosition(); 
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals(); 
void printQuestion();
void shuffleAnimal();
int foundAllanimals();

int main(void)
{
	srand(time(NULL));

	initAnimalArray(); // 朝球 壕伸 幻級奄
	initAnimalName();
	shuffleAnimal();  // 朝球 走亀拭辞 嬢胸惟 壕帖拝走

	int failCount = 0; // 叔鳶 判呪


	// 惟績 叔楳
	while (1)
	{
		int select1 = 0; //紫遂切亜 識奪廃 坦製 呪
		int select2 = 0; //紫遂切亜 識澱廃 砧腰属 呪

		printAnimals(); // 疑弘 是帖 窒径
		printQuestion(); // 庚薦 窒径 (朝球 走亀)
		printf("及増聖 朝球研 2鯵 壱牽室推 : ");
		scanf_s("%d %d", &select1, &select2);
		
		if (select1 == select2) // 旭精 朝球 識澱 獣 巷反
			continue;

		// 疎妊拭 背雁馬澗 朝球研 及増嬢 左壱 旭精走 照 旭精走 溌昔
		// 舛呪 疎妊研 (x, y)稽 痕発
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// 朝球亜 照 及増縛澗走(checkAnimal = 0) and 砧 疑弘戚 旭精走
		// 陥献 疑弘昔 井酔
		if (
			// 照 及増縛澗走 溌昔
			(checkAnimal[firstSelect_x][firstSelect_y] == 0 &&
				checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&&
			// 砧 疑弘戚 旭精走
			(arrayAnimal[firstSelect_x][secondSelect_y]
				== arrayAnimal[secondSelect_x][secondSelect_y])
			)
		{
			printf("\n\n 桜壱! :  %s 降胃 \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n 強!(堂携暗蟹, 戚耕 及増微 朝球脊艦陥.\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		// 乞窮 疑弘聖 達紹澗 食採 1: 凧, 0 : 暗憎
		if (foundAllanimals() == 1)
		{
			printf("\n\n 逐馬杯艦陥 ! 乞窮 功弘聖 達紹柔艦陥.\n");
			printf("走榎猿走 恥 %d 腰 叔呪馬心柔艦陥.\n", failCount);
		}
	}	


	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	/* 10原軒税 疑弘 識情 */
	strAnimal[0] = "据周戚";
	strAnimal[1] = "馬原";
	strAnimal[2] = "悪焼走";
	strAnimal[3] = "壱丞戚";
	strAnimal[4] = "掬走";
	
	strAnimal[5] = "坪晦軒";
	strAnimal[6] = "奄鍵";
	strAnimal[7] = "開展";
	strAnimal[8] = "展繕";
	strAnimal[9] = "硲櫛戚";
}

void shuffleAnimal()
{
	// けけけけけ
	// けけけけけ
	// けけけけけ
	// けけけけけ

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// 疎妊拭辞 朔 因娃 達奄
int getEmptyPosition()
{
	// けけけけけ  0  1  2  3  4   ->   0 0 0 0 0
	// けけけけけ  5  6  7  8  9   ->   1 1 1 1 1 
	// けけけけけ  10 11 12 13 14  ->   2 2 2 2 2
	// けけけけけ  15 16 17 18 19  ->   3 3 3 3 3 
	// (3, 4) -> 19
	while (1)
	{
		int randPos = rand() % 20; // 0 ~ 19 紫戚税 収切 鋼発
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	// 19 -> (3,4)
	return x / 5;   // x研 5稽 蟹勧 交
}

int conv_pos_y(int y)
{
	return y % 5;  // y研 5稽 蟹勧 蟹袴走
}

void printAnimals() // 疑弘 是帖 窒径
{
	/* 
	strAnimal 精 1 - 10 猿走 疑弘戚 糎仙
	arrayAnimal
	*/
	printf("\n======== 戚闇 搾腔昔汽.. 侯掘 左食掃艦陥.\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		} 
		printf("\n");
	}
	printf("\n =====================================\n\n");
}
void printQuestion() // 庚薦 窒径 (朝球 走亀)
{
				  // seq                  // checkAnimal
	// けけけけけ  0  1  2  3  4      ->    0 0 0 0 0
	// けけけけけ  馬原  6  7  8  9   ->    1 0 0 0 0
	// けけけけけ  10 11 12 馬原 14   ->    0 0 0 1 0
	// けけけけけ  15 16 17 18 19     ->    0 0 0 0 0

	printf("\n\n(庚薦)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// 朝球研 及増嬢辞 舛岩聖 限縛生檎 '疑弘 戚硯'
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8d", seq);
			}
			seq++;
			// 焼送 及増走 公 梅生檎(舛岩聖 公 限縛生檎) -> 是帖研 蟹展鎧澗 収切
		}
		printf("\n");
	}

}// 庚薦 窒径 (朝球 走亀)

int foundAllanimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1; // 乞砧 陥 達紹陥.
}