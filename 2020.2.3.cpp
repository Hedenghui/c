#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool canConstruct(char * ransomNote, char * magazine){
	int i, l1 = strlen(ransomNote), l2 = strlen(magazine);
	int p[26];
	memset(p, 0, sizeof(int)* 26);
	for (int i = 0; i<l2; i++)
	{
		p[magazine[i] - 'a']++;
	}
	for (int i = 0; i<l1; i++)
	{
		if (p[ransomNote[i] - 'a'] == 0)
		{
			return false;
		}
		else
		{
			p[ransomNote[i] - 'a']--;
		}
	}
	return true;
}
int main()
{
	system("pause");
	return 0;
}