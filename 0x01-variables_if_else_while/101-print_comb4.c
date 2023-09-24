#include <stdio.h>

/**
 * main - 3digits combo
 * Return: Always return 0
 */
int main(void)
{
	int first_num = 0;
	int sec_num;
	int third_num;

	while (first_num <= 9)
	{
		sec_num = first_num + 1;
		while (sec_num <= 9)
		{
			third_num = sec_num + 1;
			while (third_num <= 9)
			{
				putchar('0' + first_num);
				putchar('0' + sec_num);
				putchar('0' + third_num);
				if (first_num != 7 || sec_num != 8 || third_num != 9)
				{
					putchar(',');
					putchar(' ');
				}
				third_num++;
			}
			sec_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
