#include <stdio.h>
#include<string.h>
#include<math.h>
int Myatoi(char str[]);

int main(void)
{
    char str[20]="";
	printf("Input a string:");
	scanf("%7s",str);
	int result=Myatoi(str);
	printf("%d\n",result);
    return 0;
}

int Myatoi(char str[])
{
	int count=0;
	int number[9]={0};
	int result=0;
	int temp=0;
	for(int i=0;i<strlen(str);i++)
	{
		switch (str[i])
		{
        case '0':
            number[count]=0;
            count++;
            break;
		case '1':
			number[count]=1;
			count++;
			break;
		case '2' :
			number[count]=2;
			count++;
			break;
		case '3' :
			number[count]=3;
			count++;
			break;
		case '4' :
			number[count]=4;
			count++;
			break;
		case '5' :
			number[count]=5;
			count++;
			break;
		case '6' :
			number[count]=6;
			count++;
			break;
		case '7' :
			number[count]=7;
			count++;
			break;
		case '8' :
			number[count]=8;
			count++;
			break;
		case '9' :
			number[count]=9;
			count++;
			break;
		default:
			break;
		}
	}
	for(int i=count;i>=0;i--)
	{
        temp=pow(10,count-i-1)*number[i]+0.5;
		result=result+temp;
	}
	return result;
}


/*
题目内容：
从键盘输入一串字符（假设字符数少于8个），以回车表示输入结束，编程将其中的数字部分转换为整型数并以整型的形式输出。   
函数原型为 int Myatoi(char str[]);
其中，形参数组str[]对应用户输入的字符串，函数返回值为转换后的整型数。
解题思路的关键是：1）判断字符串中的字符是否是数字字符；2）如何将数字字符转换为其对应的数字值；3）如何将每一个转换后的数字值加起来形成一个整型数。
程序运行结果示例1：
Input a string:7hg09y↙
709
程序运行结果示例2：
Input a string:9w2k7m0↙
9270
程序运行结果示例3：
Input a string:happy↙
0
输入提示信息："Input a string:"
输入格式: "%7s"
输出格式："%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/