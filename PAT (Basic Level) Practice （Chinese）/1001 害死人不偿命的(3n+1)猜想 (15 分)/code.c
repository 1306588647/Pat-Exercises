#include<stdio.h>

int main()
 {
    int n;
    int num = 0;
    scanf("%d", &n);
    while (n != 1) 
    {
        if (n % 2 == 0) n /= 2;
        else
         {
            n = n * 3 + 1;
            n /= 2;  
        }
        num++;
    }
    printf("%d", num);
    return 0;
}

/*该题思路就很简单，遇到偶数砍半，遇到奇数乘三加一再砍半，直到最后为1，循环中加入一个计数器，这可以计算出来了。*/