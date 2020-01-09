#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int g = n%10;
    int s = (n/10)%10;
    int b = (n/100);
    for(int i=1;i<=b;i++)
    {
        printf("B");
    }
    for(int i=1;i<=s;i++)
    {
        printf("S");
    }
    for(int i=1;i<=g;i++)
    {
        printf("%d",i);
    }

}


/*
解题思路：  
  （1）该题的难点在于将给出的整数分离百位、十位、以及个位，主要用到个方法就是求余数和除数，
然后后面输出就比较简单了


*/