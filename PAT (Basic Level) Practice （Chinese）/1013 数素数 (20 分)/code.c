#include <stdio.h>
#include <math.h>
int issu(int n)
{
	int k = sqrt(n);
	for (int i = 2; i <= k; i++)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}

int main()
{
	int m, n, i;
	scanf("%d %d", &m, &n);
	int count = 0;
	int countline = 0;
	for (i = 2; ; i++)
	{
		if (issu(i))
		{
			count++;
		}
		if (count >= m && count < n && issu(i))
		{
			countline++;
			if (countline % 10 == 0)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
		if (count == n && issu(i))
		{
			printf("%d\n", i);
			return 0;
		}
	}

}

//����˼·��
//��1������Ҫ���дѰ�������ĺ���������ƽ����
//��2����ε��ѵ����ÿ���10����Ҫ���л��У�����˼·�������ʾ
