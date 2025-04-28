//Autor: Leonardo Balan
//LaGrange.c

#include <stdio.h>

int main (){
    
    int n, i, j;
    float x, y;
    float coef;
    
  printf("===============================\n");
  printf ("informe a quantidade de pares de pontos:\n");
  scanf ("%i", &n);

  float vetX[n];
  float vetY[n];
  float coefs[n];

printf("===============================\n");
printf ("Informe os valores de x:\n");
  for (i = 0; i < n; i++)
    {
      printf ("x[%i]: ", i + 1);
      scanf ("%f", &vetX[i]);
    }
printf("===============================\n");
printf ("Informe os valores de y\n");
  for (i = 0; i < n; i++)
    {
      printf ("y[%i]: ", i + 1);
      scanf ("%f", &vetY[i]);
    }
printf("===============================\n");
  printf ("informe o valor do ponto X: ");
  scanf ("%f", &x);
printf("===============================\n");
  for (i = 0; i < n; i++)
    {
      coef = 1;


      for (j = 0; j < n; j++)
	{
	  if (i != j)
	    {
	      coef = coef * ((x - vetX[j]) / (vetX[i] - vetX[j]));
	    }

	  coefs[i] = coef;
	}
    }
  y = 0;

  for (i = 0; i < n; i++)
    {
      y = y + coefs[i] * vetY[i];

    }

  printf ("O valor interpolado de y é: %.2f\n", y);


return 0;
}






