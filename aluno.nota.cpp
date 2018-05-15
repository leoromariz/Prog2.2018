#include<stdio.h>
#include<string.h>

typedef struct aluno{
	char nome[100];
	float nota;
}aluno;

void ler (aluno *x)
{
	printf("Entre com o nome do aluno: ");
	scanf("%s",&x->nome);
	printf("Entre com a nota do aluno: ");
	scanf("%f",&x->nota);
}

void imprime(aluno x)
{
	printf("\nNome: %s",x.nome);
	printf("\nNota: %.2f",x.nota);
}

int main()
{
	aluno a;
	aluno b;
	
	ler(&a);
	ler(&b);
	
	imprime(a);
	imprime(b);
	
	return 0;
}

