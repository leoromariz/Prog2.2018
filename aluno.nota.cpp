#include<stdio.h>
#include<string.h>

typedef struct aluno{
	char nome[100];
	float av1;
	float av2;
}aluno;

void ler (aluno *x)
{
	printf("Entre com o nome do aluno: ");
	scanf("%s",x->nome);
	printf("Entre com a Av1 do aluno: ");
	scanf("%f",&x->av1);
	printf("Entre com a Av2 do aluno: ");
	scanf("%f",&x->av2);
}

void imprime(aluno x)
{
	
	printf("\n%s	%.2f	%.2f",x.nome,x.av1,x.av2);
	if(x.av1+x.av2<12)
	{
		printf("	Av3\n\n");
	}
	else
	{
		printf("	Passou\n\n");
	}
}

int main()
{
	aluno a[3];
	for(int i=0;i<3;i++)
	{
		ler(&a[i]);
	}
	printf("\n***************************************\n");
	printf("\n\nRelatório Prcial da AV2\n\n");
	printf("\n***************************************\n");
	printf("\n\nNome	Av1	Av2	Resultado\n\n");
	printf("\n=======================================\n");
	for(int i=0;i<3;i++)
	{
		imprime(a[i]);
	}
	
	return 0;
}

