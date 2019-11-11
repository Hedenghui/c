#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k, p, u, z;//153
	for (i = 100; i < 1000; i++){
		j = i / 100;
		k = i / 10; p = k % 10;
		u = i % 100; z = u % 10;
		if (i == j*j*j + p*p*p + z*z*z){
			printf("%d=%d^3+%d^3+%d^3\n", i, j, p, z);
		}
	}
	system("pause");
	return 0;
}