// HomeWork3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>


int main()
{
	int n=121;
	int reverse = 0;
	int temp;
	temp = n;

	while (temp != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + temp % 10;
		temp = temp / 10;
	}

	if (n == reverse)
	{
		printf("%d Is palindrome.\n", n);
	}
	else
	{
		printf("%d is not palindrome.\n", n);
	}
	return 0;
}
