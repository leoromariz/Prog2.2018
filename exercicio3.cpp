#include<stdio.h>

int soma(int num1,int num2)
{
  return(num1+num2);
}
int sub(int num1,int num2)
{
  return(num1-num2);
}
int sair()
{
  return 0;
}
int menu()
{
  int opc;
  
  printf("***************\n\nCalculadora\n\n***************");
  printf("\n\n1- Soma\n\n2-Subtração\n\n0-Sair");
  printf("\n\n***************\n\nEscolha sua Opção:");
  
  scanf("%d",&opc);
  
}
int main()
{
  
  int x,y,z;
  
  x=menu();
  
  if(x==1)
    {
      printf("Entre com um numeros");
      scanf("%d",&z);
      printf("Entre com outro numeros");
      scanf("%d",&y);
      x=soma(y,z);
    }
  if(x==2)
    {
      printf("Entre com um numeros");
      scanf("%d",&z);
      printf("Entre com outro numeros");
      scanf("%d",&y);
      x=sub(y,z);
    }
  if(x==0)
  {
    menu();
  }
  
  printf("%d",x);
  
  return 0;
}
