#include<stdio.h>
#include<stdlib.h>
//��������˳�� ���Դ����ң�Ҳ���Դ��ҵ��󣬸�����ƽ̨�й�
void f(int x, int y)
{
	printf("%d %d\n", x, y);//2 1(vs2013��������˳���������)����1 2
}
int main()
{
	int i = 1;
	f(i++, i++);//�ȴ�y�ٴ�x;
	system("pause");
	return 0;
}