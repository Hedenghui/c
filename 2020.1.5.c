#include<stdio.h>
#include<stdlib.h>//函数递归就是调用自己
#include<string.h>
//int Factor(int n){
//int ret = 1;
//for (int i = 1; i <= n; i++){
//ret *= 1;
//}
//return ret;
//}
int Factor(int n){
	if (n == 1){
		return 1;
	}
	return n*Factor(n - 1);
}
int main(){
	printf("%d\n", Factor(5));
	system("pause");
	return 0;
}