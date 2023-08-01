#include <stdio.h>
#include <math.h>
int main(void)
{
    double rate=0.0;
    int year=0;
    double capital=0.0;
    printf("Input capital, year:");
    scanf("%lf,%d",&capital,&year);
    char ch=' ';
    printf("Compound interest (Y/N)?");
    scanf(" %c",&ch);
    double deposit=0.0;
    switch (year)
    {
    case 1:
        rate=0.0225;
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
        break;
    case 2:
        rate=0.0243;
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
        break;
    case 3:
        rate=0.0270;
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
        break;
    case 5:
        rate=0.0288;
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
        break;
    case 8:
        rate=0.0300;
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
        break;
    default:
        printf("Error year!\n");
        return 0;
    }
    printf("rate = %.4f, deposit = %.4f\n",rate,deposit);
    return 0;
}
/*
题目内容：
设capital是最初的存款总额（即本金），rate是整存整取的存款年利率，n 是储蓄的年份，deposit是第n年年底账号里的存款总额。已知如下两种本利之和的计算方式：
按复利方式计息的本利之和计算公式为：
              deposit  =  capital  *(1  + rate)^ n
按普通计息方式计算本利之和的公式为：
              deposit  =  capital  * (1 + rate * n)
已知银行整存整取不同期限存款的年息利率分别为：
存期1年，利率为 0.0225
存期2年，利率为 0.0243
存期3年，利率为 0.0270
存期5年，利率为 0.0288
存期8年，利率为 0.0300
若输入其他年份，则输出"Error year!"
编程从键盘输入存钱的本金和存款期限，然后再输入按何种方式计息，最后再计算并输出到期时能从银行得到的本利之和，要求结果保留到小数点后4位。
程序的运行结果示例1：
Input capital, year:10000,2↙
Compound interest (Y/N)?Y↙
rate = 0.0243, deposit = 10491.9049
程序的运行结果示例2：
Input capital, year:10000,2↙
Compound interest (Y/N)?n↙
rate = 0.0243, deposit = 10486.0000
程序的运行结果示例3：
Input capital, year:1000,4↙
Compound interest (Y/N)?y↙
Error year!
输入提示信息："Input capital, year:"
输入提示信息："Compound interest (Y/N)?"
存期输入错误的提示信息： "Error year!\n"
本金及存款期限的输入格式: "%lf,%d"
是否选择复利计算的输入格式： " %c" (注意：%c的前面有一个空格。输入的字符大小写皆可，即Y或y，N或n皆可)
输出格式："rate = %.4f, deposit = %.4f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/