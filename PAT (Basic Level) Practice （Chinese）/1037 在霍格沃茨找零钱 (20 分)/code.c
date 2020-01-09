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


//解题思路：
//（1）首先用一个结构体将应当支付的金额和支付的金额输入到变量中；
//（2）然后计算出两者转换成最小单位的和，然后计算出差的绝对值；
//（3）最后求出差值；
//（4）值得注意的是最后输出if判断句是＞还是≥；