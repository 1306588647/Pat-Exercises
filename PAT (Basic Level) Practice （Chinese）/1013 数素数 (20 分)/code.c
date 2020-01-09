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

//解题思路：
//（1）首先要会编写寻找素数的函数，即开平方法
//（2）其次的难点就是每输出10个后要进行换行，代码思路如代码所示
