#include <stdio.h>
#include<string.h>
#include<math.h>
int CountRepeatStr(char str[], int *tag);

int main(void)
{
    char str[80]="";
	int *tag=NULL;
	tag=(int*)malloc(sizeof(int));
	int result=0;
	printf("Input a string:\n");
	gets(str);
	result=CountRepeatStr(str,tag);
	printf("%c:%d\n",str[*tag],result);
    return 0;
}
int CountRepeatStr(char str[], int *tag)
{
	int count=0;
	int max=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
			*tag=i+1;
		}
		else if(str[i]!=str[i+1])
		{
			if(count>max)
			{
				max=count;
			}
			count=0;
		}
	}
	return max+1;
}


/*
题目内容：
输入一串字符（字符数小于80），以回车表示输入结束，编程计算并输出这串字符中连续重复次数最多的字符和重复次数。如果重复次数最多的字符有两个，则输出最后出现的那一个。
已知函数原型：
//函数功能：统计字符串中连续重复次数最多的字符及其重复的次数
//函数参数：str指向待统计的字符串，指针形参tag返回重复字符最后出现的下标位置 
//函数返回值：返回字符重复的次数
int CountRepeatStr(char str[], int *tag);
求解思路：设置一个计数器，遍历字符串中的所有字符，若str[i] == str[i+1]，则计数器加1，同时判断计数器的值是否大于记录的最大重复次数max，若大于，则用计数器的值更新max，并记录该字符最后出现的位置i+1.若str[i] != str[i+1]，则计数器重新初始化为1。遍历结束时，函数返回max的值。
程序运行结果示例1：
Input a string:
2344455555↙
5:5
程序运行结果示例2：
Input a string:
sgf222257↙
2:4
输入提示信息："Input a string:\n"
输入格式:  用gets()输入字符串
输出格式："%c:%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/