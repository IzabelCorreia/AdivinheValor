#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int usuario, computador;

    printf("\n ===== ESTOU A PENSAR EM UM VALOR ENTRE 0 E 10... =====\n");
    printf("-- Qual e o valor que estou pensando? ");
    scanf("%d", &usuario);

    srand(time(NULL));
    computador = rand() %10;
    printf("-- Pensei em: %d \n", computador);

    if (computador > usuario){
	printf ("ERROU!!");
    }
    if (computador < usuario){
        printf("ERROU!!");
    }
    if (computador == usuario){
        printf("ACERTOU");
    }
return 0;
}
