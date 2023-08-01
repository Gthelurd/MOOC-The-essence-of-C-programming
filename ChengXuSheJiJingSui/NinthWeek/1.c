#include <stdio.h>
 int CountRepeatNum(int count[], int n);
 int main(void)
{
    int n = 0;
    printf("Input n:\n");
    scanf("%d", &n);
    int count[10] = {0};
    if (CountRepeatNum(count, n) != -1)
    {
        printf("Repeated digit!\n");
    }
    else
    {
        printf("No repeated digit!\n");
    }
    return 0;
}
 int CountRepeatNum(int count[], int n)
{
    int digits[10] = {0};
    int flag = 0;
     while (n > 0)
    {
        int digit = n % 10;
        digits[digit]++;
        n /= 10;
    }
     for (int i = 0; i < 10; i++)
    {
        if (digits[i] > 1)
        {
            flag = 1;
            break;
        }
    }
     if (flag == 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
/*
题目内容：
从键盘输入一个数，检查这个数中是否有重复出现的数字。如果这个数中有重复出现的数字，则显示“Repeated digit!”；否则显示“No repeated digit!”。
已知函数原型：
int CountRepeatNum(int count[], int n);
若有重复数字，则该函数返回重复出现的数字；否则返回-1.
程序运行结果示例1：
Input n:
28212↙
Repeated digit!
程序运行结果示例2：
Input n:
12345↙
No repeated digit!
输入提示："Input n:\n"
输入格式: "%ld"
输出格式：
有重复数字，输出信息: "Repeated digit!\n"
没有重复数字，输出信息: "No repeated digit!\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/