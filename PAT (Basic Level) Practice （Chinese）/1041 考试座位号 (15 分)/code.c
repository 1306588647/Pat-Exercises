#include <stdio.h>  
typedef struct
{
	long long id;
	int seattest;
	int seat;
}stu;

int main(void)
{
	int n;
	scanf("%d", &n);
	stu st[1001];
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%lld %d %d", &st[i].id, &st[i].seattest, &st[i].seat);
	}
	int m;
	scanf("%d", &m);
	int M;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &M);
		for (j = 0; j < n; j++)
		{
			if (M == st[j].seattest)
			{
				printf("%lld %d\n", st[j].id, st[j].seat);
			}
		}
	}
}


//����˼·��
//��1�����Ƚ����ṹ��洢���ݣ�
//��2��Ȼ������Աȵ����ݣ���������
//
//��ʾ��
//�����һ��forѭ��ֻ����һ��M�������洢����Ĳ��Ե��Ժ��룬������Ŀ���ܻ����������룬��ô��������δ洢�ģ�
//ԭ����scanf�����ո�û�н�����ִ��printf��䣬������������س��ͻ�ִ��printf��䣬�ͻ�������һ�����һ����
//�����ÿո�ֻ�ǰ����ݴ洢����������´ζ�ȡ��ʱ��ֱ�Ӵӻ������ж�ȡ��