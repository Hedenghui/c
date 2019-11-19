//穷举法算最大公约数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c;
	printf("输入两个最大公约数");
	scanf("%d%d", &a, &b);
	c = (a > b) ? b : a;
	while ((a%c) != 0 || (b%c) != 0){
		c--;
	}
	printf("最大公约数为：%d\n", c);
	system("pause");
	return 0;
}