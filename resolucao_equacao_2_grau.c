/* 
Algoritmo que imprime as raźes de uma equação do segundo grau

Equação: ax² + bx + c = 0, onde a, b e c são números inteiros

Considerações para resolução: Uso da fórmula de Bháskara

delta = (b² - 4*a*c)

- Se delta = 0 => Duas raízes reais e iguais
- Se delta > 0 => Duas raízes reais e diferentes
- Se delta < 0 => Duas raízes imaginárias

Raízes:
x' = (-b + sqrt(delta))/(2*a)
x'' = (-b - sqrt(delta))/(2*a)

- Uso da biblioteca <math.h> para suporte à funções matemáticas básicas.

- A função raiz quadrada -> sqrt() exige um parâmetro no formato double, 
por isso, usa-se (double) na frente da variável para fazer a conversão.

- Quando se tem delta > 0 ou delta < 0 podemos ter a parte real como um decimal,
então deve-se converter para double para mostrar corretamente todos os possíveis
resultados.

- No caso de delta < 0, multiplcamos por (-1) para realizar o cálculo da raiz, ao
imprimir substituímos por 'i' (número imaginário) que representa a raiz de -1.

*/
#include <stdio.h>  // Biblioteca de entrada/saída de dados padrão
#include <math.h>  // Biblioteca de funções matemáticas básicas

int main(){
    int a, b, c, delta;

    printf("Informe os coeficientes da equação do 2º grau (a, b e c), respectivamente: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b*b - 4*a*c;  // Definição da fórmula para cálculo de delta 
    
    if (delta == 0) {  // sqrt(0) = 0
        printf("Duas raízes reais e iguais.\n");
        printf("x' = %d\n", -b/(2*a));
        printf("x'' = %d\n", -b/(2*a));
    }
    else if (delta > 0) {
        printf("Duas raízes reais e diferentes.\n");
        printf("x' = %lf\n", (-b - sqrt((double)delta))/(2*a));
        printf("x'' = %lf\n", (-b + sqrt((double)delta))/(2*a));
    }
    else {
        printf("Duas raízes no plano complexo.\n");
        printf("x' = %lf - %lf*i\n", (double)-b/(2*a), sqrt((double)-delta)/(2*a));
        printf("x'' = %lf + %lf*i\n", (double)-b/(2*a), sqrt((double)-delta)/(2*a));
    }
}