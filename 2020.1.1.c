#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int max = 0;
	int arr[10] = { 0 };
	printf("ÇëÊäÈë10¸öÊı");

	for (i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i]>max){
			max = arr[i];
		}
		else{
			max = arr[0];
		}
	}
	printf("max=%d", max);
	system("pause");
	return 0;
}