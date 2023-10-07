#ifndef HASHMAP_H
#define HASHMAP_H

struct hashmap;

/*
typedef struct 
{
    int **table;
    int size;
}   hashmap;

hashmap *hashmap_init(int taille) {
  hashmap *hashmap = malloc(sizeof(hashmap));
  hashmap->taille = taille;
  hashmap->tableau = malloc(taille * sizeof(int *));
  for (int i = 0; i < taille; i++) {
    hashmap->tableau[i] = malloc(taille * sizeof(int));
  }
  return hashmap;
}

void hashmap_ajouter(hashmap *hashmap, int clé, int valeur) {
  int index = hashmap_hash(clé) % hashmap->taille;
  hashmap->tableau[index][clé] = valeur;
}

int hashmap_rechercher(hashmap *hashmap, int clé) {
  int index = hashmap_hash(clé) % hashmap->taille;
  return hashmap->tableau[index][clé];
}

int hashmap_hash(int clé) {
  int somme = 0;
  while (clé > 0) {
    somme += clé % 10;
    clé /= 10;
  }
  return somme % 100;
}
*/
#endif
