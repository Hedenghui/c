#include<stdio.h>
#include<stdlib.h>
int evalRPN(char ** tokens, int tokensSize){

	int i;
	int res;
	int top = -1;
	int *stack = (int *)malloc(sizeof(int)* tokensSize);
	if (!stack)
		return 0;//exit(EXIT_FAILURE)

	for (i = 0; i<tokensSize; i++)
	{
		if (tokens[i][0] == '0') // 0�ַ���Ҫ���⿼�ǡ�
			stack[++top] = 0;
		if (res = atoi(tokens[i])) //�����ǰ�ַ���������
			stack[++top] = res;
		else                      // �����ǰ�ַ����ǲ�����
			switch (tokens[i][0])
		{
			case '+': res = stack[top--]; res = stack[top] + res; stack[top] = res; break;
			case '-': res = stack[top--]; res = stack[top] - res; stack[top] = res; break;
			case '*': res = stack[top--]; res = stack[top] * res; stack[top] = res; break;
			case '/': res = stack[top--]; res = stack[top] / res; stack[top] = res; break;
		}
	}

	return stack[top];
}
int main()
{
	system("pause");
	return 0;
}
