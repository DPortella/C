#include <stdio.h>        //Blocos juntos
void print(char c, int n);

int main(void){
    int n;
    printf("Quantos blocos?\n");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        print(' ', n - 1 - i);
        print('#', i + 1);
        print(' ', 1);
        print('#', i + 1);

        printf("\n");
    }
}

void print(char c, int n){

    for (int i = 0; i < n; i++) printf ("%c", c);
}
