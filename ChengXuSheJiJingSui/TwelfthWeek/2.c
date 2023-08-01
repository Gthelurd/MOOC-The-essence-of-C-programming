#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct winners

{

    char name[20];

    int finalScore;

    int classScore;

    char work;

    char west;

    int paper;

    int scholarship;

} WIN;
void Addup(WIN stu[], int n);
int FindMax(WIN student[], int n);

int main(void)
{
    int n=0;
    int pos=0;
    WIN student[30];
    printf("Input n:");
    scanf("%d",&n);
    Addup(student,n);
    pos=FindMax(student,n);
    printf("%s get the highest scholarship %d\n",student[pos].name,student[pos].scholarship);
    return 0;
}

void Addup(WIN stu[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Input name:");
        scanf("%s",stu[i].name);
        printf("Input final score:");
        scanf("%d",&stu[i].finalScore);
        printf("Input class score:");
        scanf("%d",&stu[i].classScore);
        printf("Class cadre or not?(Y/N):");
        scanf(" %c",&stu[i].work);
        printf("Students from the West or not?(Y/N):");
        scanf(" %c",&stu[i].west);
        printf("Input the number of published papers:");
        scanf("%d",&stu[i].paper);
        stu[i].scholarship=0;
        if(stu[i].finalScore>80&&stu[i].paper>=1)
        {
            stu[i].scholarship+=8000;
        }
        if(stu[i].finalScore>85&&stu[i].classScore>80)
        {
            stu[i].scholarship+=4000;
        }
        if(stu[i].finalScore>90)
        {
            stu[i].scholarship+=2000;
        }
        if(stu[i].finalScore>85&&stu[i].west=='Y')
        {
            stu[i].scholarship+=1000;
        }
        if(stu[i].classScore>80&&stu[i].work=='Y')
        {
            stu[i].scholarship+=850;
        }
        printf("name:%s,scholarship:%d\n",stu[i].name,stu[i].scholarship);
    }
    return ;
}

int FindMax(WIN student[], int n)
{
    int max=student[0].scholarship;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(max<student[i].scholarship)
        {
            pos=i;
            max=student[i].scholarship;
        }
    }
    return pos;
}
/*
题目内容：
某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，每项奖学金获取的条件分别如下：
1) 院士奖学金：期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生每人均可获得8000元；
2) 五四奖学金：期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生每人均可获得4000元；
3) 成绩优秀奖：期末平均成绩高于90分（>90）的学生每人均可获得2000元；
4) 西部奖学金：期末平均成绩高于85分（>85）的西部省份学生每人均可获得1000元；
5) 班级贡献奖：班级评议成绩高于80分（>80）的学生干部每人均可获得850元；
只要符合上述条件就可获得相应的奖项，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。例如姚明的期末平均成绩是87分，班级评议成绩82分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级贡献奖，奖金总数是4850元。
现在给出若干学生的相关数据（假设总有同学能满足获得奖学金的条件），请编程计算哪些同学获得的奖金总数最高。
结构体类型定义如下：
typedef struct winners
{

    char name[20];

    int finalScore;

    int classScore;

    char work;

    char west;

    int paper;

    int scholarship;

} WIN;
函数原型：void Addup(WIN stu[], int n);
函数原型：int FindMax(WIN student[], int n);
程序运行结果示例：
Input n:4↙
Input name:YaoMing↙
Input final score:87↙
Input class score:82↙
Class cadre or not?(Y/N):Y↙
Students from the West or not?(Y/N):N↙
Input the number of published papers:0↙
name:YaoMing,scholarship:4850
Input name:ChenRuiyi↙
Input final score:88↙
Input class score:78↙
Class cadre or not?(Y/N):N↙
Students from the West or not?(Y/N):Y↙
Input the number of published papers:1↙
name:ChenRuiyi,scholarship:9000
Input name:LiXin↙
Input final score:92↙
Input class score:88↙
Class cadre or not?(Y/N):N↙
Students from the West or not?(Y/N):N↙
Input the number of published papers:0↙
name:LiXin,scholarship:6000
Input name:ZhangQin↙
Input final score:83↙
Input class score:87↙
Class cadre or not?(Y/N):Y↙
Students from the West or not?(Y/N):N↙
Input the number of published papers:1↙
name:ZhangQin,scholarship:8850
ChenRuiyi get the highest scholarship 9000
输入学生人数提示："Input n:"
输入学生姓名提示："Input name:"
输入学生期末平均成绩提示："Input final score:"
输入学生班级评议成绩提示："Input class score:"
输入是否为学生干部提示："Class cadre or not?(Y/N):"
输入是否为西部学生提示："Students from the West or not?(Y/N):"
输入发表文章数量提示："Input the number of published papers:"
输入格式：
    输入学生人数："%d"
    输入学生姓名："%s"
    输入学生成绩："%d"
    输入是否为学生干部：" %c" （注意：%c前面有一个空格）
    输入是否为西部学生：" %c" （注意：%c前面有一个空格）
    输入发表文章数量： "%d"
输出格式：
     输出学生获得的奖学金：  "name:%s,scholarship:%d\n"
     输出获得奖学金总数最高的学生："%s get the highest scholarship %d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
*/