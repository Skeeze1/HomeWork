// HomeWork2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int nums[4] = { 2,7,11,15 };
    int x[2];
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    for (int i = 0; i < size;i++) {
        for (int j = 0; j + 1 < size;j++) {
            if (target == nums[i] + nums[j])
            {
                x[0] = j;
                x[1] = i;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Index = %d\n", x[i]);
    }

}
