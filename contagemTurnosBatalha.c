#include <stdio.h>

int batalha (int turnos){

    for(int i =1; i<= turnos; i++ ) {
        printf("Turno %d:\n", i);
            printf("Combatente ataca!\n");
            printf("Combatente atacado!\n");
    }
                    printf("Combatente vence!");
        return turnos;
}

int main()
{
    int valor = 7;
    
    printf ("Exercício 1;\n");
    batalha (valor);
    
    return 0;
}