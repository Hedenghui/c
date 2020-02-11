#include<stdio.h>
#include<stdlib.h>
char * addBinary(char * a, char * b){
	int length, length1 = strlen(a), length2 = strlen(b), sum = 0, i = length1 - 1, j = length2 - 1, k, num;
	if (length1>length2)
		length = length1 + 1;
	else
		length = length2 + 1;
	char *c = (char *)malloc(sizeof(char)*(length + 1));
	c[0] = '0'; c[length] = '\0';
	k = length - 1;
	while (i>-1 || j>-1 || sum)
	{
		num = (i>-1 ? a[i] - '0' : 0) + (j>-1 ? b[j] - '0' : 0) + sum;
		sum = 0;
		if (num>1)
		{
			sum = 1;
			num -= 2;
		}
		c[k--] = num + '0';
		j--; i--;
	}
	if (c[0] == '0')
	{
		for (i = 0; i<length - 1; i++)
			c[i] = c[i + 1];
		c[length - 1] = '\0';
	}
	return c;
}
int main()
{
	system("pause");
	return 0;
}
// 11     1
// 2      1     3
// 1      0     2
// num=a[1]+b[0]+sum;=2
// num=0;sum=1
// c[2]=0
// 0    -1    
// num=a[0]+0+1=2
// sum=1;num=0;
// c[1]=0;