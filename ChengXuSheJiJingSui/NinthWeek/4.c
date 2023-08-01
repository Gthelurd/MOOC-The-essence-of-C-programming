#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int a, b, c;

    for (a = 1; a <= 9; a++) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                int number = a * 100 + b * 10 + c;
                if(number == factorial(a) + factorial(b) + factorial(c))
                printf("%ld\n", number);
            }
        }
    }

    return 0;
}

/*
题目内容：
试求出所有三位阶乘和数：m=a!+b!+c!(其中a为百位数字，b为十位数字，c为个位数字。约定0!=1，并输出所有的m)
输入格式: 无
输出格式："%ld\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/