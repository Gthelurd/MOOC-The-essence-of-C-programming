#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 bool isPrime(int x);
 int main() {
    int n = 0;
    printf("Input n:");
    scanf("%d", &n);
     int sum = 0;
     if (n <= 0) {
        printf("sum=%d\n",0);
        return 0;
    }
     // Generate all prime numbers up to n using Sieve of Eratosthenes
    bool* primes = (bool*)malloc((n + 1) * sizeof(bool));
    for (int i = 2; i <= n; i++) {
        primes[i] = true;
    }
     for (int p = 2; p * p <= n; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
    }
     // Sum all prime numbers
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            sum += i;
        }
    }
     printf("sum=%d\n", sum);
     free(primes);
    return 0;
}
 bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
     for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
     return true;
}
/*
题目内容：
从键盘任意输入一个整数n，编程计算并输出1~n之间的所有素数之和。
函数原型：int IsPrime(int x);
函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数
程序运行结果示例1：
Input n:8↙
sum=17
程序运行结果示例2：
Input n:10↙
sum=17
程序运行结果示例3：
Input n:-12↙
sum=0
输入提示信息："Input n:"
输入格式："%d"
输出格式："sum=%d\n"
 为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/