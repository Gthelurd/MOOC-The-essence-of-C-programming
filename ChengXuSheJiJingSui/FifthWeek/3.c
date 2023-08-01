int main(void)
{
    int birthyear=0;
    int thisyear=0;
    int count=0;
    printf("Input your birth year:");
    scanf("%d",&birthyear);
    printf("Input this year:");
    scanf("%d",&thisyear);
    for(int i=birthyear;i<=thisyear;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
}

/*
题目内容：
从键盘输入你的出生年和今年的年份，编程判断并输出从你的出生年到今年之间中有多少个闰年。
程序的运行结果示例1： 
Input your birth year:2000↙
Input this year:2020↙
2000
2004
2008
2012
2016
2020
count=6
输入提示信息："Input your birth year:"
输入提示信息："Input this year:"
输入格式："%d"
输出格式：
闰年年份： "%d\n"
闰年总数："count=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/