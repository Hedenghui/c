#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "Contact.h"

void InitContact(pContact pc)
{
	pc->size = 0;
	pc->data = (info*)malloc(sizeof(info)* DEFAULT);
	pc->capacity = DEFAULT;
}

int CheckCapacity(pContact pc)
{
	if (pc->size == pc->capacity)
	{
		//pc->data = (info*)realloc(pc->data, sizeof(info) * (pc->capacity + 10));
		info* tmp = (info*)malloc(sizeof(info)* (pc->capacity + 10));
		if (tmp == NULL)
			return 0;
		memcpy(tmp, pc->data, sizeof(info)* pc->size);
		free(pc->data);
		pc->data = tmp;
		pc->capacity += 10;
	}
	return 1;
}

void AddContact(pContact pc)
{
	info curInfo;
	if (CheckCapacity(pc) == 0)
	{
		printf("通讯录已满!, 添加失败\n");
		return;
	}
	printf("请输入姓名：\n");
	scanf("%s", curInfo.name);
	printf("请输入性别：\n");
	scanf("%s", curInfo.gender);
	printf("请输入年龄：\n");
	scanf("%d", &curInfo.age);
	printf("请输入电话号码：\n");
	scanf("%s", curInfo.tele);
	printf("请输入地址：\n");
	scanf("%s", curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)
{
	char name[NAME_MAX];
	printf("请输入被删除人的姓名：\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在, 删除失败!\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; ++i)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("删除成功\n");
}
void SearchContact(pContact pc)
{
	char name[NAME_MAX];
	printf("请输入要查找的人: \n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在, 删除失败!\n");
		return;
	}

	printf("=======================\n");
	printf("姓名：%s\n", pc->data[pos].name);
	printf("性别：%s\n", pc->data[pos].gender);
	printf("年龄：%d\n", pc->data[pos].age);
	printf("电话：%s\n", pc->data[pos].tele);
	printf("地址：%s\n", pc->data[pos].addr);
	printf("=======================\n");
}
void ModifyContact(pContact pc)
{
	char name[NAME_MAX];
	printf("请输入要修改的人的姓名：\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("此人不存在, 修改失败!\n");
		return;
	}

	printf("请输入姓名：\n");
	scanf("%s", pc->data[pos].name);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pos].gender);
	printf("请输入年龄：\n");
	scanf("%d", &pc->data[pos].age);
	printf("请输入电话号码：\n");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");

}
void SortContact(pContact pc)
{
	//按姓名升序排序
	//第一层循环： 待排序的元素个数
	for (int sz = pc->size; sz > 0; --sz)
	{
		//第二层循环：找到当前区间中的最大值，存放在当前区间的最后一个位置
		for (int i = 1; i < sz; ++i)
		{
			// data[i], data[i - 1]
			if (strcmp(pc->data[i - 1].name, pc->data[i].name) > 0)
			{
				info tmp = pc->data[i - 1];
				pc->data[i - 1] = pc->data[i];
				pc->data[i] = tmp;
			}
		}
	}
}

int FindContact(pContact pc, char* name)
{
	for (int i = 0; i < pc->size; ++i)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
void ShowContact(pContact pc)
{
	for (int i = 0; i < pc->size; ++i)
	{
		printf("=============第%d个人===============\n", i);
		printf("姓名：%s\n", pc->data[i].name);
		printf("性别：%s\n", pc->data[i].gender);
		printf("年龄：%d\n", pc->data[i].age);
		printf("电话：%s\n", pc->data[i].tele);
		printf("地址：%s\n", pc->data[i].addr);
		printf("===================================\n");
	}
}