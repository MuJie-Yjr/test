#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main01(void)
{
	//�ƹ�3Ԫ/�� ��5��
	//���� ��������ֵ���ܱ�
	const int price = 3;//����ֻ������
	//price = 5;//err
	//����
	int weight = 5;
	int sum = price * weight;
	printf("%d", sum);
	return 0;
}