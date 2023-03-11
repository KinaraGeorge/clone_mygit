#include <stdio.h>
/**
 * main - pointers
 * Return: 0 when successful
 */
int main(void)
{
	int a = 2;
	int *ptr = &a;
	printf("%d\n", *ptr); //should show the address of the variable int a
	return 0;
}
