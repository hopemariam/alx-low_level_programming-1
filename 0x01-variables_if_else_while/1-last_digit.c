#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
*main - Print if number is positive, zero or negative
*
*Return: Always (success)
*/
int main(void)
{
int n;
char last[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;

	printf("%s %d is ", last,n,n % 10);

	if (n % 10 > 5)
	{
		printf("Greator than 5\n");
	}
	else if (n % 10 == 0)
	 
	{
		printf("0\n");
	}
	else
	{
		printd("less than 6 and not 0\n");
	}
	return (0);

}
