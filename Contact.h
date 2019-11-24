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

//静态存储
//typedef struct Contact{
//	info data[MAX];
//	int size;
//}Contact, *pContact;

//动态存储
typedef struct Contact{
	info* data;
	int size;
	int capacity;  //当前空间的大小
}Contact, *pContact;

void InitContact(pContact pc);//初始化
int CheckCapacity(pContact pc);//检查容量大小
void AddContact(pContact pc);
void DelContact(pContact pc);
void SearchContact(pContact pc);
int FindContact(pContact, char* name);//通过一个名字来查找
void ModifyContact(pContact pc);//修改一个人的信息
void SortContact(pContact pc);//排序
void ShowContact(pContact pc);//查看
void LoadContact(pContact pc);
void SaveContact(pContact pc);