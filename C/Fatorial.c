#include <stdio.h>
int main(int argc, char *argv[]){
    int fact=1, i, num;
    if(argc == 2){
        num = atoi(argv[1]);
        for(i = 1; i<=num; i++)  fact *= i;
        printf("%u", fact);
      }  else
        printf("Erro");
    }
