//ʹ��#define�����ʱ����������
#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b)  ((a)>(b)?(a):(b))//ע��
int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);//((x++)>(y++)?(x++):(y++))
	printf("x=%d y=%d z=%d\n", x, y, z);//x=6,y=10,z=9
	system("pause");
	return 0;
}
