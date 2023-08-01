#include <stdio.h>
#include <stdlib.h>
 int Func(int n);
 int main(void) {
    int n;
    printf("Input n:");
    if (scanf("%d", &n) != 1 || n < 1000 || n > 1000000) {
        printf("Input error!\n");
        return 0;
    }
     int m = Func(n);
    printf("%d\n", m);
     return 0;
}
 int Func(int n) {
    int largestDivisible = 0;
     for (int i = 9; i >= 1; i--) {
        for (int j = 9; j >= 0; j--) {
            for (int k = 9; k >= 0; k--) {
                int num = 100 * i + 10 * j + k;
                if (n % num == 0 && num > largestDivisible) {
                    largestDivisible = num;
                }
            }
        }
    }
     return largestDivisible;
}
/*
题目内容：
从键盘任意输入一个数n（1000<=n<=1000000），编程计算并输出n的所有约数中最大的三位数（即最大的三位约数）。如果n小于1000或者大于1000000，则输出“Input error!”。
函数原型：int Func(int n)；
函数功能：计算n的所有约数中最大的三位数
程序运行结果示例1：
Input n:555555↙
777
程序运行结果示例2：
Input n:1000↙
500
程序运行结果示例3：
Input n:800↙
Input error!
输入提示信息："Input n:"
输入错误提示信息："Input error!\n"
输入格式： "%d"
输出格式： "%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/