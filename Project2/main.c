#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>

/*
����һ�����εĺ꣬ʹ����������ֵ��������д������������������Ϊʹ�ú�ʱ��ʵ�Ρ�����ѽ����������ֵ��
�����ʽ�����������ո����   1 2
�����ʽ������������������ո����   2 1
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