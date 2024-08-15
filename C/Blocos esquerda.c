#include <stdio.h>        // Blocos à Esquerda
void print(char c, int n);

int main(void){
    int n;

        printf("Quantos blocos?\n");
        scanf("%d", &n);


    for (int i = 0; i < n; i++){
            print('#', i + 1);
            printf("\n");

        }
}
void print(char c, int n){

    for (int i = 0; i < n; i++){

        printf ("%c", c);
    }
}

