#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	char opcao; //variável de controle de saída de programa
	
	do{
		
		
		printf("Deseja repetir? [S/N]");
	opcao = getch();//Coloca a tecla digitada na variável opcao
	while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N')
		printf("\nPressione S para continuar e N para sair");
		opcao = getch(); //coloca a tecla digitada na variável opcao
	


	}while(opcao =='s' || opcao == 'S');
	
}
