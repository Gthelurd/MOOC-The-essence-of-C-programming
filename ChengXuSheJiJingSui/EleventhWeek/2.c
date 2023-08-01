#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Seperate(int a[], int n);
int main(void)
{
    int n=0;
    int a[100]={0};
    printf("Input n:");
    scanf("%d",&n);
    printf("Input numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Seperate(a,n);
    return 0;
}
void Seperate(int a[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(count==0)
            {
                printf("%d",a[i]);
                count++;
            }
            else
            {
                printf(",%d",a[i]);
            }
        }
    }
    printf("\n");
    count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(count==0)
            {
                printf("%d",a[i]);
                count++;
            }
            else
            {
                printf(",%d",a[i]);
            }
        }
    }
    return ;
}
/*
题目内容：
输入n个整数（n从键盘输入，假设n的值不超过100），按奇偶数分成两组并输出。输出两行，第一行为所有奇数，第二行为所有偶数，保持数据的相对顺序与输入顺序相同。
函数原型如下所示：
void Seperate(int a[], int n); //数组a[]存放用户输入的n个整数
解题思路：用两个循环分别输出奇数和偶数，在输出第一个数时用"%d"格式字符，在输出其余数时用",%d"格式字符，用标志变量记录和判断是否是第一个奇数或偶数。
程序运行结果示例1：
Input n:7↙
Input numbers:5 9 47 82 0 6 7↙
5,9,47,7
82,0,6
程序运行结果示例2：
Input n:8↙
Input numbers:-2 3 5 0 23 62 79 83↙
3,5,23,79,83
-2,0,62
输入提示信息："Input n:"
               "Input numbers:"
输入格式: "%d"
每行第一个数据的输出格式："%d"
每行第二个及以后数据的输出格式：",%d"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/