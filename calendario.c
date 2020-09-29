#include <stdio.h>

int idade;
int sexo;

int main (void){
	
printf("Digite seu sexo:\n(0 para masculino e 1 para feminino)");
scanf("%d", &sexo);
	if (sexo==0){
		printf("Compareca na unidade de saude nos dias com numeracoes pares do mes que sera estabelecido para voce!");
	}
	else{
		printf("Compareca na unidade de saude nos dias com numeracoes impares do mes que sera estabelecido para voce!\n");
	}	

printf("Digite sua idade:");
scanf("%d", &idade);	
	if(idade>=91){
		printf ("vacinacao em janeiro");
	system ("pause");
	return 0;	
    }
	if(idade>=81 && idade<=90){
		printf ("vacinacao em fevereiro");
    system ("pause");
    return 0;
	}
	if(idade>=71 && idade<=80){
		printf ("vacinacao em março");
	system ("pause");
	return 0;
	}
	if(idade>=61 && idade<=70){
		printf ("vacinacao em abril");	
	system ("pause");
	return 0;
	}
	if(idade>=51 && idade<=60){
		printf ("vacinacao em maio");
	system ("pause");
	return 0;
	}
	if(idade>=41 && idade<=50){
		printf ("vacinacao em junho");
	system ("pause");
	return 0;
	}
	if(idade>=31 && idade<=40){
		printf ("vacinacao em julho ");
	system ("pause");
	return 0;
	}
	if(idade>=21 && idade<=30){
		printf ("vacinacao em agosto");
	system ("pause");
	return 0;
	}
	if(idade>=11 && idade<=20){
		printf ("vacinacao em setembro");
	system ("pause");
	return 0;
	}
	if(idade>=1 && idade<=10){
		printf ("vacinacao em outubro");
	system ("pause");
	return 0;
	}
	if(idade<=0){
		printf ("nao ha necessidade de vacinacao");
	system ("pause");
	return 0;
	}
}
