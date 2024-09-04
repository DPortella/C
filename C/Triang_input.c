#include <stdio.h>        // Triangulos
#include <stdlib.h>

int main(void){
    float lado[3];
    int i;

    for(i=0; i<3; i++){
        printf("Indique o valor do lado %d:\n", i+1);
        scanf("%f", &lado[i]);
    }
        if(lado[0] + lado[1] < lado[2] || lado[0] + lado[2] < lado[1] || lado[2] + lado[1] < lado[0])
            printf("Isso nao eh um triangulo");
        else if(lado[0] == lado[1] && lado[0] == lado[2])
            printf("Triangulo equilatero.");
        else
            lado[0] != lado[1] && lado[0] != lado[2] && lado[1] != lado[2] ? printf("Triangulo escaleno."): printf("Triangulo isosceles.");

    return 0;
}
