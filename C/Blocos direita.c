#include <stdio.h>      //Blocos à direita
int main(){
    int blocos, i = 0;
    printf("Quantos blocos?\n");
    scanf("%d", &blocos);

    for( ; i<blocos; i++){
            for(int j=0; j<blocos; j++) i+j < blocos-1 ? printf(" ") : printf("#");
            printf("\n");
    }
}
