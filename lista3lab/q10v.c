#include <stdio.h>
#include <stdlib.h>

#define TAM 3
int main(){
    int i;
    int j;
    int matriz[TAM][TAM];
    int x;
    int p = 0;

    puts("qual o numero entre 1 a 9 voce deseja escolher para ser ");
    scanf("%d",&x);

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j] = rand()%10;
           if(x == matriz[i][j]){
           ++p;
           }
        }
    }
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
     printf("o numero escolhido apareceu %d na matriz",p);
  
    return 0;
    }