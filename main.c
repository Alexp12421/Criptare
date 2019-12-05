#include <stdio.h>
#include <stdlib.h>

#include "alex.h"
#include "diana.h"
#include "iasmina.h"
#include "filip.h"
#include "david.h"

int main()
{
    char cod[10000];
    printf("Introduceti un text de maxim 9999 caractere :D \n");
    fgets(cod,9999,stdin);
    //Afisare(cod);
    //Creep(cod); //criptarea alex
    criptare(cod);
    printf("%s\n",cod);
    decriptare(cod);
    //DeCreep(cod);
    printf("%s\n",cod);
    return 0;
}
