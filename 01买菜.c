#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main01(void)
{
	//黄瓜3元/近 买5近
	//常量 运行中数值不能边
	const int price = 3;//常量只读变量
	//price = 5;//err
	//变量
	int weight = 5;
	int sum = price * weight;
	printf("%d", sum);
	return 0;
}