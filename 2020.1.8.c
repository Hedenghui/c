#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int arr[], int size, int toFind){
	int left = 0;
	int right = size - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){
			right = mid - 1;
		}
		else if (toFind>arr[mid]){
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}return -1;
}


int main(){
	int arr[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int result = BinarySearch(arr, sizeof(arr) / sizeof(arr[0]), 6);
	printf("%d\n", result);
	system("pause");
	return 0;
}