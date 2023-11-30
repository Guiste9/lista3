#include <stdio.h>
#include <string.h>

#define TAM 15

int main(){
    char s[TAM];
   char c = 'w';

   printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

   printf("escreva a letra desejada\n");
   scanf(" %c",&c);
   printf("a letra escolhida foi %c\n",c);
   

   if(strchr(s,c) != NULL){
    printf("a frase %s\ncontem a letra %c",s,c);
   } else {
    printf("a frase %s nao contem a letra %c",s,c);
   }        
            
    return 0;
    
    }