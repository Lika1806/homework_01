#include <stdio.h>

int max(int,int);

int main()
{
	int num1;
	int num2;
	int num3;
	printf("Write first number: ");
	scanf("%d", &num1);
	printf("Write second number: ");
	scanf("%d", &num2);
	printf("Write third number: ");
	scanf("%d", &num3);
	if (num1!=num2 && num2!=num3 && num1!=num3)
		printf("All three numbers are different");
	else if (num1==num2 && num2==num3 && num3==num1)
		printf("The numbers are equal.\n");
	else
		printf("The largest number is: %d\n", max(num1, max(num2, num3)));
	return 0;
}

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
