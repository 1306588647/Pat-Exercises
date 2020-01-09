#include <stdio.h>  
int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	int wine[4] = { 0 };
	int x = 0, y = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &wine[j]);
		}
		if (wine[1] == wine[0] + wine[2] && wine[3] != wine[0] + wine[2])
		{
			x++;
		}
		if (wine[3] == wine[0] + wine[2] && wine[1] != wine[0] + wine[2])
		{
			y++;
		}
	}
	printf("%d %d", y, x);


}