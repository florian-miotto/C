#include <stdio.h>

void dessiner_carre(int largeur, int hauteur) {
    if (largeur <= 0 || hauteur <= 0) {
        return;
    }

    for (int i = 0; i < largeur; i++) {
        putchar('*');
    }
    putchar('\n');

    dessiner_carre(largeur, hauteur - 1);
}

int main() {
    int largeur, hauteur;
    char c;

    printf("Entrez la largeur : ");
    scanf("%d", &largeur);

    printf("Entrez la hauteur : ");
    scanf("%d", &hauteur);

    dessiner_carre(largeur, hauteur);
    printf("sortir de la fonction\n");
    while (1) {
        printf("Entrez q pour quitter: ");
        scanf("%c", &c);
        if (c == 'q' || c == 'Q') {
            break;
        }
       
    }

    return 0;
}
