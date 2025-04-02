#include<stdio.h>
int sigint();
int unint();
char sichar();
unsigned char unchar();
short sishort();
short unshort();


char sichar(){
    return 1 << (sizeof(char) * 8 - 1);
}

unsigned char unchar(){
    return (1 << (sizeof(char) * 8)) - 1;
}

int sigint(){
    return 1 << (sizeof(int) * 8 - 1);
    }

int unint(){
    return (1 << (sizeof(int) * 8)) - 1;
    }

short sishort(){
    return 1 << (sizeof(short) * 8 -  1);
}

short unshort(){
    return (1 << (sizeof(short) * 8)) - 1;
}

int main(){

    int c = sigint();
    printf("O signed int vai de %d ate %d\n", c, ~c);

    c = unint();
    printf("O unsigned int vai de 0 ate %u\n", c);

    c = sichar();
    printf("O signed char vai de %d ate %d\n", c, ~c);

    c = unchar();
    printf("O unsigned char vai de 0 ate %u\n", c);

    c = sishort();
    printf("O signed short vai de %d ate %d\n", c, ~c);

    c = unshort();
    printf("O unsigned short vai de 0 ate %hu\n", c);

    return 0;
}
