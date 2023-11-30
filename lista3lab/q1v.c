#include <stdio.h>

#define TAM 15

int main(){
    float v[TAM];
    float menor,maior,soma;

for (int i = 0; i < TAM; i++){
        printf("digite o elemento %d\n",i+1);
    scanf("%f",&v[i]);

    menor = maior = v[0];

        for(int i = 1; i < TAM; i++){
            if(v[i]<menor){
                menor = v[i];
            } else if (v[i]>maior){
                maior = v[i];
            }
   
            }
        }
         soma = maior + menor;

    printf("menor elemento %.2f\n",menor);
    printf("maior elemento %.2f\n",maior);
    printf("soma do menor e do maior %.2f\n",soma);
    return 0;
    
    }



