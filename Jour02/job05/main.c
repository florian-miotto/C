// Pour ce job votre objectif et de faire une fonction qui prend en paramètre
// un char *, et renvoi le char * transmis en int * des valeurs ascii de toutes
// les lettres contenu dans le char * initiale.

// Votre binaire se nommera : my_char_to_ascii

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", str);

    printf("Les valeurs ASCII de la chaine '%s' sont :\n", str);

    for (int i = 0; i < strlen(str); i++) {
        printf("%c : %d\n", str[i], (int) str[i]);
    }

    return 0;
}
