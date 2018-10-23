#include <stdio.h>
#include <stdlib.h>

int main()
{

    char exte,intern;   // Déclaration des variable
    int tailleCarre,i=1,j=1;


    printf("Caracteres en bordure :\n"); // demande et récupération d'entrer utilisateur
    scanf("%c",&exte);
    fflush(stdin);

    printf("Caracteres interieurs :\n");
    scanf("%c",&intern);

    printf("Et la taille : \n");
    scanf("%d",&tailleCarre);

//          Affichage du carré

    for(i=1; i<=tailleCarre; i++){ //premiere ligne
        printf("%c",exte);
    }
    printf("\n");

    for(i=1; i<=tailleCarre-2; i++){ //lignes entre la premiere et derniere
        printf("%c",exte);
        for(j=1; j<=tailleCarre-2; j++){
            printf("%c",intern);
        }
        printf("%c",exte);
        printf("\n");
    }

    i=1;
    for(i=1; i<=tailleCarre; i++){ //Dernière ligne
        printf("%c",exte);
    }


    return 0;
}
