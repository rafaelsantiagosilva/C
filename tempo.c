#include<stdio.h>

int main(void){
	int nAmigo[999], opc=1;
	do{
		printf("Digite um número: ");
		scanf("%d", &nAmigo[sizeof(nAmigo) / sizeof(nAmigo[0])]);
		printf("\nDeseja continuar? [1=S/0=N]\nR:");
		scanf("%d", &opc);
	}while(opc==1);
	
	int i;
	for(i=0; i<(sizeof(nAmigo) / sizeof(nAmigo[0])); i++){
		printf("\n%dº: %d\n", i+1, nAmigo[i]);
	}
	return 0;
}
