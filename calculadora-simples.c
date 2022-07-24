#include <stdio.h>                              //  Biblioteca de entrada e saída (Input/Output)
#include <locale.h>                             //  Biblioteca de localização (idioma do teclado)
#include <stdlib.h>                             //  Biblioteca padrão do C

float calcula(float a, float b, char c)         //  Função com 3 parâmetros que retorno um número do tipo float
{
    float resultado;                            //  Declaração de variável e tipo
    switch(c)                                   //  Início do laço de repetição (switch/case)
    {
        case'+':                                //  Caso sinal de + retorna a soma de a e b
            resultado = (a+b);
            break;                              //  Término da operação
        case'-':                                //  Caso sinal de - retorna a subtração de a e b
            resultado = (a-b);                  
            break;                              //  Término da operação
        case'*':                                //  Caso sinal de * retorna a multilicação a por b
            resultado = (a*b);                  
            break;                              //  Término da operação
        case'/':                                //  Caso sinal de / retorna a divisão de a por b
            resultado = (a/b);                  
            break;                              //  Término da operação
        default:                                //  Padrão para o laço switch/case
            return (0);                         //  Retorno de nenhum valor
            break;                              //  Térmido da operação
    }
    return (resultado);                         //  Retorno do resultado final (após break em uma das operações)
}
int main()                                      //  Início da função principal (essa chama as demais funções)
{
    float n1, n2, resposta;                   	//  Declaração de variáveis do tipo float
    char sinal, opcao;                          //  Declaração de variáveis do tipo char (caractere)

    setlocale(LC_ALL,"Portuguese");             //  Define o local (idioma do teclado) para o português
    do                                          //  Início do laço de repetição do (faça)                     
    {
        system("clear");                        //  Limpa o terminal. Se windows use cls invés de clear
        
        printf("\nDigite o primeiro valor: ");  //  Solicita a digitação do primeiro número
        scanf("%f",&n1);                       	//  Lê o primeiro número
        
        printf("\nDigite o segundo valor: ");   //  Solicita a digitação do segundo número
        scanf("%f",&n2);                       	//  Lê o segundo número
		
		while ((getchar()) != '\n');			//  Limpa a sujeira do buffer (teclas anteriormente digitadas/quebra de linha)
		
        printf("\nDigite a operação (+-*/): "); //  Solicita a digitação da operação a ser realizada
                
        sinal = getchar();						//  Atribui a variável sinal à função getchar(). Se a função não funcionar no Windows use getch()
        
        while (n2 == 0 && sinal == '/') {		//	Avalia se n2 é 0 e se a operação é de divisão
			printf("\nDivisão por 0 não é possível");
			printf("\nDigite o segundo valor novamente: ");   //  Solicita a digitação do segundo número novamente
			scanf("%f",&n2);					//	Lê o segundo valor
		}
        resposta = calcula(n1,n2,sinal);      	//  Faz o cálculo usando a função com base nos valores fornecidos

        printf("\nResultado: %.2f",resposta);  	//  Mostra a resposta do cálculo com duas casas decimais %.2
		
		while ((getchar()) != '\n');			//  Limpa a sujeira do buffer (teclas anteriormente digitadas/quebra de linha)
		
        printf("\n\nDeseja continuar? (S/N): ");//	Imprime a pergunta se o usuário deseja continuar calculando ou não
        scanf("%c",&opcao);                     //	Lê a opção escolhida

    }   while (opcao == 'S' || opcao == 's');   // Continua executando o bloco caso 'S' ou 's' seja digitado
}
