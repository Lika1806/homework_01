#include <stdio.h>

int max(int,int);

int main()
{
	int num1;
	int num2;
	printf("Write first number: ");
	scanf("%d", &num1);
	printf("Write second number: ");
	scanf("%d", &num2);
	if (num1!=num2)
		printf("The largest number is: %d\n", max(num1,num2));
	else
		printf("The numbers are equal.\n");
	return 0;
}

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
