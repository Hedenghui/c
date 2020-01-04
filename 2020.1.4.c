#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k, t;
	printf("输入三个数：");
	scanf("%d%d%d", &i, &j, &k);
	if (i<j){
		t = i;
		i = j;
		j = t;
	}
	if (i < k){
		t = i;
		i = k;
		k = t;
	}
	if (j < k){
		t = j;
		j = k;
		k = t;
	}

	printf("%d %d %d", i, j, k);
	system("pause");
	return 0;
}