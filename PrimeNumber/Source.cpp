#include<stdio.h>
int main()
{
	int n, x = 0, i;
	do
	{
		printf("Input Number : ");
		scanf_s("%d", &n);
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				x++;
			}
		}
		if (x > 0 || n == 1 || n <= 0)
		{
			printf("%d is not a Prime Number\n", n);
		}
		else
		{
			printf("%d is a Prime Number\n", n);
		}
		x = 0;
	} while (n != -99);
	return 0;
}