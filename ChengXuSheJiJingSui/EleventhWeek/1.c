#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long Fun(long M, long T, long U, long F, long D, char str[]);
int main(void)
{
    long M = 0, T = 0, U = 0, F = 0, D = 0;
    char str[80] = "";
    long result = 0;
    printf("Input M,T,U,F,D:");
    scanf("%ld%ld%ld%ld%ld", &M, &T, &U, &F, &D);
    printf("Input conditions of road:");
    scanf("%s", str);

    result = Fun(M, T, U, F, D, str);
    printf("num=%ld\n", result);

    return 0;
}
long Fun(long M, long T, long U, long F, long D, char str[])
{
    int num = 0;
    int count = 0;
    int next=0;
    for (int i = 0; i < T; i++)
    {
        if (num < ((M)-next))
        {
            switch (str[i])
            {
            case 'u':
                num = num + U+D;
                count++;
                break;
            case 'f':
                num += F+F;
                count++;
                break;
            case 'd':
                num += D+U;
                count++;
                break;

            default:
                break;
            }
            if(i<T-1)
            {
                switch (str[i+1])
            {
            case 'u':
                next=  U+D;
                break;
            case 'f':
                next= F+F;
                break;
            case 'd':
                next = D+U;
                break;
            default:
                break;
            }
            }
            else if(i==T-1)
            {
                switch (str[i])
            {
            case 'u':
                next=U+D;
                break;
            case 'f':
                next= F+F;
                break;
            case 'd':
                next= D+U;
                break;
            default:
                break;
            }
            }
        }
        else
        {
            break;
        }
    }

    return count;
}

/*
题目内容：
为了能在下一次跑步比赛中有好的发挥，小白在一条山路上开始了她的跑步训练。
她希望能在每次训练中跑得尽可能远，不过她也知道农场中的一条规定：女孩子独自进山的时间不得超过M秒（1 <= M <= 10,000,000）。
假设整条山路划分成T个长度相同的路段（1 <= T <= 100,000），并且小白用si表示第i个路段的路况，用u、f、d这3个字母分别表示第i个路段是上坡、平地、下坡。
小白跑完一段上坡路的耗时是U秒（1 <= U <= 100），跑完一段平地的耗时是F秒（1 <= F <= 100），跑完一段下坡路的耗时是D秒（1 <= D <= 100）。
注意，沿山路原路返回时，原本是上坡的路段变成了下坡路段，原本是下坡的路段变成了上坡路段。
小白想知道，在能按时返回农场的前提下，她最多能在这条山路上跑多少个路段。
请你编程帮助她计算。
函数原型：long Fun(long M, long T, long U, long F, long D, char str[]);
函数功能：计算在限时M秒内T个路段的情况下，最多往返可跑的路段数。
         参数：M,T,U,F,D分别代表限时、路段数，以及上坡、平地、下坡的耗时
              数组str保存整条山路的路段状况
         返回值：最多可跑的路段数
程序运行结果示例1：
Input M,T,U,F,D:13 5 3 2 1↙
Input conditions of road:ufudf↙
num=3
程序运行结果示例2：
Input M,T,U,F,D:150 8 18 10 5↙
Input conditions of road:fuffdfud↙
num=7
进山时间等信息的输入提示: "Input M,T,U,F,D:"
路况输入提示信息: "Input conditions of road:"
进山时间等数据的输入格式: "%ld%ld%ld%ld%ld"
路况等数据的输入格式: "%s"
输出格式： "num=%ld\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/