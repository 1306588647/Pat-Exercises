#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int num;
	int i;
	int A1_sum = 0;
	int A2_sum = 0, signal = 1, flag = 0;
	int A3_count = 0;
	float A4_sum = 0; int A4_count = 0;
	int A5_max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0 && num % 5 == 0)
		{
			A1_sum += num;
		}
		if (num % 5 == 1)
		{
			A2_sum += num * signal;
			signal = -signal;
			flag = 1;
		}
		if (num % 5 == 2)
		{
			A3_count++;
		}
		if (num % 5 == 3)
		{
			A4_sum += num;
			A4_count++;
		}
		if (num % 5 == 4)
		{
			if (num > A5_max)
			{
				A5_max = num;
			}
		}

	}
	if (A1_sum)printf("%d ", A1_sum);
	else printf("N ");
	if (flag)printf("%d ", A2_sum);
	else printf("N ");
	if (A3_count)printf("%d ", A3_count);
	else printf("N ");
	if (A4_count)printf("%.1f ", (float)A4_sum / A4_count);
	else printf("N ");
	if (A5_max)printf("%d\n", A5_max);
	else printf("N\n");

}




//ע�⣺
//��1�������ж��������Ƚϼ򵥣�ֻ�еڶ����ж������Ƚ��ѣ���һ�εĴ�����ֱ�Ӱ� A2_sum �Ƿ�Ϊ0�����ж�������
//�����Ϊ0������A2_sum�����Ϊ0�����N������ֻ��19�֣���ϸ�����룬��һA2_sumͨ�����㱾������0����ôҲ�����N��
//�Ҿ��뵽����һ��flag��������������������ֱ����flag = 1�������flag���жϣ��ͽ�������⡣ 