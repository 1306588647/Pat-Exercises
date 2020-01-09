#include <stdio.h>  
int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	int num[10];
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i != j)
			{
				sum += num[i] * 10 + num[j];
			}
		}
	}
	printf("%d", sum);
}