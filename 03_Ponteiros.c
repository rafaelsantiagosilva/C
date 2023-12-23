#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int myAge = 43;
	int* myAgeMemoryAdress = &myAge; // Criando um ponteiro
																// Imprimindo o valor  // Imprimindo o endereço da memória
	printf("O valor da variável é de %d e está localizada em %p!", *myAgeMemoryAdress, myAgeMemoryAdress);
	return 0;
}
