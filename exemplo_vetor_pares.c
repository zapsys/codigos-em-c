/* Vetor 'lista' com 25 pares de uma lista de 50 elementos */
#include <stdio.h>
int main(){
int i, lista[50];
for (i = 0; i < 50; i++) {
       lista[i] = i++;
       printf("%d ",lista[i]);
}
return 0;
}

