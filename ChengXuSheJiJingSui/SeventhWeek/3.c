#include <stdio.h>
int Monkey(int n, int x);
int main(void) 
{
    int n = 0;
    printf("Input days n:");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("x=%d\n",Monkey(n,1));
    return 0;
}
int Monkey(int n,int x)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 2*Monkey(n-1,x)+2*x;
    }
}
/*
题目内容：
猴子第一天摘了若干个桃子，吃了一半，不过瘾，又多吃了1个。第二天早上将剩余的桃子又吃掉一半，并且又多吃了1个。此后每天都是吃掉前一天剩下的一半零一个。到第n天再想吃时，发现只剩下1个桃子，问第一天它摘了多少桃子？为了加强交互性，由用户输入天数n，即假设第n天的桃子数为1。
要求采用递归法求解。
递归函数原型：int Monkey(int n, int x);
函数功能：从第n天只剩下一个桃子反向逆推出第1天的桃子数
程序运行结果示例1：
Input days n:5↙
x=46
程序运行结果示例2：
Input days n:10↙
x=1534
输入提示信息："Input days n:"
输入格式: "%d"
输出格式："x=%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/