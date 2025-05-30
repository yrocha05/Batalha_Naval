#include <stdio.h>


int main (){

int tabuleiro [10][10] = {0} ;
// tabuleiro [1][2] = 3;
 

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
// tabuleiro [1][2] = 3;
// tabuleiro [2][2] = 3;
// tabuleiro [3][2] = 3;


//Anexar Navios Horizontal
// tabuleiro [6][4] = 3;
// tabuleiro [6][5] = 3;
// tabuleiro [6][6] = 3;

//Imprimir os Números
printf("\n");
for (int linha = 0; linha < 10; linha++){
    printf("%d  ", linha + 1);

    // Imprimitr o Tabuleiro

    for (int i = 0; i < 3; i++)
    {
        //GERAR NAVIO DIAGONAL
       if (linha == i)
       {
        tabuleiro [linha][i] = 3;
       } else if (linha + i == 9)
       {
        tabuleiro [linha][i] = 3;
       } else if (linha == 6 && i >= 5){
        tabuleiro [linha][i] = 3;
       }
       // NÃO PERMITIR SOBREPOSIÇÃO DE NAVIO
    }
      for (int i = 0; i < 10; i++)
    {

        // NAVIO VERTICAL E HORIZONTAL

         if (linha == 6 && i > 6){
        tabuleiro [linha][i] = 3;
       } else if (linha > 6 && i == 5)
       {
        tabuleiro [linha][i] = 3;
       } 
       
    printf(" %d " , tabuleiro[linha][i]);
   
    }
    printf("\n");

}



return 0;
}