#include <stdio.h>
#include <string.h>

#define TAM 15
int main(){
    char s[TAM];
    int i = 0;
    int j = 0;
    char invertida[TAM];
   printf("digite a frase\n");
    scanf("%14[^\n]s",s);
    fflush(stdin);

    while(s[i] != '\0'){
        ++i;
    }

    for(j=0; j < i; ++j){
        invertida[j] = s[i - 1 -j];
    }
    invertida[j] = '\0';

    printf("string invertida: %s",invertida);
   
    return 0;
    }