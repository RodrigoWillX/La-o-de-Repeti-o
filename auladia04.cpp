#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	char opcao; //vari�vel de controle de sa�da de programa
	
	do{
		
		
		printf("Deseja repetir? [S/N]");
	opcao = getch();//Coloca a tecla digitada na vari�vel opcao
	while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N')
		printf("\nPressione S para continuar e N para sair");
		opcao = getch(); //coloca a tecla digitada na vari�vel opcao
	


	}while(opcao =='s' || opcao == 'S');
	
}
