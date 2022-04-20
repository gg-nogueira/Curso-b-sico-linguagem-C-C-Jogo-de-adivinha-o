#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//#define TENT 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int segundos = time(0);
	srand(segundos);
	int numg = rand(); 
	int nums = numg % 100;
    int chute,tentativas=1;
    double pontos=1000;
    int nivel;

    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");
    
    printf("Qual número eu estou pensando? :-) \n");
	printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil // (2) Médio // (3) Difícil\n");
    printf("Nível: ");
    scanf("%d", &nivel);
    
    int numtent;
    switch(nivel){
    	case 1:
    		numtent=10;
    		break;
    	case 2:
    		numtent=8;
    		break;
    	default:
    		numtent=5;
    		break;
	}
	
	for(int i=1; i<=numtent; i++){												//while (1){
    printf("\nTentativa %d", tentativas);
	printf("\nQual é o seu chute?\n");
    scanf("%d", &chute);
        
    if (chute<0) {
    	printf("Você não pode chutar números negativos !! Tente novamente\n");
    	    	
    	continue;
	}
    
    if(chute == nums) {
        
        
		break;
    } else if (chute > nums){
   		printf("\nMenos! Seu chute foi muito alto...\n");
	} else {
		printf("\nQuase! Seu chute foi muito baixo\n");
		}
		tentativas = tentativas + 1;
		
		double pontosperdidos = abs(chute-nums) / 2.0;
		pontos = pontos-pontosperdidos;
	}
	printf("\nFim de Jogo !!\n\n");
    if(chute==nums) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabéns! Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

	} else {
        printf("Puxa vida! Acabaram as suas tentativas...\n");
        printf("O número secreto era %d...\n\n", nums);

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("\nTente novamente!!\n");
}
	
	return 0;
}

	


