#include <stdio.h>  
int Sum(int n)
{
	int num[4];
	int i = 0;
	while (n)
	{
		num[i] = n % 10;
		n = n / 10;
		i++;
	}
	int j;
	int sum = 0;
	for (j = 0; j < i; j++)
	{
		sum = sum + num[j];
	}
	return sum;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	int sum[37] = { 0 };
	int i, count = 0, count2 = 0;
	int num;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		sum[Sum(num)]++;
	}
	for (i = 0; i < 37; i++)
	{
		if (sum[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
	for (i = 0; i < 37; i++)
	{
		if (sum[i])
		{
			count2++;
			if (count2 <= count - 1)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
}


//����˼·��
//��1������Ҫ��дһ���������λ�ĺ�����
//��2����ÿһ�������������λ��ʹ洢������Ͱ����������У�
//��3��Ȼ�󰴸�ʽ������ɣ�