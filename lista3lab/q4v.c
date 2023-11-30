#include <stdio.h>
#include <string.h>

#define TAM 15

int main(){
    int i = 0;
    char s[TAM];
    char t[TAM];
    int resultado;

   printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

    printf("digite a frase\n");
    scanf("%14[^\n]s",t);
    fflush(stdin);

    resultado = strcmp(s,t);
    if(resultado == 0){
        printf("as duas frases sao identicas\n");
    } else{
        printf("as duas frase nao sao identicas\n");

    }

    s[TAM] = NULL;
    t[TAM] = NULL;

       printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

    printf("digite a frase\n");
    scanf("%14[^\n]s",t);
    fflush(stdin);
    
    while(s[i] != '\0' && t[i] != '\0'){
        if(s[i] == t[i]){
        ++i;
        } else{
            printf("as frases nao sao iguais");
            break;
        }
    }

    if(s[i] == '\0' && t[i] == '\0'){
        printf("as frases sao iguais");
    }
   
    return 0;
    
    }


    