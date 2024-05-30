#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Define o tamanho do vetor
    int n = 6;
    int vetor[n];

    // Inicializa o gerador de números aleatórios com uma semente baseada no tempo
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e 99
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }

    // Imprime o vetor
    printf("Vetor sem ordenação:\n");
    printArray(vetor, n);

    // Ordena o vetor
    bubbleSort(vetor, n);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    printArray(vetor, n);

    return 0;
}
