#include <stdio.h>
//输出函数
void Print(int num)
{
	switch (num)
	{
	case 0:printf("ling"); break;
	case 1:printf("yi"); break;
	case 2:printf("er"); break;
	case 3:printf("san"); break;
	case 4:printf("si"); break;
	case 5:printf("wu"); break;
	case 6:printf("liu"); break;
	case 7:printf("qi"); break;
	case 8:printf("ba"); break;
	case 9:printf("jiu"); break;
	}
}

int main()
{
	char a[101];		//定义一个字符数组接受用户输入的值
	int b[100];			//将用户输入的数字求和然后分解成个位十位百位...存入数组中
	int i, sum = 0;
	int j = 0;
	gets(a);
	for (i = 0; a[i] != '\0'; i++)				//求和
	{
		sum = sum + a[i] - 48;
	}
	if (sum == 0)							//如果输入的为0，直接输入ling
	{
		Print(0);
		return 0;
	}
	while (sum != 0)					//将用户输入的数字求和然后分解成个位十位百位...存入数组中
	{
		b[j] = sum % 10;
		sum = sum / 10;
		j++;
	}
	for (i = j - 1; i > 0; i--)			//分别输入
	{
			Print(b[i]);
			printf(" ");
	}
	Print(b[i]);
	return 0;

}
/*该题最主要的困难就是将输入的数字求和，我采用的方法就是先将用户输入的每一个数字变成字符，然后再转化为数字求和*/