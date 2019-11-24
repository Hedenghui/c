#pragma  once
#define NAME_MAX  100
#define GENDER_MAX 10
#define TELE_MAX 12
#define ADDR_MAX 100
#define MAX 200
#define DEFAULT 1
typedef struct info
{
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
} info;

//��̬�洢
//typedef struct Contact{
//	info data[MAX];
//	int size;
//}Contact, *pContact;

//��̬�洢
typedef struct Contact{
	info* data;
	int size;
	int capacity;  //��ǰ�ռ�Ĵ�С
}Contact, *pContact;

void InitContact(pContact pc);//��ʼ��
int CheckCapacity(pContact pc);//���������С
void AddContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
int FindContact(pContact, char* name);//ͨ��һ������������
void ModifyContact(pContact pc);//�޸�һ���˵���Ϣ
void SortContact(pContact pc);//����
void ShowContact(pContact pc);//�鿴
void LoadContact(pContact pc);
void SaveContact(pContact pc);