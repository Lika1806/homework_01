#include <stdio.h>
int main()
{
	int x;
	int y;
	printf("Input first number: ");
	scanf("%d", &x);
	printf("Input second  number: ");
	scanf("%d", &y);
	float result;
	result= x*y+21*x/y-200;
	printf("The result is %f\n", result);
//	printf("The result is %f\n", (float)(x*y+21*x/y-200)); vor dzevn e aveli npatakaharmar || chisht? 
	return 0;
}
