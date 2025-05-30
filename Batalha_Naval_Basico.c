#include <stdio.h>


int main (){

int tabuleiro [10][10] = {0} ;
tabuleiro [1][2] = 3;
 

//Estrutura Tabuleiro
char coluna [10] = {'A','B','C','D','E','F','G','H','I','J'}; //Letras

int linha; // Números Lateral


//Imprimir Cabeçalho
printf(" *** JOGO BATALHA NAVAL *** \n");
printf("    ");

//Imprimir as Letras
for (int i = 0; i < 10; i++){
    printf("%c  ", coluna [i]);
}

//Anexar Navios Vertical
tabuleiro [1][2] = 3;
tabuleiro [2][2] = 3;
tabuleiro [3][2] = 3;


//Anexar Navios Horizontal
tabuleiro [6][4] = 3;
tabuleiro [6][5] = 3;
tabuleiro [6][6] = 3;

//Imprimir os Números
printf("\n");
for (int linha = 0; linha < 10; linha++){
    printf("%d  ", linha + 1);

    // Imprimitr a ÁGUA
    for (int i = 0; i < 10; i++)
    {
        printf(" %d " , tabuleiro[linha][i]);
    }

    

    printf("\n");

}



return 0;
}
