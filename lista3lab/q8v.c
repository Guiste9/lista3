#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 100
void fselectsort(int *pvetor);
void fbubblesort(int *pvetor, int tam);

int main(){
    int v[TAM];
    int tamax = 0;
    int s[TAM];
    int i;
    srand(time(NULL));

    puts("digite o intervalo maximo");
    scanf("%d",&tamax);

for(i = 0; i < TAM; ++i){
s[i] = rand() % tamax;
printf(" %d,",s[i]);
}

    fselectsort(s);

    printf("\n\n");

    for (i=0; i < TAM; i++)
    {
        printf(" %d,",s[i]);
    }

    printf("\n\n ");



    //agora com bubble sort

    tamax = 0;
    puts("digite o intervalo maximo");
    scanf("%d",&tamax);

    for(i=0;i<TAM;++i){
        v[i] = rand() % tamax;
        printf(" %d,",v[i]);
    }

    fbubblesort(v,tamax);

    printf("\n\n");
    
    printf("Em ordem crescente:\n");
    for(i=0;i<TAM;++i){
         printf(" %d,",v[i]);
}
    printf("\n\n");
    return 0;
}

void fselectsort(int *pVetor){
    int vMenor;
    int vAux;
    int vTemp;
    int vTroca;

    for(vAux=0; vAux < TAM-1; vAux++)
    {
        vMenor = vAux;

        for (vTemp=vAux+1; vTemp < TAM; vTemp++) 
        {
            if (pVetor[vTemp] < pVetor[vMenor])
            {
                vMenor = vTemp; 
            }
        }

        if (vMenor != vAux)
        {
            vTroca         = pVetor[vAux];
            pVetor[vAux]   = pVetor[vMenor];
            pVetor[vMenor] = vTroca;
        }
    }
}


void fbubblesort(int *pvetor,int tam){
    int i,j,temp;
    for(i = 0; i < tam - 1; ++i){
        for(j = 0; j <tam - i - 1; ++j){
            if(pvetor[j] >pvetor[j+1]){
                temp = pvetor[j];
                pvetor[j] = pvetor[j+1];
                pvetor[j+1] = temp;
            }
        }
    }
}