//����Ҫ���д���򣬼���ѧ���ǵ�ƽ���ɼ�����ͳ�Ʋ����񣨳ɼ�����60�֣�����������Ŀ��֤�������������˫���ȷ�Χ�ڡ�
//�����ʽ :
//�����ڵ�һ���и����Ǹ�����n����ѧ���������ڶ��и���n���Ǹ�ʵ��������nλѧ���ĳɼ�������Կո�ָ���
//�����ʽ :
//average = �ɼ���ֵ
//count = ����������
//����ƽ��ֵ��ȷ��С�������λ���Ⱥŵ����Ҹ���һ���ո�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
	int N, i, grade, cnt = 0;
	int sum = 0;
	double average = 0;
	scanf("%d", &N);
	if (N == 0) {
		average = 0;
		cnt = 0;
	}
	else {
		for (i = 1; i <= N; i++){
			scanf("%d", &grade);
			if (grade < 60) {
				cnt++;
			}
			sum = sum + grade;
		}
		average = 1.0*sum / N;
	}
	printf("average = %.2f\n", average);
	printf("count = %d", cnt);
	system("pause");
	return 0;
}