#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[80]="";
    printf("Please enter a string:\n");
    gets(str);
    enum Week { 
  Monday, 
  Tuesday, 
  Wednesday, 
  Thursday, 
  Friday, 
  Saturday, 
  Sunday 
            }; 
    if(strcmp(str, "Monday") == 0) {
    printf("%s is %d\n", str, Monday + 1);
}
else if(strcmp(str, "Tuesday") == 0) {
    printf("%s is %d\n", str, Tuesday + 1);
}
else if(strcmp(str, "Wednesday") == 0) {
    printf("%s is %d\n", str, Wednesday + 1);
}
else if(strcmp(str, "Thursday") == 0) {
    printf("%s is %d\n", str, Thursday + 1);
}
else if(strcmp(str, "Friday") == 0) {
    printf("%s is %d\n", str, Friday + 1);
}
else if(strcmp(str, "Saturday") == 0) {
    printf("%s is %d\n", str, Saturday + 1);
}
else if(strcmp(str, "Sunday") == 0) {
    printf("%s is %d\n", str, Sunday + 1);
}
else {
    printf("Not found!\n");
}

    return 0;
}
/*
题目内容：
任意输入英文的星期几，通过查找如图所示的星期表，输出其对应的数字，若查到表尾，仍未找到，则输出错误提示信息。
这里给出这个图的Tex形式:
\begin{table}[h]
    \begin{tabular}{|c|c|}
        \hline
        0 & Sunday\\
        \hline
        1 & Monday\\
        \hline
        2 & Tuesday \\
        \hline
        3 & Wednesday \\
        \hline
        4 & Thursday \\
        \hline
        5 & Friday \\
        \hline
        6 & Saturday\\
    \end{tabular}
\end{table}
提示：用一个二维字符数组weekDay来存放如图所示的星期表的内容（字符串）。输入待查找的字符串，然后在星期表中顺序查找与输入字符串相匹配的字符串。找到的字符串在星期表数组中的第一维下标（行号）即为题目所求。
程序运行结果示例1：
Please enter a string:
Friday↙
Friday is 5
程序运行结果示例2：
Please enter a string:
Fruday↙
Not found!
输入提示信息："Please enter a string:\n"
输入格式:  字符串输入采用gets()函数
输出格式：
找到了，输出："%s is %d\n"
没找到，输出："Not found!\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/