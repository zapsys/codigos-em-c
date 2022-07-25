/* Inclusão das bibliotecas */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Variável G que referencia os elementos da struct 'gastos' */
struct gastos G;

/* Estrutura de dados heterogênea. Registro 'gastos' */
struct gastos {
	int meses[12];
	float despesas[10][12];  /* 120 posições referente a até 10 despesas por mês. Total 10 * 12 */
	float soma;				/* soma das despesas nos 12 meses */
};

/* Protótipos das funções */
void exibeMes(int);
void exibeGastos(int);

/* Função que retorna o mês (string) */
void exibeMes(int mes) {
	switch (mes) {
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Março\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/* Função que retorna os gastos do mês e o total de gastos no ano */
void exibeGastos(int contador) {
	int i,j;
	float soma;
	G.soma = 0;
	soma = 0;
	for (i=1;i<=12;i++){
		printf("\nDespesas no mês de ");
		exibeMes(i);
		printf("\n-----------------------------\n");
		for (j=0;j<10;j++){
			printf("Despesa [%d]  => R$ %.2f\n", j + 1, G.despesas[j][i - 1]);
			G.soma = G.soma + G.despesas[j][i - 1];
		}
		soma = soma + G.soma;
		printf("-----------------------------\n");
		printf("\nTotal do mês => R$ %.2f\n", G.soma);
		printf("\n-----------------------------\n");
		G.soma = 0;
		}
	printf("\nDespesas do ano :\n");
	printf("\n-----------------------------\n");
	printf("\nQtde de gastos  => %d", contador);
	printf("\nValor de gastos => R$ %.2f\n", soma);
	printf("\n-----------------------------\n");
}
/* Função principal */
int main() {
/* limpeza do terminal. Se windows usar 'cls' */
system("clear");
/* Ajuste do idioma */
setlocale(LC_ALL, "Portuguese");

int mes, despesa, qtd, contador;
contador = 0;
	/* Laço de repetição que solicita o mês de referência para os gastos */
	for (mes=1;mes<=12;mes++){
		printf("\nMês de referência [%d a 12]: ", mes);
		scanf("%d", &mes);
		printf("\nQuantidade de despesas do mês [1 a 10]: ");
		scanf("%d", &qtd);
		while (qtd > 10) {
			printf("\nSão aceitas no máx. 10 despesas. Tente novamente!\n\n");
			scanf("%d",&qtd);
		}
		/* Laço de repetição que solicita a quantidade de despesas no mês */
		for (despesa=0;despesa<qtd; despesa++){
			printf("\nDespesa %d: ", despesa + 1);
			scanf("%f", &G.despesas[despesa][mes - 1]);
			contador++;
		}
		system("clear");
		exibeGastos(contador);
	}
printf("\n\nSucesso! Fim do programa\n");
}