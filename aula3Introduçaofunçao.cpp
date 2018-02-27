#include<stdio.h>
/*void contagem_regressiva(int x, int y)
{
  int i;
  for(i=x;i>=y;i=i--)
    printf("\n%d ",i);
  printf("\nBoOoM!!");
}

int main()
{
  contagem_regressiva(10,5);
  contagem_regressiva(8,0);
  contagem_regressiva(5,-2);
  return 0;
}
int soma(int num1, int num2)
{
  return(num1+num2);
}

int main()
{
  int x,y,res;
  
  printf("Entre com um numero");
  scanf("%d",&x);
  
  printf("Entre com outro numero");
  scanf("%d",&y);
  
  res=soma(x,y);
  
  printf("%d",res);
  
  return 0;
}*/

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
      printf("entre com um numeros");
      scanf("%d",&z);
      printf("entre com outro numeros");
      scanf("%d",&y);
      x=soma(y,z);
    }
  if(x==2)
    {
      printf("entre com um numeros");
      scanf("%d",&z);
      printf("entre com outro numeros");
      scanf("%d",&y);
      x=sub(y,z);
    }
  if(x==0)
  {
    menu();
  }
  
  printf("%d",x);
  
}
