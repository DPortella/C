#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, escolha, num1 = 0, num2 = 1, num3;

    printf("Quantas sequencias Fibonacci deseja ver?\n");
    scanf("%d", &escolha);

    for(i = 0; i < escolha; i++){
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;

        printf("%u\n", num3);
    }
}
