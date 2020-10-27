struct Pokemon{
    char name[256];
    int level;
};

struct Pokemon * new_pokemon(int l, char * n);

void poke_print(struct Pokemon *x);

void poke_modify(struct Pokemon *x, int l, char * n);