#include<stdio.h>
#include<stdlib.h>
//���num����������1�����򷵻�0��
int IsPrime(int num){
	if (num == 0 || num == 1){
		return 0;
	}
	for (int i = 2; i < num; i++){
		if (num % i == 0){
			return 0;
		}
	}return 1;
}

int main(){
	printf("%d\n", IsPrime(11));
	system("pause");
	return 0;
}