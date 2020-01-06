#include<stdio.h>
#include<stdlib.h>
int Search(int arr[], int size, int to_find){
	for (int i = 0; i < size; i++){
		if (arr[i] == to_find){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[4] = { 9, 5, 2, 7 };
	int result = Search(arr, 4, 2);
	printf("result=%d\n", result);
	system("pause");
	return 0;
}