#include <stdio.h>

void copiarString(char *origem, char *destino) {
    while ((*destino = *origem)) {
        origem++;
        destino++;
    }
}

int main() {
    char original[] = "Estrutura de Dados";
    char copia[50];

    copiarString(original, copia);

    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    return 0;
}