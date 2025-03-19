#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
#define NAVIOS 4 //define a quantidade de navios

int main (void){
//tabuleiro
int tabuleiro [LINHAS] [COLUNAS] = {0}; 

//habilidades
int cone [5] [5] = {5};
int cruz [5] [5] = {5};
int octaedro [5] [5] = {5};

//vetores dos navios, reponsáveis por definir as posições iniciais e a direção dos navios
int navios_linhas [NAVIOS] = {1,6,3,6};
int navios_colunas [NAVIOS] = {1,5,1,0};
int navios_tamanho [NAVIOS] = {3,4,3,4};
char navios_direcao [NAVIOS] = {'H','V', 'D', 'D'};

//variáveis que vão receber os valores dos vetores e sobrepor a matriz do tabuleiro
int linhas;
int colunas; 
int tamanho; 
char direcao; 

// for que inicia o preenchimento das variáveis com os valores do vetor para sobrepor o tabuleiro

for(int n = 0; n < NAVIOS; n++){
    linhas = navios_linhas [n];
    colunas = navios_colunas[n];
    tamanho =  navios_tamanho[n];
    direcao = navios_direcao[n];

/*for aninhado que sobrepõe os valores para o tabuleiro
dentro desse for aninhado tem ifs para testar as direções do navio e preencher
nas respectivas posições*/

    for(int i = 0; i < tamanho; i++){
        if( direcao == 'H'){
        tabuleiro [linhas] [colunas +i] = 3;
        }
        else if(direcao == 'D'){
            tabuleiro [linhas + i] [colunas +i] = 3;
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