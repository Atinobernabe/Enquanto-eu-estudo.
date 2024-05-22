#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int quantidade_numeros;

    // Inicializa o gerador de n�meros aleat�rios com base no tempo atual
    srand(time(NULL));
    
    printf("Quantos n�meros voc� deseja sortear? ");
    scanf("%d", &quantidade_numeros);
    
    printf("N�meros sorteados:\n");
    
    // Gera e imprime os n�meros aleat�rios
    for (int i = 0; i < quantidade_numeros; i++) {
        printf("%d\n", rand());
    }
    
    return 0;
}

