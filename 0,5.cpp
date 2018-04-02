#include<stdio.h>
#include<string.h>

//Faça um programa que mostre o número de letras contidos na frase

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
	
	printf("\nNúmero de letras na frase: %d",cont);
	
	return 0;		
}
