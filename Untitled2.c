#include <stdio.h> //chamada da biblioteca padr�o C

main() //in�cio da fun��o principal
{
int g=0,i=0,l=0,k=0; //declara��o e inicializa��o das vari�veis
int m, n, o; //declara��o de vari�veis do tipo inteiro

while (i<10) //declara��o da estrutura de repeti��o (enquanto)
{	
	m=++g; //incremeta��o da variavel "g"
	n=+l; //substitui��o da variavel "n" pela varaivel "l"
	o=++k; //incrementa��o da variael "k"
	i++; //contador da variavel "i"
}
printf (" m=%d,n=%d,o=%d ", m,n,o); //impress�o da das vari�veis
}
