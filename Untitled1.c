#include <stdio.h>

int main() {
	
	float nota_1, nota_2 = 0;
			
	printf("Digite a primeira nota:\n");
	scanf("%d", &nota_1);
	printf("Digite a segunda nota:\n");
	scanf("%d", &nota_2);
	int media = (nota_1 + nota_2) / 2;
	printf("%d. \n", media);
	return (10);
}
