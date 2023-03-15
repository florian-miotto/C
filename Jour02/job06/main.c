// Faites une fonction qui fera la conversion d’un
// tableau d’ascii à un tableau de char

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ascii_values[100];
    char *token;
    int ascii_int;

    printf("Entrez des valeurs ASCII séparées par des espaces : ");
    fgets(ascii_values, 100, stdin);  // Lire les valeurs ASCII saisies par l'utilisateur dans un tableau de caractères

    printf("Les valeurs ASCII saisies sont :\n");
    token = strtok(ascii_values, " ");
    while (token != NULL) {
        ascii_int = atoi(token);  // Convertir la valeur ASCII en entier
        printf("%d : %c\n", ascii_int, ascii_int); // Afficher la valeur ASCII et la valeur CHAR correspondante
        token = strtok(NULL, " ");
    }

    return 0;
}
