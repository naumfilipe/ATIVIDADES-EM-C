#include <stdio.h> //Chamada da biblioteca principal da linguagem C para entrada e sa�da

void main () //Entrada do m�todo principal

{
	char ufsigla[3]; //Declara��o da vari�vel do tipo char vetorizada
	ufsigla[0] = 'U'; //Vari�vel posicionada no 0 recebendo valor 'U' 
	ufsigla[1] = 'D'; //Variavel posicionada no 1 recebendo valor 'D'
	ufsigla[2] = 'F'; //Variavel posicionada no 2 recebendo valor 'F' 
	printf("%s\n", ufsigla); //Impress�o da variavel do tipo string  
	system ("pause"); //Finaliza��o do processamento
} //Finaliza��o do m�todo principal
