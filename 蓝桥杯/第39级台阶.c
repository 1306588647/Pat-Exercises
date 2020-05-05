
/*
题目描述：

    小明刚刚看完电影《第39级台阶》，离开电影院的时候，他数了数礼堂前的台阶数，恰好是39级!

    站在台阶前，他突然又想着一个问题：

    如果我每一步只能迈上1个或2个台阶。先迈左脚，然后左右交替，最后一步是迈右脚，也就是说一共要走偶数步。
    那么，上完39级台阶，有多少种不同的上法呢？


*/

#include <stdio.h>
int num=0;

void function(int stair,int step)
{
    //stari用于表示剩余的楼梯的层数，当等于0时停止递归
    //step是走过的步数，用来判断是否是偶数，是否符合要求
    if (stair < 0)
    {
        return;
    }
    if (stair == 0)//当stair为0时，表示楼梯走完
    {
        if (step % 2 == 0)//楼梯走完如果走的是偶数步
        {
            num++;
            return;
        }
    }
    function(stair - 1, step + 1);//走一个台阶
    function(stair - 2, step + 1);//走两个台阶
}
int main()
{
    function(39, 0);
    printf("%d", num);
}
