#include <stdio.h>
#define TAX_RATE 0.08
int main(void)
{
    double price = 0.0;
    printf("Input payment p:");
    if (scanf("%lf", &price) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    price *= (1 - TAX_RATE);
    printf("price = %.1f\n", price);
    return 0;
}
/*
题目内容：
    某网上购物网站对用户实行优惠，买家购物货款p越多，则折扣越多。今天正值该网站优惠折扣日，买家可以获得8%的折扣。
请编程从键盘输入买家购物货款p，计算并输出买家折扣后实际应付出的价钱。
注：程序中的数据类型为float。
程序的运行结果示例1：
Input payment p:300↙
price = 276.0
程序的运行结果示例2：
Input payment p:1299.8↙
price = 1195.8
输入提示信息："Input payment p:"
输入格式: "%f"
输出格式："price = %.1f\n" (注：等号左右均有空格)
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/