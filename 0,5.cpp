#include<stdio.h>
#include<string.h>

//Fa�a um programa que mostre o n�mero de letras contidos na frase

int main()
{
	char frase[100];
	int i,j,cont=0;
	
	printf("Entre com uma frase: ");
	gets(frase);
	
	j=strlen(frase);
	
	for(i=0;i<j;i++)
	{
		if(frase[i]!=' ')
		{
			cont++;
		}
	}
	
	printf("\nN�mero de letras na frase: %d",cont);
	
	return 0;		
}
