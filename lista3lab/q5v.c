#include <stdio.h>
#include <string.h>

#define TAM 15

void concatenarstrings(char destino[TAM], char origem[]){
        int i = 0;
        int j = 0;

        while (destino[i] != '\0'){
            ++i;
        }
        while(origem[j] != '\0' && i < TAM - 1){
            destino[i] = origem[j];
            i++;
            j++;

        }

        destino[i] = '\0';
        
    }
int main(){
    char s[TAM];
    char t[TAM];

   printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

    printf("digite a frase\n");
    scanf("%14[^\n]s",t);
    fflush(stdin);

    strcat(s,t);
    printf("a frase concatenada foi %s",s);


    s[TAM] = NULL;
    t[TAM] = NULL;

       printf("\ndigite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

    printf("digite a frase\n");
    scanf("%14[^\n]s",t);
    fflush(stdin);
    
    concatenarstrings(s,t);

    printf("a frase concatenada foi %s",s);
   
    return 0;
    
    }