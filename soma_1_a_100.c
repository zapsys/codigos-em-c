// Algoritmo que soma todos os números inteiros de 1 a 100
// Conhecido com soma de Gauss
#include <stdio.h> // Biblioteca de entrada/saída de dados padrão

int main() {
    int cont = 0;  // Contador usado no laço de repetição
    int num = 1;  // Número da sequência iniciando em 1
    int soma = 0;  // Variável soma iniciando em 0

    while (cont < 100) {
        soma = soma + num;
        cont++;  // Incrementa o contador até 99
        num++;  // Acresce em 1 unidade o número da sequência a partir de 1 (2, 3, ...)
    }
    printf("A soma dos números de 1 a 100 é: %d\n", soma);
}