#include <stdio.h>
int main()
{
	char sym;
	printf("Input the symbol: ");
	scanf(" %c", &sym);
	if(sym>=48 && sym<=57)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
