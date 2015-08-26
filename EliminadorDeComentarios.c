/*
Implementacion del tp6
Grupo 7
20 de agosto del 2015
*/

#include <stdio.h>

int main(void)
{
	char c;
	
	goto PCDC;
	
	CC:
		switch (c = getchar())	{
			case '/':
				goto PCDC;
			default:
				putchar(c);
                goto cc;
		}
	
	PCDC:
		switch (c = getchar())	{
			case '/':
				goto PCDC;
			case '*':
				goto DOC;
			default:
				putchar(c);
				goto CC;
		}
	
	DOC:
		switch (c = getchar())	{
		case '/':
			goto DOC;
		case '*':
			goto PFDC;
		default:
			goto DOC;
		}
	
	PFDC:
		switch (c = getchar())	{
		case '*':
			goto PFDC;
		case '/':
			goto PCDC;
		default:
			goto DOC;
		}
}


