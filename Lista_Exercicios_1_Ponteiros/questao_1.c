#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

int main() {
    int val1, val2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);

    printf("\nValores originais: val1 = %d, val2 = %d\n", val1, val2);

    trocarValores(&val1, &val2);

    printf("Valores trocados: val1 = %d, val2 = %d\n", val1, val2);

    return 0;
}

