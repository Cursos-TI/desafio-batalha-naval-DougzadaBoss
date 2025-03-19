#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
#define NAVIOS 2

int main (void){
int tabuleiro [LINHAS] [COLUNAS] = {0};
int navios_linhas [NAVIOS] = {1,4};
int navios_colunas [NAVIOS] = {1,4};
int navios_tamanho [NAVIOS] = {3,5};
char navios_direcao [NAVIOS] = {'H','V'};
int linhas;
int colunas; 
int tamanho; 
char direcao; 

for(int n = 0; n < NAVIOS; n++){

    linhas = navios_linhas [n];
    colunas = navios_colunas[n];
    tamanho =  navios_tamanho[n];
    direcao = navios_direcao[n];

    for(int i = 0; i < tamanho; i++){
        if( direcao == 'H'){
        tabuleiro [linhas] [colunas +i] = 3;
        }
        else {
            tabuleiro [linhas + i] [colunas] = 3;
        }
    }
    
}
for (int i = 0; i < LINHAS; i++){
    for(int j = 0; j < COLUNAS; j++){
        printf("%d ", tabuleiro [i] [j]);
    }
    printf("\n");
}



    return 0;
}