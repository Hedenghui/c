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
		printf("ͨѶ¼����!, ���ʧ��\n");
		return;
	}
	printf("������������\n");
	scanf("%s", curInfo.name);
	printf("�������Ա�\n");
	scanf("%s", curInfo.gender);
	printf("���������䣺\n");
	scanf("%d", &curInfo.age);
	printf("������绰���룺\n");
	scanf("%s", curInfo.tele);
	printf("�������ַ��\n");
	scanf("%s", curInfo.addr);
	pc->data[pc->size] = curInfo;
	pc->size++;
}
void DelContact(pContact pc)
{
	char name[NAME_MAX];
	printf("�����뱻ɾ���˵�������\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲�����, ɾ��ʧ��!\n");
		return;
	}
	for (int i = pos; i < pc->size - 1; ++i)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ�\n");
}
void SearchContact(pContact pc)
{
	char name[NAME_MAX];
	printf("������Ҫ���ҵ���: \n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲�����, ɾ��ʧ��!\n");
		return;
	}

	printf("=======================\n");
	printf("������%s\n", pc->data[pos].name);
	printf("�Ա�%s\n", pc->data[pos].gender);
	printf("���䣺%d\n", pc->data[pos].age);
	printf("�绰��%s\n", pc->data[pos].tele);
	printf("��ַ��%s\n", pc->data[pos].addr);
	printf("=======================\n");
}
void ModifyContact(pContact pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ��˵�������\n");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("���˲�����, �޸�ʧ��!\n");
		return;
	}

	printf("������������\n");
	scanf("%s", pc->data[pos].name);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pos].gender);
	printf("���������䣺\n");
	scanf("%d", &pc->data[pos].age);
	printf("������绰���룺\n");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ��\n");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");

}
void SortContact(pContact pc)
{
	//��������������
	//��һ��ѭ���� �������Ԫ�ظ���
	for (int sz = pc->size; sz > 0; --sz)
	{
		//�ڶ���ѭ�����ҵ���ǰ�����е����ֵ������ڵ�ǰ��������һ��λ��
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
		printf("=============��%d����===============\n", i);
		printf("������%s\n", pc->data[i].name);
		printf("�Ա�%s\n", pc->data[i].gender);
		printf("���䣺%d\n", pc->data[i].age);
		printf("�绰��%s\n", pc->data[i].tele);
		printf("��ַ��%s\n", pc->data[i].addr);
		printf("===================================\n");
	}
}