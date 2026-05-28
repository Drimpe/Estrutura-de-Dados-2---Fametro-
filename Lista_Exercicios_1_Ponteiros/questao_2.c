#include <stdio.h>

void encoMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    if (tamanho <= 0) return;
    *maior = array[0];
    *menor = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }
        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}

int main() {
    int tam;
    printf("elementos do array: ");
    scanf("%d", &tam);

    if (tam <= 0) {
        printf("tamanho invalido.\n");
        return 1;
    }

    int numeros[tam];
    for (int i = 0; i < tam; i++) {
        printf("valor para a posicao [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    int max, min;
    encoMaiorMenor(numeros, tam, &max, &min);
    printf("\nmaior elemento: %d\n", max);
    printf("menor elemento: %d\n", min);

    return 0;
}