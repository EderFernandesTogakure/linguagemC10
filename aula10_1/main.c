#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um valor inteiro!\n");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("O valor e PAR \n");
    }else{
        printf("O valor e IMPAR \n");
    }
    printf("Fim do programa \n");
}
