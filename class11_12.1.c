//[0,bound)已排序区间
//[bound,size)待排序区间
void Swap(int*x, int*y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void BubbleSort(int arr[], int size){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size-1; cur>bound; cur--){
			if (arr[cur - 1] > arr[cur]){
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main(){
	int arr[] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++){
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}