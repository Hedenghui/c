#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu(){
	printf("==============\n");
	printf("1,��ʼ��Ϸ\n");
	printf("0,������Ϸ\n");
	printf("==============\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int to_guess = rand() % 100 + 1;//toGuess
	while (1){
		printf("������Ҫ�µ����֣�1-100��:");
		int num = 0;
		scanf("%d", &num);
		if (num < to_guess){
			printf("���ˣ�\n");
		}
		else if (num>to_guess){
			printf("���ˣ�\n");
		}
		else{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main(){
	//�������������
	int t = time(0);
	printf("t=%d\n", t);
	srand(t);
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("����������������������!\n");
		}
	}
	system("pause");
	return 0;
}