#include<stdio.h>
#include<stdlib.h>
//函数传参顺序 可以从左到右，也可以从右到左，跟编译平台有关
void f(int x, int y)
{
	printf("%d %d\n", x, y);//2 1(vs2013函数传参顺序从左往右)或者1 2
}
int main()
{
	int i = 1;
	f(i++, i++);//先传y再传x;
	system("pause");
	return 0;
}