//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
	printf("������������");
	scanf("%d", &n);
	table(n);
	system("pause");
	return 0;
}