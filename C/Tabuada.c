#include <stdio.h>
#include <stdlib.h>

int main(void){
int i, numero, vezes;
char cod;

    while(cod != 'N'){
        printf("\nQual tabuada deseja ver? \n");
        scanf("%d", &numero);
        printf("Quer ver multiplicado quantas vezes?\n");
        scanf("%d", &vezes);

        for(i = 1; i <= vezes; i++) printf("%d x %d = %d\n", numero, i, numero*i);

        printf("Deseja uma nova operacao? Digite 'S' ou 'N'\n");
        cod = toupper(getche());
    }
}
