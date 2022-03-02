#include <stdio.h>
#define TAM 100

void malespin(char *expresion)
{
	for (int i = 0; i < TAM; i++)
	{
		switch(expresion[i])
		{
			case 'a':
				expresion[i] = 'e';
				break;
			case 'e':
				expresion[i] = 'a';
				break;
			case 'i':
				expresion[i] = 'o';
				break;
			case 'o':
				expresion[i] = 'i';
				break;
			case 'b':
				expresion[i] = 't';
				break;
			case 't':
				expresion[i] = 'b';
				break;
			case 'f':
				expresion[i] = 'g';
				break;
			case 'g':
				expresion[i] = 'f';
				break;
			case 'p':
				expresion[i] = 'm';
				break;
			case 'm':
				expresion[i] = 'p';
				break;
			default:
				break;
		}
	}
}

void main(void) 
{
	char palabra[TAM] = "";

	printf("PALABRA O FRASE\n");
	printf("> ");
	fgets(palabra, TAM, stdin);
	printf("INPUT: %s", palabra);

	malespin(palabra);

	puts("Malespin\n");
	puts(palabra);
}
