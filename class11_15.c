#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main(){
	char  str1[] = "welcome to bit!";
	char  str2[] = "###############";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right){
		str2[left] = str1[left];
		str2[right] = str1[right];
		//清屏步骤
		system("cls");
		printf("%s\n", str2);
		Sleep(1000);//1秒等于1000毫秒
		left++;
		right--;
	}
	system("pause");
	return 0;
}