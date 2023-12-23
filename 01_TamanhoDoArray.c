#include<stdio.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int myNumbers[5] = {10, 25, 50, 75, 100}; 
	int i=0;
	
	const int MY_NUMBERS_LENGTH = sizeof(myNumbers) / sizeof(myNumbers[0]);
	/* Tem que ocorrer a divisão pois o sizeof retorna o valor em bytes */
	
	printf("O tamanho do array é de: %d", MY_NUMBERS_LENGTH);
	printf("\nO seu conteúdo é o seguinte:\n");
	for(i=0; i<MY_NUMBERS_LENGTH; i++){
		printf("%d\n", myNumbers[i]);
	}
	return 0;
}
