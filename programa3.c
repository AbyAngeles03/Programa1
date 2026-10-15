/*Angeles Perez Abril Monserrat
Ejercicio 3
PAres o impares*/

#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un número:\n");
    scanf("%d",&num);
      if ( num%2 == 0 )
        {
          printf("El número %d es par.\n",num);
        }    
      else
        {
          printf("El número %d es impar.\n",num);
        }
  return 0;
}
