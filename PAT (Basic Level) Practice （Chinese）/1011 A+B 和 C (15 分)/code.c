#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    double num[11][3] = { 0.0 };
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%lf", &num[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (num[i][0] + num[i][1] > num[i][2])
        {
            printf("Case #%d: true\n", i + 1);
        }
        else
        {
            printf("Case #%d: false\n", i + 1);
        }
    }
}