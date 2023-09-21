

#include <iostream>

int main()
{
    int k = 2;
    int m = 4;
    int n = 5;
    int sum = k % 2 + m % 2 + n % 2;
    if (sum == 3) {
        k *= k;
        m *= m;
        n *= n;
    }
    if (sum == 2) {
        if (m % 2 == 0) m++;
        if (n % 2 == 0) n++;
        if (k % 2 == 0) k++;
    }
    if (sum == 1) {
		if (m % 2 == 1){
			m *= 2;
		}
		if (n % 2 == 1){
			n *= 2;
		}
		if (k % 2 == 1){
			k *= 2;
		}
    }
    printf("K=%d\nM=%d\nN=%d\n", k, m, n);
}


