#include <stdio.h>
#include<Windows.h>
int main()
/*{
	SetConsoleOutputCP(65001);
	int q = 0;
	printf("请输入金额：");
	scanf_s("%d", &q);
	int w = 100 - q;
	printf("找你%d\n", w);
	return 0;
}*/
/*{
	SetConsoleOutputCP(65001);
	const int AMOUNT = 100;
	int q = 0;
	printf("请输入金额：");
	scanf_s("%d", &q);
	int w = AMOUNT - q;
	printf("找你%d\n", w);
	return 0;
}*
/*{
	SetConsoleOutputCP(65001);
	int amount;
	int q = 0;
	printf("请输入金额：");
	scanf_s("%d", &q);
	printf("请输入票面:");
	scanf_s("%d", &amount);
	int w = amount - q;
	printf("找你%d\n", w);
		return 0;
	}*/
{
	SetConsoleOutputCP(65001);
	int amount;
	int q = 0;
	printf("请输入金额：");
	scanf_s("%d", &q);
	printf("请输入票面:");
	scanf_s("%d", &amount);
	if (q >= amount) {
		int w = amount - q;
		printf("找你%d\n", w);
	}
	return 0;
}
