#include <stdio.h>
#include <stdlib.h>
 int Gcd(int a, int b);
 int main(int argc, char argv[]) {
    int m = 0, n = 0;
    printf("Input m,n:");
    scanf("%d,%d", &m, &n);
     if (m < 1 || n > 10000 || n <= 0) {
        printf("Input error!\n");
        return 0;
    } else {
        int temp = Gcd(m, n);
        int dividend = m / temp;
        int divisor = n / temp;
        printf("%d/%d\n", dividend, divisor);
    }
    return 0;
}
 int Gcd(int a, int b) {
    int gcd = 1; // Initialize gcd to 1
     for (int i = 2; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
     return gcd;
}

/*
题目内容：
孔融没有兄弟姐妹，到了周末，就找堂兄孔明、堂姐孔茹、堂弟孔伟等7个堂兄妹来到家里玩。孔融妈妈买了8个梨给孩子们吃，结果小黄狗桐桐淘气叼走了一个，大花猫鑫鑫偷偷藏了一个。孔融抢过剩下的6个梨，妈妈止住他，说他要和大家平分吃。孔融不高兴，说8个人怎么分6个梨？妈妈说可以用分数解决这个问题。孔融学过分数，说把每个梨切8个相等的块，每个人拿6块就行了。妈妈说不用切那么多块，每个梨切4个相等的块，每个人拿3块正好。孔融糊涂了。孔明说，我来教你。于是孔明给孔融讲起了分数的化简。
分数化简要化简到最简形式，比如12/20可以化简成6/10和3/5，但3/5是最简形式；100/8可以化简成 50 /4和 25 /2 , 而25/2 为最简形式。
为了降低难度，不要求将假分数（如7/2）化简成带分数（3 ）形式。
请编程帮助孔融将任意一个分数化简成最简形式。先从键盘输入两个整数m和n(1<=m,n<=10000) ，其中m表示分子，n表示分母。然后输出分数化简后的最简形式。
函数原型：int Gcd(int a, int b);
函数功能：计算a和b的最大公约数，输入数据超出有效范围时返回-1。
程序的运行结果示例1：
Input m,n:8,14↙
4/7
程序的运行结果示例2：
Input m,n:-13,31↙
Input error!
程序的运行结果示例3：
Input m,n:7,0↙
Input error!
程序的运行结果示例4：
Input m,n:210,35↙
6/1
输入提示信息： "Input m,n:"
输入错误提示信息： "Input error!\n"
输入格式："%d,%d" 
输出格式："%d/%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/