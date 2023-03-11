#include <stdio.h>
/**
 * main - create a function pointer and invoke it (call it)
 * Return: 0 when successful
 */

int sum_(int x)
{
	return x + x;
}
int main(void)
{
	//use a pointer function
	int (*ptr)(int);
	int a;
	printf("Type in any number: ");
	scanf("%d", &a);
	ptr = &sum_;
	int result = (*ptr)(a);

	printf("The sum of %d added to itself is %d\n", a, result);
	return 0;
}
