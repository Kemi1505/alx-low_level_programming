#include <stdio.h>

/**
 * main - Entry program
 * Return: Always return 0
 */
int main(void)
{
	int first_dig;
	int sec_dig;

	for (first_dig = 0; first_dig <= 98; first_dig++)
	{
		for (sec_dig = first_dig + 1; sec_dig <= 99; sec_dig++)
		{
			putchar((first_dig / 10) + '0');
			putchar((first_dig % 10) + '0');
			putchar(' ');
			putchar((sec_dig / 10) + '0');
			putchar((sec_dig % 10) + '0');
			if (first_dig == 98 && sec_dig == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


