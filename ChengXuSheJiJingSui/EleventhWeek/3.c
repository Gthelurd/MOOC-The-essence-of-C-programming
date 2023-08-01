#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int IsSubString(char a[], char b[]);
 int main(void)
{
    char str1[80] = "";
    char str2[80] = "";
     printf("Input the first string:");
    fgets(str1, sizeof(str1), stdin);
     printf("Input the second string:");
    fgets(str2, sizeof(str2), stdin);
     int flag = IsSubString(str1, str2);
     if (flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
     return 0;
}
 int IsSubString(char a[], char b[])
{
    int flag = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
     for (int i = 0; i <= len_a - len_b; i++)
    {
        int count = 0;
         if (a[i] == b[0])
        {
            for (int j = 0; j < len_b; j++)
            {
                if (a[i + j] == b[j])
                {
                    count++;
                }
            }
             if (count == len_b)
            {
                return 1;
            }
        }
    }
     return 0;
}

/*
题目内容：从键盘输入两个长度小于80的字符串A和B，且A的长度大于B的长度，编程判断B是不是A的子串，如果是，则输出”Yes”，否则输出”No”。
这里所谓的该串的子串是指字符串中任意多个连续的字符组成的子序列。
函数原型：int IsSubString(char a[], char b[]);
函数功能：判断b是否是a的子串，是则返回1，否则返回0
程序运行结果示例1：
Input the first string: Abcdefghijk123↙
Input the second string: 123↙
Yes
程序运行结果示例2：
Input the first string: abefsfl↙
Input the second string: befs↙
Yes
程序运行结果示例3：
Input the first string: aAbde↙
Input the second string: abc↙
No
输入第一个字符串的提示信息： "Input the first string:"
输入第二个字符串的提示信息： "Input the second string:"
输入格式: 用 gets()函数
输出格式：
是子串，输出： "Yes\n"
不是子串，输出： "No\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/