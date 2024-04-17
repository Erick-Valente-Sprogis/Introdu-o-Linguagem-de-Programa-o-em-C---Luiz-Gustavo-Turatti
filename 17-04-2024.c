//9.4.1
#include<stdio.h>

int main() {
    float num, maior = 0;
    int continuar = 1; // Variável adicional para verificar o critério de parada

    printf("Digite uma sequência de números (0 para terminar):\n");

    do {
        printf("Digite um número: ");
        scanf("%f", &num);

        if (num > maior) {
            maior = num;
        }

        if (num == 0) {
            continuar = 0; // Definir a variável para 0 para parar o loop
        }

    } while (continuar);

    printf("O maior número digitado foi: %f\n", maior);

    return 0;
}


//9.4.2
#include <math.h>
#include <stdio.h>

int main() {
  int total_graos = 0;
  int quadro = 64; // número total de casas no tabuleiro de xadrez

  for (int i = 1; i <= quadro; i++) {
    total_graos += pow(i, 2);
  }

  printf("O monge esperava receber %d grãos de trigo\n", total_graos);

  return 0;
}


//9.4.3
#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
    if (i % 10 == 0) {
      printf("Múltiplo de 10\n");
    }
  }
  return 0;
}


//9.4.4
#include <stdio.h>

int main() {
  int M;

  printf("Digite o número de linhas (M): ");
  scanf("%d", &M);

  for (int i = 1; i <= M; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
