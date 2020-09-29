#include <stdio.h> //chamada  da biblioteca principal da linguagem C para entrada e saída
int i, j, k; //declaração das variáveis do tipo inteiro

void main(){ //entrada do método principal
	
	for (i=0, j=2, k=4; i<k;i++){ //início da estrutura de repetição "para"
		
		k=k+i%2; //atribuição da soma e da modulação % da operação
	}
	printf("%d, %d, %d", i, j, k); //impressão das variaveis do tipo inteiro
} // finalização do método principal
