#include <stdio.h>

void dobrar(int *numero) {
    *numero = (*numero) * 2;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Valor original: %d\n", num);
    dobrar(&num);

    printf("Valor dobrado: %d\n", num);

    return 0;
}