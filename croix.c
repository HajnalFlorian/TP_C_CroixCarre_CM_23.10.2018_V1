#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=1,y=1,taille=0; // création de variable une
    char cCarac;

    printf("Entrez un caractere ?\n"); //demande de saisi utilisateur
    scanf("%c", &cCarac);
    printf("Maintenant une taille  ?\n");
    scanf("%d", &taille);

    for(x=0; x <= taille; x++){  // boucle for imbriquer pour affichage de la croix
        for(y=0; y <= taille; y++){
                if ((x==y) || ((x+y)-1)==taille)
                    printf("%c", cCarac);
                else
                    printf(" ");
        }
        printf("\n");
    }

printf("\n");




    return 0;
}
