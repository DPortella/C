#include<stdio.h>
int sigint();
int unint();


int sigint(){
        return 1 << (sizeof(int) * 8 - 1);
    }

int unint(){
        return 1 << (sizeof(int) * 8 -  1);

    }


int main(){

        int c = sigint();
        printf("O signed int vai de %d ate %d\n", c, c - 1);


        c= unint();
        printf("O unsigned int vai de 0 ate %u\n", (c*2) - 1);


        return 0;
}
