// Pour commencer, vous allez créer en plus de votre fichier main.c un fichier
// qui se nommera my_put.c

// ce fichier contiendra deux fonctions :

// - une pour afficher des caractères nommée my_putchar
// - une pour afficher des phrase nommée my_putstr

// vous allez créer un fichier header (.h) qui renseignera tous les fichiers que
// vous voulez inclure dans votre main.c pour pouvoir utiliser les fonctions
// que vous souhaitez. Dans ce cas le fichier à renseigner dans votre .h sera
// my_put.c

// Avec ces informations vous devez réussir à compiler
#include <stdio.h>
#include <stdlib.h>



void my_putchar(char c) {

printf("%c", c);

   
}

void my_putstr(char* str) {
printf("%s", str);
}
