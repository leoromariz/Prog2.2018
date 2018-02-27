#include<stdio.h>
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
}
