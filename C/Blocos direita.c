#include <stdio.h>      //Blocos � direita
    int main(){
        int blocos;

        printf("Quantos blocos?\n");
        scanf("%d", &blocos);

        for(int i=0; i<blocos; i++){
                for(int j=0; j<blocos; j++){
                    if (i+j < blocos-1)
                        printf(" ");
                    else
                        printf("#");
        }
                    printf("\n");
    }
}
