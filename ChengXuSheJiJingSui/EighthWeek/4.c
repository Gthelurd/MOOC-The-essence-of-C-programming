#include<stdio.h>
#include<math.h>
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
	    }
    }
    return 1;
}

int main(void)
{
    int n=0;
    int sum=0;
    int count=0;
    printf("Input n(n<=500):");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        if(isPrime(i)&&count<10)
        {
            printf("%6d",i);
            count++;
            sum+=i;
        }
        if(count>=10)
        {
            break;
        }
    }
    printf("\nsum=%d\n",sum);
    return 0;
}
/*
题目内容：
编程计算n(n<=500)以内的10个最大素数及其和，分别输出这最大的10个素数及其和。n的值要求从键盘输入。要求10个素数按从大到小的顺序输出。
程序运行示例1：
Input n(n<=500):10↙
     7     5     3     2
sum=17
程序运行示例2：
Input n(n<=500):100↙
    97    89    83    79    73    71    67    61    59    53
sum=732
输入提示信息："Input n(n<=500):"
输入格式: "%d"
10个最大素数的输出格式："%6d"
10个最大素数和的输出格式："\nsum=%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/