#include <stdio.h>
#include<string.h>
#include<math.h>
int SearchString(char s[], char d[]);

int main(void)
{
    char s[80]="",d[80]="";
	printf("Input a string:");
	gets(s);
	printf("Input another string:");
	gets(d);
	int result=SearchString(s,d);
	if(result==-1)
	{
		printf("Not found!\n");
	}
	else
	{
		printf("Searching results:%d\n",result);
	}
    return 0;
}

int SearchString(char s[], char d[])
{
	int count=0;
	int pos=0;
	int flag=0;

	for(int i=0;i<(strlen(s)-strlen(d));i++)
	{
		if(flag==0){
		if(s[i]==d[0])
		{
			pos=i;
				for(int j=0;j<strlen(d);j++)
		   	{
				if((s[pos+j])==d[j])
				{
					count++;
				}
			}
			if(count==strlen(d))
			{
				flag=1;
			}
			else{
				count=0;
			}
		}
		}
	}
	if(flag==0)
	{
		return -1;
	}
	else
	{
		return pos+1;
	}

}
/*
题目内容：
用字符数组作函数参数，编程实现在从键盘输入的字符串（假设长度小于80）中查找与指定的子串，并输出该子串在字符串中首次出现的位置，如果该字符不存在，则输出"Not found!"。
函数原型：int SearchString(char s[], char d[])
函数功能：在字符数组s中查找子串d，返回d在s中首次出现的位置，若找不到，则返回-1。
程序运行结果示例1：
Input a string:How are you!↙
Input another string:are↙
Searching results:5
程序运行结果示例2：
Input a string:hello↙
Input another string:are↙
Not found!
程序运行结果示例3：
Input a string:You are a student.↙
Input another string:you↙
Not found!
输入第一个字符串的提示信息："Input a string:"
输入第二个字符串的提示信息："Input another string:"
输入格式： gets()
输出格式："Searching results:%d\n"
没找到子串的输出提示信息： "Not found!\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/