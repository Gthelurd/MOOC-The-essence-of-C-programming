#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[3][20]={"tom","jack","rose"};
    char temp[20]="";
    int n=0;
    int count[3]={0,0,0};
    printf("Input the number of electorates:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Input vote %d:",i+1);
        scanf("%s",temp);
        if(strcmp(temp,"tom")==0)
        {
            count[0]++;
        }
        else if(strcmp(temp,"jack")==0)
        {
            count[1]++;
        }
        else if(strcmp(temp,"rose")==0)
        {
            count[2]++;
        }
    }
    printf("Election results:\n");
    printf("%s:%d\n","tom",count[0]);
    printf("%s:%d\n","jack",count[1]);
    printf("%s:%d\n","rose",count[2]);
    if(count[0]>count[1]&&count[0]>count[2])
    {
        printf("%s wins\n","tom");
    }
    if(count[1]>count[0]&&count[1]>count[2])
    {
        printf("%s wins\n","jack");
    }
    if(count[2]>count[1]&&count[2]>count[0])
    {
        printf("%s wins\n","rose");
    }
    return 0;
}
/*
题目内容：
现在要评选最牛群主，已知有3名最牛群主的候选人(分别是tom,jack和rose)，有不超过1000人参与投票，最后要通过投票评选出一名最牛群主，从键盘输入每位参与投票的人的投票结果，即其投票的候选人的名字，请你编程统计并输出每位候选人的得票数，以及得票数最多的候选人的名字。候选人的名字中间不允许出现空格，并且必须小写。若候选人名字输入错误，则按废票处理。
程序运行结果示例1：
Input the number of electorates:8↙
Input vote 1:tom↙
Input vote 2:jack↙
Input vote 3:rose↙
Input vote 4:tom↙
Input vote 5:rose↙
Input vote 6:rose↙
Input vote 7:jack↙
Input vote 8:rose↙
Election results:
tom:2
jack:2
rose:4
rose wins
程序运行结果示例2：
Input the number of electorates:5↙
Input vote 1:tom↙
Input vote 2:mary↙
Input vote 3:rose↙
Input vote 4:jack↙
Input vote 5:tom↙
Election results:
tom:2
jack:1
rose:1
tom wins
提示输入候选人数量："Input the number of electorates:"
提示输入候选人： "Input vote %d:"
输入格式: 
    输入候选人数量："%d"
    输入候选人姓名："%s"   
输出格式：
    输出候选人得票数："%s:%d\n"     
    输出票数最多的候选人姓名："%s wins\n"
输出评选结果提示信息："Election results:\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/