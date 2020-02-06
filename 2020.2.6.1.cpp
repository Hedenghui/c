//你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，按键可能会被长按，而字符可能被输入 1 次或多次。
//
//你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），那么就返回 True。
//

#include<stdio.h>
#include<stdlib.h>
bool isLongPressedName(char * name, char * typed){
	int name_index = 0, typed_index = 0;
	while (name[name_index] != 0)
	{
		if (name[name_index + 1] != name[name_index])
		{
			if (typed[typed_index] != name[name_index])
			{
				return 0;
			}
			while (typed[typed_index + 1] == name[name_index])
			{
				typed_index++;
			}
		}
		// else if(typed[typed_index]!=name[name_index]) 
		// {
		//     return 0;
		// }
		typed_index++;
		name_index++;
	}
	return 1;
}
int main()
{
	system("pause");
	return 0;
}
