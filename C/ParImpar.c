#include <stdio.h>      //Par ou Impar
#include <stdlib.h>

int main(){
    int a;
    printf("Digite um numero: \n");
    scanf("%d", &a);
    a % 2 == 0 ? printf ("O numero e par!!\n") : printf("O numero e impar!!\n");
    }
