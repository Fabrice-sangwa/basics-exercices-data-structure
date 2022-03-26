#include <stdio.h>
#include <stdlib.h>


typedef struct compte {

    int nbanque;
    int ncompte;
    float solde;

}compte;

typedef struct id {

    char nom[30];
    int naissance [3];
}id;

typedef struct fiche {

    id ident;
    compte *c;


}fiche;

void afficher_fiche(fiche *f){

    printf("\nNoms : %d\n", f->ident.nom);
    printf("Jour de naissance : %d\n", f->ident.naissance[0]);
    printf("Mois de naissance : %d\n", f->ident.naissance[1]);
    printf("Annee de naissance : %d\n", f->ident.naissance[2]);

}






main (){

    fiche a = {{"Fabrice Sangwa",{12,05,1845}}};
    afficher_fiche (&a);
}
