#include <stdio.h>
int IsCancel(int a[], int n, int k);
int main(void)
{
    int n=0,k=0;
    int a[1000]={0};
    printf("Input n,k:\n");
    scanf("%d,%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=IsCancel(a,n,k);
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
int IsCancel(int a[], int n, int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            count++;
        }
    }
    if(count>=k)
    {
        return 0;
    }
    else 
    {
        return 1;
    }
    return 0;
}
/*
题目内容：
教授正在为一个有N个学生的班级讲授离散数学课。他对某些学生缺乏纪律性很不满意，于是决定：如果课程开始后上课的人数小于K，就取消这门课程。
从键盘输入每个学生的到达时间，请编程确定该课程是否被取消。如果该门课程被取消，则输出“Yes”，否则输出“No”。假设教授在时刻0开始上课。
如果一个学生的到达时间是非正整数，则表示该学生在上课前进入教室。如果一个学生的到达时间是正整数，则表示该学生在上课后进入教室。
如果一个学生在时刻0进入教室，也被认为是在上课前进入教室。假设到达时间的绝对值不超过100，学生数N不超过1000。
要求在输入学生的到达时间之前，先输入N和K。
已知函数原型：
//函数功能：根据数组a中记录的学生到达时间确定课程是否被取消，取消则返回1，否则返回0
int IsCancel(int a[], int n, int k);
程序运行结果示例1：
Input n,k:
4,3↙
-1 -3 4 2↙
YES
程序运行结果示例2：
Input n,k:
5,3↙
-1 -2 -3 0 4↙
NO
输入提示："Input n,k:\n"
输入格式: 
"%d,%d"
"%d"
输入包括两行数据：
    第1行是n,k的值。
    第2行是学生的到达时间。
输出格式： 
课程被取消，输出"YES"
课程不取消，输出"NO"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/