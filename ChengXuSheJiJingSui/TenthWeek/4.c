#include <stdio.h>
#include<string.h>
#include<math.h>
void Caesar(char c[]);
int main(void)
{
    char caesar[100]="";
	printf("Input a string:");
	gets(caesar);
	Caesar(caesar);
	puts(caesar);
    return 0;
}

void Caesar(char c[])
{
	for(int i=0;i<strlen(c);i++)
	{
		switch (c[i])
{
    case 'a':
        c[i] = 'd';
        break;
    case 'b':
        c[i] = 'e';
        break;
    case 'c':
        c[i] = 'f';
        break;
    case 'd':
        c[i] = 'g';
        break;
    case 'e':
        c[i] = 'h';
        break;
    case 'f':
        c[i] = 'i';
        break;
    case 'g':
        c[i] = 'j';
        break;
    case 'h':
        c[i] = 'k';
        break;
    case 'i':
        c[i] = 'l';
        break;
    case 'j':
        c[i] = 'm';
        break;
    case 'k':
        c[i] = 'n';
        break;
    case 'l':
        c[i] = 'o';
        break;
    case 'm':
        c[i] = 'p';
        break;
    case 'n':
        c[i] = 'q';
        break;
    case 'o':
        c[i] = 'r';
        break;
    case 'p':
        c[i] = 's';
        break;
    case 'q':
        c[i] = 't';
        break;
    case 'r':
        c[i] = 'u';
        break;
    case 's':
        c[i] = 'v';
        break;
    case 't':
        c[i] = 'w';
        break;
    case 'u':
        c[i] = 'x';
        break;
    case 'v':
        c[i] = 'y';
        break;
    case 'w':
        c[i] = 'z';
        break;
    case 'x':
        c[i] = 'a';
        break;
    case 'y':
        c[i] = 'b';
        break;
    case 'z':
        c[i] = 'c';
        break;
    default:
        break;
}
	}
	return ;
}

/*
题目内容：
凯撒密码是罗马扩张时期朱利斯•凯撒（Julius Caesar）创造的，用于加密通过信使传递的作战命令，其原理很简单，就是通过将字母表中的字母移动一定位置而实现加密。例如，每个字母按字母表顺序向后移3位，如a加密后变成d，b加密后变成e，……x加密后变成a，y加密后变成b，z加密后变成c。请编写一个程序，将用户从键盘输入的文本字符串（只包含a～z的字符且长度小于100）进行加密后输出。
函数原型：void Caesar(char c[]);
函数功能：计算凯撒密码
程序的运行结果示例1：
Input a string:baidu↙
edlgx
程序的运行结果示例2：
Input a string:xyz↙
abc
输入提示信息："Input a string:"
输入格式: 用 gets()函数
输出格式：用 puts()函数
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/