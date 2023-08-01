#include <stdio.h>
#define MINUTES_IN_HOUR 60
int main(void)
{
    int timeOneHour = 0, timeOneMinute = 0;
    int timeTwoHour = 0, timeTwoMinute = 0;
    printf("Input time one(hour, minute):");
    scanf("%d,%d", &timeOneHour, &timeOneMinute);
    printf( "Input time two(hour, minute):");
    scanf("%d,%d", &timeTwoHour, &timeTwoMinute);
    int timeOneTotalMinutes = (timeOneHour * MINUTES_IN_HOUR) + timeOneMinute;
    int timeTwoTotalMinutes = (timeTwoHour * MINUTES_IN_HOUR) + timeTwoMinute;
    int timeDifferenceMinutes = timeOneTotalMinutes > timeTwoTotalMinutes ? timeOneTotalMinutes - timeTwoTotalMinutes : timeTwoTotalMinutes - timeOneTotalMinutes;
    int finalHour = timeDifferenceMinutes / MINUTES_IN_HOUR;
    int finalMinute = timeDifferenceMinutes % MINUTES_IN_HOUR;
    printf("%d hour %d minute\n", finalHour, finalMinute);
    return 0;
}
/*
题目内容：
编程从键盘任意输入两个时间（例如4时55分和1时25分），计算并输出这两个时间之间的间隔。要求不输出时间差的负号。
程序的运行结果示例1： 
Input time one(hour, minute):4,55↙
Input time two(hour, minute):1,25↙
3 hour 30 minute
程序的运行结果示例2： 
Input time one(hour, minute):1,56↙
Input time two(hour, minute):3,25↙
1 hour 29 minute
输入提示信息："Input time one(hour, minute):"
               "Input time two(hour, minute):"
输入格式："%d,%d"
输出格式："%d hour %d minute\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/