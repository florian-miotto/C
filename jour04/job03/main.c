// Écrire un programme qui va utiliser les pointeurs pour lire et additionner les
// valeurs de deux variables int et stocker leur résultat
// nom de votre binaire : my_pointer_add

#include <stdio.h>
#include <string.h>

int count_A(char *str) {
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'A' || *ptr == 'a') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char input[256];

    printf("Entrez une chaîne de caractères : ");
    fgets(input, sizeof(input), stdin);

    int count = count_A(input);

    printf("Le nombre d'occurrences de la lettre 'A' (majuscule et minuscule) dans la chaîne est : %d\n", count);

    return 0;
}



