#include <stdio.h>

#include <stdio.h>

char habilidade (){
    char aceitar = 's';
    
    while (aceitar == 's'){
        
        printf ("Deseja usar habilidade?\n");
        scanf ("%s", &aceitar);
        printf("Você usou habilidade!");
    }
    return aceitar;
}
int main ()
{
    habilidade();
    return 0;
}

   


