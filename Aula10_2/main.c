#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, y, media;
    printf("Digite a primeira nota!\n");
    scanf("%d", &x);

    printf("Digite a segunda nota!\n");
    scanf("%d", &y);

    media = (x+y)/2;

    if(media >= 5){
        printf("Aluno aprovado, nota: %d \n", media);
    }else{
        printf("Aluno reprovado, nota: %d \n", media);
    }
    printf("Fim do programa \n");
}
