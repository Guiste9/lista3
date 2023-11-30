#include <stdio.h>

#define TAM 15

int main(){
    char s[TAM];
int tam = 0;
int i = 0;


   printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

   while(s[i] != '\0'){
    ++i;
    ++tam;
   }        
            printf("o tamanho da frase foi de %d\n",tam);
    return 0;
    
    }