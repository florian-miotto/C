#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool est_palindrome_recursif(char *chaine, int debut, int fin) {
    if (debut >= fin) {
        return true;
    }

    if (chaine[debut] != chaine[fin]) {
        return false;
    }

    return est_palindrome_recursif(chaine, debut + 1, fin - 1);
}

int main() {
    char chaine[100];

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", chaine);

    if (est_palindrome_recursif(chaine, 0, strlen(chaine) - 1)) {
        printf("La chaine est un palindrome.\n");
    } else {
        printf("La chaine n'est pas un palindrome.\n");
    }

    return 0;
}

// La fonction est_palindrome_recursif() prend en paramètres la chaîne de caractères à tester, l'indice de début et l'indice de fin de la sous-chaîne courante.
// Si l'indice de début est supérieur ou égal à l'indice de fin, cela signifie que la sous-chaîne courante ne contient qu'un seul caractère ou aucun caractère, 
// et donc qu'elle est un palindrome. La fonction retourne alors true.
// // Sinon, si le premier caractère de la sous-chaîne courante est différent du dernier caractère, 
// cela signifie que la sous-chaîne courante n'est pas un palindrome. La fonction retourne alors false.
// Sinon, la fonction appelle récursivement elle-même avec les indices de début et de fin décalés pour 
// tester la sous-chaîne intermédiaire entre les deux caractères courants.
// La fonction main() demande à l'utilisateur de saisir une chaîne de caractères à tester à l'aide de la fonction scanf(),
//  puis appelle la fonction est_palindrome_recursif() avec les indices de début et de fin de la chaîne entière.
// Si la fonction est_palindrome_recursif() retourne true, cela signifie que la chaîne est un palindrome, sinon cela signifie qu'elle n'en est pas un.