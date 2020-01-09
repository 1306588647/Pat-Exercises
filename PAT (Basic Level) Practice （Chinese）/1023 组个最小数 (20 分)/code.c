#include<stdio.h>
int main()
{
	int num[10] = { 0 };
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 1; i < 10; i++)
	{
		if (num[i])
		{
			printf("%d", i);
			num[i]--;
			break;
		}
	}
	for (i = 0; i < 10; i++)
	{
		while (num[i]--)
		{
			printf("%d", i);
		}
	}
}


//解题思路：
//（1）类似于桶排序的存储方式存储数据，将所有的数据都保存；
//（2）i从1 - 9遍历输出最小的第一位数，然后下标里面的值减一
//（3）然后i从0 - 9输出即可，没次输出一个下标对应的值就减一