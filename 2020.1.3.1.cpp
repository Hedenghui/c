#include<stdio.h>
#include<stdlib.h>//�����ݹ���ǵ����Լ�
#include<string.h>
//int strlen(char* str){
//int len = 0;
//while (str[len] != '\0'){
//len++;
//}
//return len;
//}
int strlen(char str[]){
	if (str[0] == '\0'){//���ַ������Ⱦ���0��
		return 0;
	}
	return 1 + strlen(str + 1);
}
int main(){
	char str[100] = "abcd";
	int len = strlen(str);
	printf("len=%d\n", len);
	system("pause");
	return 0;
}