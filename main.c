#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float preco;
	float preco_novo;
	int inf;
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	if(preco< 100){
		preco_novo = preco + (10*preco/100);
		inf = 10;
	}
	else{
		preco_novo = preco + (20*preco/100);
		inf = 20;
	}
	printf("A inflação de %d \nResultando em um valor de R$%.2f", inf, preco_novo);
	return 0;
}
