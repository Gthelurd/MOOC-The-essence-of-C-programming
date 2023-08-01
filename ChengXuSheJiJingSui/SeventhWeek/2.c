#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int Sum(int n);
int main(void)
{
    int n=0;
    printf("Please input n:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("data error!\n");
    }
    else
    {
        printf("sum=%d\n",Sum(n));
    }
    return 0;
}

int Sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+Sum(n-1);
    }   
}
/*
题目内容：
用递归方法计算如下求和计算
  sum = 1 + 2 + 3 + .... + n
递归函数原型：int Sum(int n);
程序运行结果示例1：
Please input n:5↙
sum=15
程序运行结果示例2：
Please input n:0↙
data error!
程序运行结果示例3：
Please input n:-3↙
data error!
输入提示信息："Please input n:"
输入错误提示信息："data error!\n"
输入格式:"%d"
输出格式："sum=%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/