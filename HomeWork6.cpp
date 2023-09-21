// HomeWork6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include"stdlib.h"
#include<math.h>
int main()
{
    const int n = 5;
    int mas[n];
    for (int i = 0; i < n; i++) {
        mas[i] = rand();
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", mas[i]);
    }

    int a = 1;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0)
            a*=mas[i];
    }
    printf("\n%d\n",a);
}


