//本题要求编写程序，计算学生们的平均成绩，并统计不及格（成绩低于60分）的人数。题目保证输入与输出均在双精度范围内。
//输入格式 :
//输入在第一行中给出非负整数n，即学生人数。第二行给出n个非负实数，即这n位学生的成绩，其间以空格分隔。
//输出格式 :
//average = 成绩均值
//count = 不及格人数
//其中平均值精确到小数点后两位，等号的左右各有一个空格。
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