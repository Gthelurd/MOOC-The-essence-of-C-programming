#include <stdio.h>
 int factorial(int n);
 int main() {
    int factorials[10];
    for (int i = 0; i <= 9; i++) {
        factorials[i] = factorial(i);
    }
     int results[1000];
    int count = 0;
     for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                int m = 100 * a + 10 * b + c;
                int temp_a = factorials[a];
                int temp_b = factorials[b];
                int temp_c = factorials[c];
                if (m == (temp_a + temp_b + temp_c)) {
                    results[count] = m;
                    count++;
                }
            }
        }
    }
     for (int i = 0; i < count; i++) {
        printf("%d\n", results[i]);
    }
     return 0;
}
 int factorial(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    } else {
        int temp = 1;
        for (int i = 1; i <= n; i++) {
            temp *= i;
        }
        return temp;
    }
}
/*
题目内容：
假设有这样一个三位数m，其百位、十位和个位数字分别是a、b、c，如果m= a!+b!+c!，则这个三位数就称为三位阶乘和数（约定0!=1）。请编程计算并输出所有的三位阶乘和数。
函数原型： long Fact(int n)；
函数功能：计算n的阶乘
输入格式: 无
输出格式："%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/