#include <stdio.h> //chamada  da biblioteca principal da linguagem C para entrada e sa�da
int i, j, k; //declara��o das vari�veis do tipo inteiro

void main(){ //entrada do m�todo principal
	
	for (i=0, j=2, k=4; i<k;i++){ //in�cio da estrutura de repeti��o "para"
		
		k=k+i%2; //atribui��o da soma e da modula��o % da opera��o
	}
	printf("%d, %d, %d", i, j, k); //impress�o das variaveis do tipo inteiro
} // finaliza��o do m�todo principal
