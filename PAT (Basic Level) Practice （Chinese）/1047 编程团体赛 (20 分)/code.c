#include <stdio.h>  
int main()
{
	int n;
	scanf("%d", &n);
	int num[10001] = { 0 };
	int i;
	int max = 0;
	int location;
	for (i = 0; i < n; i++)
	{
		int team;
		scanf("%d", &team);
		int score;
		scanf("%*c%*d %d", &score);
		num[team] += score;
		if (num[team] > max)
		{
			max = num[team];
			location = team;
		}
	}
	printf("%d %d", location, max);
}


//����˼·��
//��1������Ҫ��һ��˼����ǽ���һ�����飬�����±�����Ŷӵı�ţ������е�ֵ�洢�±��Ŷӵķ�����Ȼ������¼���Ŷӷ����������αȽϴ�С���ɣ�
//��2������������%* c��%* d���﷨����˼�����뵫�ǲ���ֵ���κα�����