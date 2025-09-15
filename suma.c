#include <stdio.h>
int main()
{
  int num1;
  int num2;
  int resultado;
  printf ("Primer número:\n");
  scanf("%d",&num1);
  printf ("Segundo número:\n");
  scanf("%d",&num2);
  resultado = num1 + num2;
  printf ("Total: \n%d\n",resultado);

  return 0;
}
