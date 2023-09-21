// HomeWork5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	int d = sizeof(a) / sizeof(a[0]);

	for (int k = 0; k < d; k++){
		a[k] = rand();
	}

	for (int j = 0; j < d; j++) {
		int b;
		for (int i = 0; i < d - 1; i++) 
		{

			if (a[i] > a[i + 1]) 
			{

				b = a[i];

				a[i] = a[i + 1];

				a[i + 1] = b;
			}
		}
		printf("%d\n", a[j]);
	}
	printf("\n");
	for (int j = 0; j < d; j++)
	{
		int s;
		for (int i = 0; i < d/2; i++)
		{
			if (a[i] < a[i + 1])
			{
				s = a[i];
				a[i] = a[d-i - 1];
				a[d-i - 1] = s;
			}
		}
		printf("%d\n", a[j]);
	}
	
}
