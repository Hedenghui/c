#include<stdio.h>
#include<stdlib.h>
//int count = 0;
//int Fib(int n){//斐波那契数列代码计算的慢，是因为运算量大，重复进行
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	if (n == 3){
//		count++;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	int last2 = 1;
	int last1 = 1;
	int cur = 0;
	for (int i = 3; i <= n; i++){
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}
int main(){
	printf("%d\n", Fib(5));
	system("pause");
	return 0;
}