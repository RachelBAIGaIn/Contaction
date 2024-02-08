#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>

/*
定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
输入格式：两个数，空格隔开   1 2
输出格式：交换后的两个数，空格隔开   2 1
*/

//#include <math.h>
#define CHANGE(X,Y) z=X,X=Y,Y=z;
int main()
{
    int x, y, z;
    scanf("%d %d", &x, &y);
    CHANGE(x, y);
    printf("%d %d", x, y);
    return 0;
}