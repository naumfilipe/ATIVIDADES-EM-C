#include <stdio.h> //Chamada da biblioteca principal da linguagem C para entrada e saída

void main () //Entrada do método principal

{
	char ufsigla[3]; //Declaração da variável do tipo char vetorizada
	ufsigla[0] = 'U'; //Variável posicionada no 0 recebendo valor 'U' 
	ufsigla[1] = 'D'; //Variavel posicionada no 1 recebendo valor 'D'
	ufsigla[2] = 'F'; //Variavel posicionada no 2 recebendo valor 'F' 
	printf("%s\n", ufsigla); //Impressão da variavel do tipo string  
	system ("pause"); //Finalização do processamento
} //Finalização do método principal
