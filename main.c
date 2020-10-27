#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "construction.h"
#include <time.h>

int main(){
    srand(time(NULL));

    struct Pokemon *poke_1 = new_pokemon(5,"Bulbasaur");
    poke_print(poke_1);
    poke_modify(poke_1, 16, "Ivysaur");
    poke_print(poke_1);

    printf("\n\nRandomly leveled legendaries:\n\n");
    struct Pokemon *mew = new_pokemon(rand()%100+1,"Mew");
    poke_print(mew);
    struct Pokemon *mewtwo = new_pokemon(rand()%100+1,"Mewtwo");
    poke_print(mewtwo);
    struct Pokemon *articuno = new_pokemon(rand()%100+1,"Articuno");
    poke_print(articuno);
    struct Pokemon *zapdos = new_pokemon(rand()%100+1,"Zapdos");
    poke_print(zapdos);
    struct Pokemon *moltres = new_pokemon(rand()%100+1,"Moltres");
    poke_print(moltres);


}