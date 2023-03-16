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

