// Algoritmo que calcula o MDC (máximo divisor comum) entre dois números inteiros positivos

#include <stdio.h> // Biblioteca de entrada/saída de dados padrão

int main() {
    int n1, n2, n;  // Definição das variáveis de entrada
    int mdc = 1;  // Definição do valor padrão do mdc
    int resto_1, resto_2; // Definição das variáveis resto
    int i;  // Definição do iterador

    printf("Informe o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Informe o segundo número inteiro: ");
    scanf("%d", &n2);

    if (n1 > n2) {  // Avalia se n1 é maior que n2
        n = n1;     // Define o valor de n igual a n1
    }
    else {          // Senão
        n = n2;     // Define o valor de n igual a n2
    }
    for (i = 1; i < n; i++) {  // Loop de 1 até o maior valor
        resto_1 = n1 % i;      // Calcula o resto da divisão
        resto_2 = n2 % i;

        if (resto_1 == 0 && resto_2 == 0) { // Se ambos os restos forem zero
            if (i > mdc) {  // E se o iterador (divisor) for maior que o mdc definido
                mdc = i;    // Define o valor de mdc igual ao divisor
            }
        }
    }
    return printf("O MDC entre %d e %d é %d.\n", n1, n2, mdc);
}