#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct clock
{

    int hour;

    int minute;

    int second;

} CLOCK;
CLOCK CalculateTime(CLOCK t1, CLOCK t2);


int main(void)
{
    CLOCK time1,time2;
    CLOCK result;
    printf("Input time one:(hour，minute):");
    scanf("%d,%d",&time1.hour,&time1.minute);
    printf("Input time two: (hour，minute):");
    scanf("%d,%d",&time2.hour,&time2.minute);
    result=CalculateTime(time1,time2);
    printf("%dhour,%dminute\n",result.hour,result.minute);
    return 0;
}
CLOCK CalculateTime(CLOCK t1, CLOCK t2)
{
    CLOCK *result;
    result=(CLOCK*)malloc(sizeof(CLOCK));
    int timeone=0;
    int timetwo=0;
    timeone=t1.hour*60+t1.minute;
    timetwo=t2.hour*60+t2.minute;
    int temp=(timeone>timetwo)?timeone-timetwo:timetwo-timeone;
    result->hour=temp/60;
    result->minute=temp-60*result->hour;
    return *result;
}

/*
题目内容：
用结构体定义时钟类型，编程从键盘任意输入两个时间（例如4时55分和1时25分），计算并输出这两个时间之间的间隔。要求不输出时间差的负号。结构体类型定义如下：
typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;
函数原型： CLOCK CalculateTime(CLOCK t1, CLOCK t2);
函数功能：计算并返回两个时间t1和t2之间的差
程序运行结果示例1：
Input time one:(hour，minute):4,55↙
Input time two: (hour，minute):1,25↙
3hour,30minute
程序运行结果示例2：
Input time one:(hour，minute):1,33↙
Input time two: (hour，minute):5,21↙
3hour,48minute
输入提示： "Input time one:(hour，minute):"
          "Input time two: (hour，minute):"
输入格式: "%d,%d"
输出格式："%dhour,%dminute\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/