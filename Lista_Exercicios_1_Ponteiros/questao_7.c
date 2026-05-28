#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    char *inicio = str;
    char *fim = str;

    while (*fim != '\0') {
        fim++;
    }
    fim--;
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra ou frase para inverter: ");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';
    printf("Original: %s\n", palavra);
    inverterString(palavra);
    printf("Invertida: %s\n", palavra);

    return 0;
}