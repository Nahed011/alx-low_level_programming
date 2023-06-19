#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 * different combinations of two digits
 * Return: Always 0 (success)
*/

int main(void)
{
	int firstDigit = 0, secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (second Digit <= 99)
		{
			if (srcondDigit != first Digit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
