// Faites une fonction qui renvoie le nombre de “a”, “e” et “i” (en majuscule ou
// minuscule) contenue dans un mot.

// afficher le résultat de l’appel dans votre fonction main.
#include <stdio.h>
#include <string.h>

void count_vowels(char *word, int *counts) {
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        switch (word[i]) {
            case 'a':
            case 'A':
                counts[0]++;
                break;
            case 'e':
            case 'E':
                counts[1]++;
                break;
            case 'i':
            case 'I':
                counts[2]++;
                break;
            default:
                break;
        }
    }
}

int main() {
    char word[100];
    
    printf("Entrez un mot : ");
    scanf("%s", word);

    int counts[3] = {0, 0, 0}; 
    count_vowels(word, counts);

    printf("Le mot '%s' contient :\n", word);
    printf("%d fois la voyelle 'a' ou 'A'\n", counts[0]);
    printf("%d fois la voyelle 'e' ou 'E'\n", counts[1]);
    printf("%d fois la voyelle 'i' ou 'I'\n", counts[2]);

    return 0;
}

