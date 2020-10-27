#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "construction.h"

struct Pokemon * new_pokemon(int l, char * n){
    struct Pokemon *np;
    np = malloc(sizeof(struct Pokemon));

    strncpy(np->name, n, sizeof(np->name)-1);
    np->level = l;

    return np;
}

void poke_print(struct Pokemon *x){
    printf("Pokemon:%s Level:%d\n",x->name,x->level);
}

void poke_modify(struct Pokemon *x, int l, char * n){
    strncpy(x->name, n, sizeof(x->name)-1);
    x->level = l;
}

