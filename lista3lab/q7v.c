#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define TAM 3
int main(){
    char s[TAM];
    float mediaa;
    float mediag;
    int somatorio =0;
    int multiplicador =1;
    srand(time(NULL));

for(int i = 0; i < TAM; ++i){

s[i] = rand() % 19;

somatorio += s[i];
multiplicador *= s[i];
printf("o numero do vetor %d eh %d\n",i+1,s[i]);
}



    mediaa = somatorio/(float)TAM;

    printf("a media arimetica dos vetores eh %.2f\n",mediaa);

    mediag = pow(multiplicador,1.0/TAM);

     printf("a media geometrica dos vetores eh %.2f\n",mediag);
   
    return 0;
    }