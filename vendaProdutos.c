/*
    Descrição   : Programa de venda de produtos a partir de um menu com estoque fixo
    Autor       : Aram Zap
    Data atual  : 04/08/2022
*/
#include <stdio.h>

// Declaração das variáveis
int agua, refrigerante, vinho, suco, cerveja;
int qtd, item;

int main()
{
    // Atribui o valor do estoque inicial para cada um dos produtos igual a 10
    agua = 10;
    refrigerante = 10;
    vinho = 10;
    suco = 10;
    cerveja = 10;

    // Laço de repetição 'do-while' repete enquanto o estoque é maior que zero para cada produto
    do
    {
        // Menu para selecionar o produto desejado
        printf("Selecione o produto desejado: ");
        printf("\n-------------------------------\n");
        printf("Produto  .  Estoque  .  Código\n");
        printf("-------------------------------\n");
        if (agua > 0)
        {
            printf("Água         | %d |  - digite 1\n", agua);
        }
        if (refrigerante > 0)
        {
            printf("Refrigerante | %d |  - digite 2\n", refrigerante);
        }
        if (vinho > 0)
        {
            printf("Vinho        | %d |  - digite 3\n", vinho);
        }
        if (suco > 0)
        {
            printf("Suco         | %d |  - digite 4\n", suco);
        }
        if (cerveja > 0)
        {
            printf("Cerveja      | %d |  - digite 5\n", cerveja);
        }
        printf("-------------------------------\n");
        printf("Para sair digite [CTRL+C]");
        printf("\n\nDigite o código do produto: ");
        scanf("%d", &item);

        while ((item > 5) || (item < 1))
        {
            printf("\nCódigo inválido! Tente novamente!\n");
            scanf("%d", &item);
        }

        // Solicitada a quantidade para o produto escolhido
        printf("\n");
        printf("Informe a quantidade desejada: ");
        scanf("%d", &qtd);

        // Avalia o quantidade definida e avalia se excede o estoque
        if (qtd > 10)
        {
            printf("\n");
            printf("-------------------------------------------------------\n");
            printf("Quantidade indisponível no estoque, tente um valor menor.\n");
            printf("-------------------------------------------------------\n");
            printf("\n");
        }
        // Senão avalia o item escolhido e faz a subtração do estoque
        else
        {
            if (item == 1)
            {
                agua = (agua - qtd);
                if (agua < 0)
                {
                    printf("\n");
                    printf("-------------------------------------------------------\n");
                    printf("Quantidade indisponível, tente um valor menor.\n");
                    printf("-------------------------------------------------------\n");
                    printf("\n");
                    agua = agua + qtd; // retorna a qtd anterior para nova tentativa
                }
                else
                {
                    printf("\n");
                    printf("-------------------------------------------------------\n");
                    printf("Venda realizada com sucesso! Obrigado pela preferência.\n");
                    printf("-------------------------------------------------------\n");
                    printf("\n");
                }
            }
            else
            {
                if (item == 2)
                {
                    refrigerante = refrigerante - qtd;
                    if (refrigerante < 0)
                    {
                        printf("\n");
                        printf("-------------------------------------------------------\n");
                        printf("Quantidade indisponível, tente um valor menor.\n");
                        printf("-------------------------------------------------------\n");
                        printf("\n");
                        refrigerante = refrigerante + qtd;
                    }
                    else
                    {
                        printf("\n");
                        printf("-------------------------------------------------------\n");
                        printf("Venda realizada com sucesso! Obrigado pela preferência.\n");
                        printf("-------------------------------------------------------\n");
                        printf("\n");
                    }
                }
                else
                {
                    if (item == 3)
                    {
                        vinho = vinho - qtd;
                        if (vinho < 0)
                        {
                            printf("\n");
                            printf("-------------------------------------------------------\n");
                            printf("Quantidade indisponível, tente um valor menor.\n");
                            printf("-------------------------------------------------------\n");
                            printf("\n");
                            vinho = vinho + qtd;
                        }
                        else
                        {
                            printf("\n");
                            printf("-------------------------------------------------------\n");
                            printf("Venda realizada com sucesso! Obrigado pela preferência.\n");
                            printf("-------------------------------------------------------\n");
                            printf("\n");
                        }
                    }
                    else
                    {
                        if (item == 4)
                        {
                            suco = suco - qtd;
                            if (suco < 0)
                            {
                                printf("\n");
                                printf("-------------------------------------------------------\n");
                                printf("Quantidade indisponível, tente um valor menor.\n");
                                printf("-------------------------------------------------------\n");
                                printf("\n");
                                suco = suco + qtd;
                            }
                            else
                            {
                                printf("\n");
                                printf("-------------------------------------------------------\n");
                                printf("Venda realizada com sucesso! Obrigado pela preferência.\n");
                                printf("-------------------------------------------------------\n");
                                printf("\n");
                            }
                        }
                        else
                        {
                            if (item == 5)
                            {
                                cerveja = cerveja - qtd;
                                if (cerveja < 0)
                                {
                                    printf("\n");
                                    printf("-------------------------------------------------------\n");
                                    printf("Quantidade indisponível, tente um valor menor.\n");
                                    printf("-------------------------------------------------------\n");
                                    printf("\n");
                                    cerveja = cerveja + qtd;
                                }
                                else
                                {
                                    printf("\n");
                                    printf("-------------------------------------------------------\n");
                                    printf("Venda realizada com sucesso! Obrigado pela preferência.\n");
                                    printf("-------------------------------------------------------\n");
                                    printf("\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    } while ((cerveja > 0) || (suco > 0) || (vinho > 0) || (refrigerante > 0) || (agua > 0));
    // Mostra informaçãoo que não há mais produtos em estoque
    printf("------------------------\n");
    printf("Sem produtos no estoque.\n");
    printf("------------------------\n");

    return 0; //Encerra o programa com sucesso
}