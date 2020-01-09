#include <stdio.h>  
#include <math.h>  

int main(void)
{
	int N;
	char c;
	scanf("%d %c", &N, &c);
	int i = 1, j;
	int n = sqrt((double)(N + 1) / 2);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		for (j = 2 * (n - i) + 1; j >= 1; j--)
			printf("%c", c);
		putchar('\n');
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i - 1; j++)
			printf(" ");
		for (j = 1; j <= 2 * i + 1; j++)
			printf("%c", c);
		putchar('\n');
	}
	printf("%d", N - (2 * n * n - 1));
}


//解题思路：
//（1）该题对于数学能力要求较高，必须要找出规律；
//（2）第一步要找出全部符号的个数与金字塔层数的关系，即层数 = （所有符号个数 + 1） / 2得出的值再开根号，就是层数了；
//（3）然后再按格式输出就可以了；
//（4）最后还要找出层数与组成沙漏的关系，用总数减去沙漏总数； 
