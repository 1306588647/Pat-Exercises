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
//解题思路：
//（1）该题最难点在于四舍五入，方法就是将被四舍五入的数转换为浮点数，然后再加上0.5，然后再强行转换为整型舍去小数部分。