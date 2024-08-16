#include <stdio.h>      //Deslocamento

void main(void){
    int i=1, j;
    for(j=0; j<4; j++){
        i = i << 1;
        printf("Deslocamento à esquerda %d: %d\n", j, i);
    }
    for(j = 0; j<4; j++){
        i = i >> 1;
        printf("Deslocamento à direita %d: %d\n", j, i);
    }
}
