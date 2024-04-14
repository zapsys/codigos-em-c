// Algoritmo que imprime os 10 primeiros termos da sequência de Fibonacci
// Valores a serem impressos: 1 1 2 3 5 8 13 21 34 55
#include <stdio.h> // Biblioteca de entrada/saída de dados padrão

int main() {
    int cont = 0;  // Variável contadora do laço de repetição
    int n_atual = 1;  // Variável que armazena o termo atual da sequência (inicia com 1)
    int n_anter = 1;  // Variável que armazena o termo anterior da sequência (inicia com 1)
    int soma = 1;  // Variável que armazena a soma do termo atual + anterior

    while (cont < 10) {
        n_anter = n_atual;
        n_atual = soma;
        soma = n_atual + n_anter;
        cont++;  // Incrementa o contador a cada repetição igual a cont = cont + 1
        printf("%d ", n_anter);
    }
}

