//����һ����������Сд��ĸ�Ϳո� ' ' ���ַ��� s�����������һ�����ʵĳ��ȡ�
//
//����ַ����������ҹ�����ʾ����ô���һ�����ʾ��������ֵĵ��ʡ�
//
//������������һ�����ʣ��뷵�� 0 ��
//
//˵����һ��������ָ������ĸ��ɡ��������κοո�� ������ַ�����

#include<stdio.h>
#include<stdlib.h>

int lengthOfLastWord(char * s){
	if (!s || s == "")
		return 0;
	int len = strlen(s);
	int i, j;
	for (i = len - 1; i >= 0 && s[i] == ' '; i--);
	for (j = i; j >= 0 && s[j] != ' '; j--);
	return i - j;
}
int main()
{
	system("pause");
	return 0;
}
