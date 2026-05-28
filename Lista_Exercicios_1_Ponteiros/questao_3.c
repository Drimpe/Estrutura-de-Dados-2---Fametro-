#include <stdio.h>

int main() {
    int var = 42;
    int *pon = &var;

    printf("Valor da var: %d\n", var);
    printf("Endereco da variavel (&var): %p\n", (void*)&var);
    printf("Valor do ponteiro (pon): %p\n", (void*)pon);
    printf("Valor que o ponteiro aponta (*pon): %d\n", *pon);

    return 0;
}
