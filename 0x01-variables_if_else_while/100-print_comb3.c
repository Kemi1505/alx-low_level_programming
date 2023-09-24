#include <stdio.h>

/**
 * main - 2digits combination
 * Return: Always return 0
 */
int main(void)
{
	int first_num = 0;
	int sec_num;

	while (first_num <= 8)
	{
		sec_num = first_num + 1;
		while (sec_num <= 9)
		{
			putchar('0' + first_num);
			putchar('0' + sec_num);
			if (first_num  != 8 || sec_num != 9)
			{
				putchar(',');
				putchar(' ');
			}
			sec_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
