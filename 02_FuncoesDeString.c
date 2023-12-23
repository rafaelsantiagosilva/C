#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char myAlphabet[] = "abcdefghijklmnopqrstuvwxyz";
	// Tamanho da String
	printf("O alfabeto tem %d letras!\n", strlen(myAlphabet));
	
	// Concantenar Strings
	char myHelloWorld[] = "Hello World!", myHelloWordReverse[] = "!dlroW olleH";
	strcat(myHelloWorld, myHelloWordReverse); // myHelloWorld += myHelloWorldReverse
	printf("\n=====Espelho Mágico=====\n%s\n========================", myHelloWorld);
	
	// Copiando Strings
	char myAdress[] = "A random name for a adress";
	char myWifeAdress[30];
	// Era pra funcionar mas não funciona :( 
	/*
	strcopy(myWifeAdress, myAdress); // myWifeAdress = myAdress
	printf("\nMinha esposa mora em: %s", myWifeAdress);
	*/
	
	// Comparando Strings
	char newHello[] = "Hello";
	char otherNewHello[] = "Hello";
	char newHi[] = "Hi";
	printf("\n\nCOMPARANDO STRINGS:");
	printf("\nnewHello e otherNewHello são iguais: %d", strcmp(newHello, otherNewHello));
	printf("\nnewHello e newHi são diferentes: %d", strcmp(newHi, newHello));
	return 0;
}
