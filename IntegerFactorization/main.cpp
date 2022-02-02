#include <stdio.h>
#include <stdlib.h>

#include "Console.h"

int main(void)
{
	int N;
	scanf_s("%d", &N);

	printf("%d =", N);
	for (int i = 2; i <= N; i++) {
		if (N % i == 0) {
			if (i == N) {
				printf(" %d", i);
			}
			else {
				printf(" %d *", i);
				N = N / i;
				i--;
			}			
		}
	}

	return 0;
}



// 소인수분해 : 소수들의 곱으로 표현
// 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47
// 2,3,5,7로 나뉘어 떨어지지 않음