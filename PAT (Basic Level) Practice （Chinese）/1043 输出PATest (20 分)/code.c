#include <stdio.h>  
int main(void)
{
	char ch[10001];
	gets(ch);
	int i, count = 0;
	int num[6] = { 0 };
	for (i = 0; ch[i] != '\0'; i++)
	{
		switch (ch[i])
		{
		case 'P':num[0]++; count++; break;
		case 'A':num[1]++; count++; break;
		case 'T':num[2]++; count++; break;
		case 'e':num[3]++; count++; break;
		case 's':num[4]++; count++; break;
		case 't':num[5]++; count++; break;
		}
	}
	for (i = 0; i < count; i++)
	{
		if (num[0]) { putchar('P'); num[0]--; }
		if (num[1]) { putchar('A'); num[1]--; }
		if (num[2]) { putchar('T'); num[2]--; }
		if (num[3]) { putchar('e'); num[3]--; }
		if (num[4]) { putchar('s'); num[4]--; }
		if (num[5]) { putchar('t'); num[5]--; }
	}
}


//
//解题思路：
//（1）首先用一个字符数组接受输入的字符串，然后分别统计特定字符个数；
//（2）然后利用一个数组记录特定字符个数然后依次输出即可；




//** 提示：
//代码中的**



//if (num[0])
//{
//	putchar('P');
//	num[0]--;
//}
//和
//if (num[0]--)
//{
//	putchar('P');
//}
//是不同的，不同之处如附件一所示