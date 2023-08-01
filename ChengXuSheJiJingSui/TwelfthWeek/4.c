#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 int main(void)
{
    char firstletter = ' ';
    char secondletter = ' ';
    printf("please input the first letter of someday:\n");
    scanf(" %c", &firstletter);
    firstletter = tolower(firstletter);
     switch (firstletter)
    {
    case 'f':
        printf("friday\n");
        break;
    case 'm':
        printf("monday\n");
        break;
    case 'w':
        printf("wednesday\n");
        break;
    case 't':
    case 's':
        printf("please input second letter:\n");
        scanf(" %c", &secondletter);
        //secondletter = tolower(secondletter);
        switch (firstletter)
        {
        case 't':
            switch (secondletter)
            {
            case 'u':
                printf("tuesday\n");
                break;
            case 'h':
                printf("thursday\n");
                break;
            default:
                printf("data error\n");
                break;
            }
            break;
        case 's':
            switch (secondletter)
            {
            case 'a':
                printf("saturday\n");
                break;
            case 'u':
                printf("sunday\n");
                break;
            default:
                printf("data error\n");
                break;
            }
            break;
        }
        break;
    default:
        printf("data error\n");
        break;
    }
     return 0;
}

/*
题目内容：
请输入星期几的第一个字母（不区分大小写）来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母(小写)，否则输出“data error”。
程序运行结果示例1：
please input the first letter of someday:
S↙
please input second letter:
u↙
sunday
程序运行结果示例2：
please input the first letter of someday:
F↙
friday
程序运行结果示例2：
please input the first letter of someday:
h↙
data error
第一个字母的输入提示信息："please input the first letter of someday:\n"
第二个字母的输入提示信息："please input second letter:\n"
用户输入错误提示信息："data error\n"
输入格式: " %c" （注意：%c前面有一个空格）
输出格式：
星期一："monday\n"
星期二："tuesday\n"
星期三："wednesday\n"
星期四："thursday\n"
星期五："friday\n"
星期六："saturday\n"
星期日："sunday\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/