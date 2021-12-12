#include "lib.h"
#include <cstring>

bool ricerca (char lista [10][20], char nome[1][20], int &ros){

    for (int i = 0; i < 10; i++) {
        if (strcmp (lista [i], nome) == 0) {
            pos = i;
            return true;
        };
    }
    return false;
}
