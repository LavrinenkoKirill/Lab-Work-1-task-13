#include <stdio.h>
int main()
{
	int N, j;
	int i = 2;
	int count_of_prime = 0;
	int count = 0;
	printf("Input N : ");
	scanf("%d", &N);
	printf("All simple numbers from %d to %d : ", i, N);
	for (i = 2; i <= N; i++) {
		int simple = 1;
		for (j = 2; j <= i / 2; j++) {
			if (i % j == 0) simple = 0;
		}
		if (simple == 1) {
			printf("%d ", i);
			count_of_prime++;
		}
		else count++;
	}
	printf("\n");
	printf("%d is count of prime ", count_of_prime);
	printf("\n");
	printf("%d is count of sost ", count);
	printf("\n");
	printf("%d : %d", count_of_prime, count);
}