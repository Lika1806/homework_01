#include <stdio.h>
void check (char letter);
int main()
{
	char sym;
	printf("Input a letter: ");
	scanf(" %c", &sym);
	if((sym>=65 && sym<=90) || (sym>=97 && sym<=122))
		check(sym);
	else printf("The input is not a letter\n");
}
void check (char letter)
{
	switch (letter)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
			printf("The letter is a VOWEL.\n");
			break;
		default:
			printf("The letter is a CONSONANT.\n");
	}
}

