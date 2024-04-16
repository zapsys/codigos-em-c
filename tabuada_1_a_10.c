// Algoritmo que imprime a tabuada de 1 a 10

#include <stdio.h> // Biblioteca de entrada/saída de dados padrão

int main() {
    int i, j;  // Definição das variáveis usadas para montar a tabuada
    
    for (i = 1; i < 11; i++) {  // 'i' iniciando em 1 indo até 10
        printf("---------------\n");
        printf("Tabuada do %d:\n", i);  // Cabeçalho para organizar as tabuadas
        printf("---------------\n");
        for (j = 1; j < 11; j++) {  // 'j' iniciando em 1 indo até 10
            printf("%d x %d = %d\n", i, j, i*j);  // Apresentação da tabuada
        }
    }
}