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
    Afisare(cod);

    done(cod);
    Creep(cod);
    criptare(cod);
    criptare10(cod);
    Afisare(cod);
    decriptare10(cod);
    decriptare(cod);
    DeCreep(cod);
    undone(cod);

    Afisare(cod);
    return 0;
}
