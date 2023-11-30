#include <stdio.h>
#include <stdlib.h>

#define LINCOL 3

int main(){
    int i;
    int j;
    int s[LINCOL][LINCOL] = {{1,2,3},
                            {4,5,6},    
                            {7,8,9}};
for(i = 0; i < LINCOL; ++i){
    for(j = 0; j < LINCOL; ++j){
        if(i == j){
          printf(" %5d",s[i][j]);  
        }
    }
}
    return 0;
    }