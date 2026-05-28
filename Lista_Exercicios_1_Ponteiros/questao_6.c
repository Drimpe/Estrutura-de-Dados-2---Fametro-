#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while (*str != '\0') {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        str++;
    }
}

int main() {
    char texto[100];
    int v, c;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);
    contarVogaisConsoantes(texto, &v, &c);
    printf("\nTexto digitado: %s", texto);
    printf("Vogais: %d\n", v);
    printf("Consoantes: %d\n", c);

    return 0;
}