#include <stdio.h>

int main(void) {
  float av1, av2, av3, media = 0;
  printf("\n Informe a nota da AV1: ");
  scanf("%f", &av1);
  printf("\n Informe a nota da AV2: ");
  scanf("%f", &av2);
  media = (av1 + av2) / 2;
  printf("Media %.2f", media);
  if (media >= 7)
    printf("\nAprovado");
  /* else if (media < 5)
    printf("\nReprovado"); */
  else
    printf("\nRecuperação");

  /* Código para calcular media após recuperação */

  if (media < 5)
    printf("\nReprovado");
  else if (media < 7) {
      printf("\n Informe a nota de recuperação: ");
      scanf("%f", &av3);
      if (av1 > av2)
        media = (av1 + av3) / 2;
      else
        media = (av2 + av3) / 2;
      printf("\nMedia %.2f", media);
    }  
  
if (media >= 7)
    printf("\nAprovado");
  else
    printf("\nReprovado apos recupercao");
  return 0;
}
