#include<stdio.h>

/**
*main - Ommit some alphabet
*
*Return: Always (success)
*/
int main(void)

{

	char c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	
	if(c != '9')
	{
	putchar(',');
	putchar('');	
	}
	}

	putchar('\n');
	return (0);
}
