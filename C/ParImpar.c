#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Digite um numero: \n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf ("O numero � par!!/n");

    }
    else {
        printf("O numero � impar!!\n");
    }
    return 0;
}
