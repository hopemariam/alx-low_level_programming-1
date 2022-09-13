#include<stdio.h>

/**
*main - prints sindle digit numbers starting from 0
*
*Return: Always (success)
*/
int main(void)

{

	int i, j;

	for (i = '0'; i <= '9'; i++)
	
	{
		for (i = 1; j <= 9 j++)

		{
			if (j>i)

			{
				
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)

				putchar( ',' );
				putchar( ' ');

			}				
		}
		
	}
}
	putchar('\n');
	return (0);
}
