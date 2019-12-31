//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void table(int num){
	for (int i = 1; i <= num; i++){
		for (int j = 1; j <= i; j++){
			int sum = 0;
			sum = i*j;
			printf("%d*%d=%d\t", i, j, sum);
		}printf("\n");
	}
}
int main(){
	int n = 0;
	printf("请输入行数：");
	scanf("%d", &n);
	table(n);
	system("pause");
	return 0;
}