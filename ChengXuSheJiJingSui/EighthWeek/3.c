#include <stdio.h>
 int main(void) {
    for (int i = 100; i <= 999; i++) {
        int j = 2 * i;
        int k = 3 * i;
         int digits[10] = {0}; // Array to track the uniqueness of digits
         // Check if i, j, and k have unique digits
        int uniqueDigits = 1;
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digits[digit] == 1) {
                uniqueDigits = 0;
                break;
            }
            digits[digit] = 1;
            num /= 10;
        }
         num = j;
        while (num > 0) {
            int digit = num % 10;
            if (digits[digit] == 1) {
                uniqueDigits = 0;
                break;
            }
            digits[digit] = 1;
            num /= 10;
        }
         num = k;
        while (num > 0) {
            int digit = num % 10;
            if (digits[digit] == 1) {
                uniqueDigits = 0;
                break;
            }
            digits[digit] = 1;
            num /= 10;
        }
         if (uniqueDigits) {
            printf("%d,%d,%d\n", i, j, k);
        }
    }
     return 0;
}
/*
题目内容：
将0到9这十个数字分成三个3位数，要求第一个3位数，正好是第二个3位数的1/2，是第三个3位数的1/3。问应当怎样分，编写程序实现。
输入格式: 无
输出格式："%d,%d,%d\n" （注意：输出的顺序为第一个3位数，第二个3位数，第三个3位数）
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/