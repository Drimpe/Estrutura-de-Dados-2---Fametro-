#include <stdio.h>

void calculadora(float n1, float n2, float *soma, float *sub, float *mult, float *div) {
    *soma = n1 + n2;
    *sub = n1 - n2;
    *mult = n1 * n2;
    
    if (n2 != 0.0f) {
        *div = n1 / n2;
    } else {
        *div = 0.0f; 
    }
}

int main() {
    float a, b;
    float s, sub, m, d;

    printf("Digite o primeiro numero (ponto flutuante): ");
    scanf("%f", &a);
    printf("Digite o segundo numero (ponto flutuante): ");
    scanf("%f", &b);

    calculadora(a, b, &s, &sub, &m, &d);

    printf("\nResultados:\n");
    printf("Soma: %.2f\n", s);
    printf("Subtracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", m);
    
    if (b != 0.0f) {
        printf("Divisao: %.2f\n", d);
    } else {
        printf("Divisao: Nao e possivel dividir por zero.\n");
    }

    return 0;
}