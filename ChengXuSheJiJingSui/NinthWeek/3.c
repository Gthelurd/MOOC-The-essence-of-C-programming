#include <stdio.h>
#define M 100
#define N 100

void FindSaddlePoint(int a[][N], int m, int n);

int main(void)
{
    int m, n, a[M][N];
    printf("Input m,n:\n");
    scanf( "%d,%d", &m, &n);
    printf("Input matrix:\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    FindSaddlePoint(a, m, n);

    return 0;
}

void FindSaddlePoint(int a[][N], int m, int n)
{
    int max, min, x, y, x1, y1;
    for(int i = 0; i < m; ++i)
    {
        max = a[i][0];
        x = i;
        y = 0;
        for(int j = 1; j < n; ++j)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                x = i;
                y = j;
            }

        }
        min = a[0][y];
        x1 = 0;
        y1 = y;
        for(int r = 0; r < m; ++r)
        {
            if(a[r][y] < min)
            {
                min = a[r][y];
                x1 = r;
                y1 = y;
            }
        }
        if(x == x1 && y == y1)
        {
            printf("a[%d][%d] is %d\n", x, y, a[x][y]);
            return;
        }
    }
    printf("No saddle point!\n");
    return;
}

/*
题目内容：
请编程找出一个M*N矩阵中的鞍点，即该位置上的元素是该行上的最大值，是该列上的最小值。如果矩阵中没有鞍点，则输出“No saddle point！”
已知函数原型：
void FindSaddlePoint(int a[][N], int m, int n);
在该函数中输出有无鞍点的信息。
程序运行结果示例1：
Input m,n:
3,3↙
Input matrix:
1 2 3↙
4 5 6↙
7 8 9↙
a[0][2] is 3
程序运行结果示例2：
Input m,n:
3,4↙
Input matrix:
3 4 7 5↙
0 1 8 2↙
9 3 2 6↙
No saddle point!
输入提示： "Input m,n:\n"
        “Input matrix:\n" 
输入格式: 
输入矩阵大小： "%d,%d"
输入矩阵元素： "%d"
输出格式：
找到鞍点的输出格式："a[%d][%d] is %d\n"
没找到鞍点的输出格式："No saddle point!\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
*/