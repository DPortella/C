#include <stdio.h>
#include <stdlib.h>

int main(){
int i, numero, vezes;
char cod;
cod = 'X';

    while(cod != 'N'){
        printf("\nQual tabuada deseja ver? \n");
        scanf("%d", &numero);
        printf("Quer ver multiplicado quantas vezes?\n");
        scanf("%d", &vezes);

        for(i = 0; i <= vezes; i++){

            printf("%d x %d = %d\n", numero, i, numero*i);
        }
        printf("Deseja uma nova operacao? Digite 'S' ou 'N'\n");
        cod = getche();
    }
    return 0;
}