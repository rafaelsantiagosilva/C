#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int myAge = 43;
	int* myAgeMemoryAdress = &myAge; // Criando um ponteiro
																// Imprimindo o valor  // Imprimindo o endere�o da mem�ria
	printf("O valor da vari�vel � de %d e est� localizada em %p!", *myAgeMemoryAdress, myAgeMemoryAdress);
	return 0;
}
