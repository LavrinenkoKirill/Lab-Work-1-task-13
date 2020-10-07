#include <stdio.h>
int main()
{
	int N, i, j, simple;
	int t = 1;
	printf("Input N: ");
	scanf("%d", &N);
	printf("All simple numbers from 2 to %d\n ", N);
	for (i = 2; i <= N; i++)
	{
		simple = 1;
		for (j = 2; j <= (i / 2); j++)
		{
			if (i % j == 0)
			{
				simple = 0;
				break;
			}
		}
		if (simple == 1) printf("%d ", i);
	}
}