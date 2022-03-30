#include <stdio.h>

double media(double v[], int tam);

int main(void){
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	double vetor[tamanho];
	for(int i=0;i<tamanho;i++){
		printf("Digite o termo %d: ", i+1);
		scanf("%lf", &vetor[i]);
	}
	for(int j=0;j<tamanho;j++){
		printf("%.2lf\t", vetor[j]);
	}
	printf("\n A soma dos elementos do vetor é: %.2lf", media(vetor, tamanho));
	}

double media(double v[], int tam){
	int i;
	int soma = 0;
	for(i=0;i<tam;i++){
		soma += v[i];
	}
	return soma;
}