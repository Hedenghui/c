//��ٷ������Լ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c;
	printf("�����������Լ��");
	scanf("%d%d", &a, &b);
	c = (a > b) ? b : a;
	while ((a%c) != 0 || (b%c) != 0){
		c--;
	}
	printf("���Լ��Ϊ��%d\n", c);
	system("pause");
	return 0;
}