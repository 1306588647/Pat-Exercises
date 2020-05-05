
/*


高斯日记
    大数学家高斯有个好习惯：无论如何都要记日记。

    他的日记有个与众不同的地方，他从不注明年月日，而是用一个整数代替，比如：4210

  后来人们知道，那个整数就是日期，它表示那一天是高斯出生后的第几天。这或许也是个好习惯，
  它时时刻刻提醒着主人：日子又过去一天，还有多少时光可以用于浪费呢？

    高斯出生于：1777年4月30日。
    
    在高斯发现的一个重要定理的日记上标注着：5343，因此可算出那天是：1791年12月15日。

    高斯获得博士学位的那天日记上标着：8113   

    请你算出高斯获得博士学位的年月日。

提交答案的格式是：yyyy-mm-dd, 例如：1980-03-21

*/

#include <stdio.h>

int isrun(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)return 1;
    return 0;
}
int main()
{
    int ping[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int run[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int n;
    scanf("%d", &n);
    int year = 1777, month = 4, day = 30;
    for (int i = 1; i < n; i++)
    {
        day++;
        if (isrun(year) && day > run[month])
        {
            day = 1;
            month++;
        }
        else if (!isrun(year) && day > ping[month])
        {
            day = 1;
            month++;
        }
        if (month > 12)
        {
            year++;
            month = 1;
        }
    }
    if (month < 10)
    {
        if (day < 10)
        {
            printf("%d-0%d-0%d", year, month, day);
        }
        else
        {
            printf("%d-0%d-%d", year, month, day);
        }
    }
    else
    {
        if (day < 10)
        {
            printf("%d-%d-0%d", year, month, day);
        }
        else
        {
            printf("%d-%d-%d", year, month, day);
        }
    }

}
