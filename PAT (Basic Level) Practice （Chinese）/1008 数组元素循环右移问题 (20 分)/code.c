#include<stdio.h>
int main()
{
    int num[101];
    int m, n, i, temp, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (j = 1; j <= m; j++)
    {
        temp = num[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            num[i] = num[i - 1];
        }
        num[0] = temp;
    }
    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d", num[i]);
        }
        else
        {
            printf("%d ", num[i]);
        }
    }
}



//����˼·��
//��1�����Ƚ����е����ִ浽�����С�
//��2�������������ƶ�����ô���һ�����ֱ�Ȼ�ᱻ���ǣ���ˣ�����һ���������洢���һ�����֣��ȵ��ƶ�����ٽ�����Ǹ����ֵ�ֵ��ֵ����һ�����֣�������ˡ�