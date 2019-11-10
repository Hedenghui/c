#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu(){
	printf("==============\n");
	printf("1,开始游戏\n");
	printf("0,结束游戏\n");
	printf("==============\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game(){
	int to_guess = rand() % 100 + 1;//toGuess
	while (1){
		printf("请输入要猜的数字（1-100）:");
		int num = 0;
		scanf("%d", &num);
		if (num < to_guess){
			printf("低了！\n");
		}
		else if (num>to_guess){
			printf("高了！\n");
		}
		else{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main(){
	//先设置随机种子
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
			printf("您的输入有误！请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}