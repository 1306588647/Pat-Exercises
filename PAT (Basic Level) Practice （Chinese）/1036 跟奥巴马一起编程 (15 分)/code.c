#include <stdio.h>  
int main(void)
{
	int n, m;
	char ch;
	scanf("%d %c", &n, &ch);
	int i, j;
	for (i = 0; i < n; i++)
	{
		putchar(ch);
	}
	putchar('\n');
	m = (int)((float)n / 2 + 0.5);
	for (i = 0; i < m - 2; i++)
	{
		putchar(ch);
		for (j = 0; j < n - 2; j++)
		{
			putchar(' ');
		}
		putchar(ch);
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		putchar(ch);
	}

}

//
//����˼·��
//��1���������ѵ������������룬�������ǽ��������������ת��Ϊ��������Ȼ���ټ���0.5��Ȼ����ǿ��ת��Ϊ������ȥС�����֡�