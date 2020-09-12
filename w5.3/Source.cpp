#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pyramid(int n)
{
	for (int x = 1; x <= n; x++)
	{
		for (int c = 1; c <= n - x; c++)
		{
			printf(" ");
		}

		for (int c = 1; c <= 2 * x - 1; c++)
		{
			printf("*");
		}

		printf("\n");
	}

}
int main()
{
	int  n;

	printf("Enter the number => ");
	scanf("%d", &n);
	pyramid(n);
	return 0;
}