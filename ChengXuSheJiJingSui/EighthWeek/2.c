#include<stdio.h>
int main(void)
{
    int n=0;
    int array[1000]= {0};
    int i=0;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int count=0;


    for(int j=0; j<n-1; j++)
    {
        for(int k=j; k<n; k++)
        {
            for( i =0; i<n; i++)
            {   if(j==k)
            {
                continue;
            }
            else{
                if((array[j]+array[k])==array[i])
                    count++;
                    }
            }
        }
    }

    printf("%d",count);
    return 0;
}
/*
题目内容：
已知一个集合A，对A中任意两个不同的元素求和，若求得的和仍在A内，则称其为好数对。例如，集合A={1 2 3 4}，1+2=3，1+3=4，则1,2和1,3 是两个好数对。
编写程序求给定集合中好数对的个数。
注：集合中最多有1000个元素，元素最大不超过10000
程序运行示例1：
4↙
1 2 3 4↙
2
程序运行示例2：
7↙
2456 3251 654 890 100 754 1234↙
1
输入格式:"%d"
第一行：输入集合A的元素个数
第二行：输入A的各个元素，用空格隔开
输出格式："%d"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/