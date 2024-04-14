// Algoritmo que verifica se um número informado pelo usuário é primo ou não

#include <stdio.h> // Biblioteca de entrada/saída de dados padrão

int main() {
    int num;  // Número inteiro informado
    int i = 1;  // Variável de controle
    int count = 0;  // Varíavel para contar o divisores

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    while (i <= num) {
        if ((num % i) == 0) {
            count++;
        }
        i++;
    }
    if (count < 2 || count > 2) {
        printf("O número %d não é primo\n", num);
    }
    else {
        printf("O número %d é primo\n", num);
    }
}