#include <stdio.h>  
#include <math.h>
typedef struct
{
	int a;
	int b;
	int c;
}money;

int main(void)
{
	money P;
	money A;
	scanf("%d.%d.%d %d.%d.%d", &P.a, &P.b, &P.c, &A.a, &A.b, &A.c);
	int psum;
	int asum;
	int exchange;
	psum = P.a * 17 * 29 + P.b * 29 + P.c;
	asum = A.a * 17 * 29 + A.b * 29 + A.c;
	exchange = fabs(asum - psum);
	int a, b, c;
	c = exchange % 29;
	exchange = exchange / 29;
	b = exchange % 17;
	a = exchange / 17;
	if (psum > asum)
	{
		printf("-");
	}
	printf("%d.%d.%d", a, b, c);
}


//����˼·��
//��1��������һ���ṹ�彫Ӧ��֧���Ľ���֧���Ľ�����뵽�����У�
//��2��Ȼ����������ת������С��λ�ĺͣ�Ȼ��������ľ���ֵ��
//��3����������ֵ��
//��4��ֵ��ע�����������if�жϾ��ǣ����ǡݣ�