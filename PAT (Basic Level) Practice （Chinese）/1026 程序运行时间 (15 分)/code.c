#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int time;
	time = n - m;
	time = (int)(time / 100.0 + 0.5);
	int h;
	int min;
	int sec;
	sec = time % 60;
	min = (time / 60) % 60;;
	h = time / 3600;
	if (h >= 10)printf("%d:", h);
	else printf("0%d:", h);
	if (min >= 10)printf("%d:", min);
	else printf("0%d:", min);
	if (sec >= 10)printf("%d", sec);
	else printf("0%d", sec);
}


//����˼·��
//��1��������������ֵ��Ȼ�����ֵ��
//��2�����ʱ����ĿҪ�����100������Ҫ���������룬�����Ҫ��Ҫ��time / 100.0���ܵó�time����100��Ĵ�С���Ĳ�ֵ��Ȼ�����0.5����ǿ��ת��Ϊint�;͵õ������Ĳ�ֵ
//��3��Ȼ����Сʱ�����ӣ��������ȿ����ˣ�
//Сʱ = ��ֵ / 3600��
//���� = ����ֵ / 60�� % 60��
//�� = ��ֵ % 60��
//��4����������ȷ�������ʽ�Ϳ�����