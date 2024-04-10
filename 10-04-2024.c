#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um número: ");
  scanf("%i", &n);
  if (n % 2 == 0)
    // se o resto da divisão de n por 2 for igual a 0, então o número é par
    printf("Número par!\n");
  else
    printf("Número ímpar!\n");
  return 0;
}

// Exercício 3.
#include <stdio.h>

float calcularPesoIdeal(float altura, char genero) {
    if (genero == 'M' || genero == 'm') {
        return (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') {
        return (62.1 * altura) - 44.7;
    } else {
        printf("Gênero inválido! Por favor, insira M para masculino ou F para feminino.\n");
        return -1; // Retorna um valor negativo para indicar erro
    }
}

int main() {
    float altura, pesoIdeal;
    char genero;

    printf("Informe sua altura em centímetros: ");
    scanf("%f", &altura);

    printf("Informe seu gênero (M/F): ");
    scanf(" %c", &genero);

    pesoIdeal = calcularPesoIdeal(altura / 100, genero);

    if (pesoIdeal >= 0) {
        printf("Seu peso ideal é: %.2f kg.\n", pesoIdeal);
    }

    return 0;
}

// Exercício 4.
#include <stdio.h>

int main() {
    float peso_pescado, excesso = 0, multa = 0;

    printf("Informe a quantidade de pescado (em quilos): ");
    scanf("%f", &peso_pescado);

    if (peso_pescado > 50) {
        excesso = peso_pescado - 50;

        if (excesso > 0) {
            multa = excesso * 4; // Multa de R$ 4,00 por kg excedente
            printf("Excesso de %.2f quilos. Multa de R$ %.2f.\n", excesso, multa);
        }
    } else {
        printf("Pesca dentro do limite legal. Nenhuma multa aplicada.\n");
    }

    return 0;
}
