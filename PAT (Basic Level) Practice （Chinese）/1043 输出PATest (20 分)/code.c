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
//����˼·��
//��1��������һ���ַ��������������ַ�����Ȼ��ֱ�ͳ���ض��ַ�������
//��2��Ȼ������һ�������¼�ض��ַ�����Ȼ������������ɣ�




//** ��ʾ��
//�����е�**



//if (num[0])
//{
//	putchar('P');
//	num[0]--;
//}
//��
//if (num[0]--)
//{
//	putchar('P');
//}
//�ǲ�ͬ�ģ���֮ͬ���總��һ��ʾ