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


//解题思路：
//（1）首先建立结构体存储数据；
//（2）然后输入对比的数据，最后输出；
//
//提示：
//该题第一层for循环只用了一个M变量来存储输入的测试电脑号码，但是题目可能会输入多个号码，那么数据是如何存储的？
//原因是scanf遇到空格并没有结束不执行printf语句，但是如果遇到回车就会执行printf语句，就会变成输入一个输出一个，
//但是用空格只是把数据存储到缓存区里，下次读取的时候直接从缓存区中读取。