#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int birthyear=0;
    int thisyear=0;
    long long int beats=0;
    printf("Input your birth year:");
    scanf("%d",&birthyear);
    printf("Input this year:");
    scanf("%d",&thisyear);
    for(int i=birthyear;i<thisyear;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
        {
            beats=beats+366*24*60*75;
        }
        else
        {
            beats=beats+365*24*60*75;
        }
    }
    printf("The heart beats in your life: %lu",beats);
    return 0;
}
/*
题目内容：
假设人的心率为每分钟跳75下，编程从键盘输入你的出生年和今年的年份，然后以年为单位计算并输出从你出生开始到目前为止的生命中已有的心跳总数（要求考虑闰年）。
程序运行结果示例1：
Input your birth year:1986↙
Input this year:2016↙
The heart beats in your life: 1183356000
输入提示信息："Input your birth year:"
输入提示信息："Input this year:"
输入格式:"%d"
输出格式："The heart beats in your life: %lu"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/