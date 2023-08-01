#include <stdio.h>
int main(void)
{
    float A=0.0,B=0.0;
    printf("Input percent of A and B:");
    scanf("%f%f",&A,&B);
    float compete=0.0,standard=0.0;
    compete=10.0*A+6.0*B;
    standard=8*A+10*B;
    printf("compete = %.4f\nstandard = %.4f\n",compete,standard);
    if(compete>standard)
    {
        printf("The Best Response is compete!");
    }
    else if(compete<standard)
    {
        printf("The Best Response is standard!");
    }
    else 
    {
        printf("Error!");
    }
    return 0;
}
/*
题目内容：
在博弈论中，有一种决策称为Best Response，通俗的意思就是选择一种策略使得团体利益最大化。
C语言学习成绩的评定方式分为两种，一种是自由刷题模式（compete），没有固定标准，刷题越多者排名越靠前，其期末分数越高；
另一种是规定每个人必须做够多少道题（standard），达到要求就能取得相应分数。
假设一个班级中的学生分为A、B两类，A类同学学习热情很高，乐于做题，
采用compete模式可以获得成就感并且在期末拿到高分，compete模式可以让他们有10分的收益；采用standard模式他们也可以在期末拿到高分，但不能满足他们的求知欲，standard模式可以让他们有8分的收益。
B类同学仅仅希望期末拿高分，如果采用compete模式，他们竞争不过A类同学，期末成绩不理想，
因此compete模式能给他们6分的收益；如果采用standard模式，他们可以完成规定任务并拿到高分，因此standard模式可以让他们有10分的收益。
编程输入A类和B类同学分别占班级总人数的百分比，分别计算并输出采用compete和standard两种刷题模式下的全班总收益，并输出这个班级在这场博弈中的Best Response是哪种模式。
注： 程序中使用的数据类型为float
程序运行结果示例1：
Input percent of A and B:0.2 0.8↙
compete = 6.8000
standard = 9.6000
The Best Response is standard!
程序运行结果示例2：
Input percent of A and B:0.8 0.2↙
compete = 9.2000
standard = 8.4000
The Best Response is compete!
程序运行结果示例3：
Input percent of A and B:0.5 0.5↙
compete = 8.0000
standard = 9.0000
The Best Response is standard!
输入提示信息："Input percent of A and B:"
输入格式: "%f%f"
输出格式："compete = %.4f\nstandard = %.4f\n"
输出提示信息："The Best Response is compete!"
输出提示信息："The Best Response is standard!"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/