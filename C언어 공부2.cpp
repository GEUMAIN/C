// Project4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

int main()
{
    printf("5*4-10=10\n");
    int a = 5, b = 4, c = 10;
    printf("%d * %d - %d = %d\n",a,b,c,a*b-c);
    a = a * b - c;
    printf("a의 메모리 = [%d] %d\n", &a, a);
    int a1 = 30;
    float b1 = 3.14;
    char c1 = 'A';
    printf("%d %f %c %a \n", a1, b1, c1);

}

