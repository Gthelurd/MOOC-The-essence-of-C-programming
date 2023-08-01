#include <stdio.h>
#include <math.h>
int main(void)
{
    double rate=0.0;
    int year=0;
    double capital=0.0;
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&year,&capital);
    char ch=' ';
    printf("Compound interest (Y/N)?");
    scanf(" %c",&ch);
    double deposit=0.0;
    deposit=capital;
    if(ch=='y'||ch=='Y')
    {
        for(int i=0;i<year;i++)
        {
            deposit = deposit*(1+rate);
        }
    }
    else if(ch=='n'||ch=='N')
    {
        deposit =deposit*(1+rate*year);
    }
    printf("deposit = %.4f\n",deposit);
    return 0;
}
/*
题目内容：
 设capital是最初的存款总额（即本金），rate是整存整取的存款年利率，n 是储蓄的年份，deposit是第n年年底账号里的存款总额。已知如下两种本利之和的计算方式：
按复利方式计息的本利之和计算公式为：
              deposit  =  capital  * (1  + rate)^ n
按普通计息方式计算本利之和的公式为：
              deposit  =  capital  * (1 + rate * n)
    编程从键盘输入存钱的本金、存款期限以及年利率，然后再输入按何种方式计息，最后再计算并输出到期时能从银行得到的本利之和，要求结果保留到小数点后4位。
提示：使用数学函数需要加入头文件 <math.h>
程序的运行结果示例1：
Input rate, year, capital:0.0225,2,10000↙
Compound interest (Y/N)?Y
deposit = 10455.0625
程序的运行结果示例2：
Input rate, year, capital:0.0225,2,10000↙
Compound interest (Y/N)?n
deposit = 10450.0000
输入提示信息："Input rate, year, capital:"
输入提示信息："Compound interest (Y/N)?" 
本金、存款期限以及年利率的输入格式: "%lf,%d,%lf"
是否选择复利计算的输入格式： " %c" (注意：%c的前面有一个空格。输入的字符大小写皆可，即Y或y，N或n皆可)
输出格式："deposit = %.4f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。*/