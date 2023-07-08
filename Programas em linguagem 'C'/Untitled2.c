#include <stdio.h>

#define texto "entrada e saida de dados."
 
int main(){
	printf("%s\n",texto);
	
	int idade = 0;
	float altura=0.0;
	char nome [50] = "";
	
	printf("digite a idade:\n");
	scanf("%d", &idade);
	
	printf("digite a altura:\n");
	scanf("%f",&altura);
	
	printf("digite o nome:\n");
	scanf("%s", &nome);
	
	printf("dados informados:\n");
	printf("idade: %d.\n", idade);
	printf("altura: %2.f\n", altura);
	printf("nome: %.\n", nome);
	
}

