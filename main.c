#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    char nom[100][20];
    char numero[100][20];
    char mail[100][100];
    char nom_r[100];
    char numero_r[100];
    char mail_r[100];
    int choi;
    int x=0;
//****************************************************
  char nom_sup[100];
   int S=0;
  void supp()
{
    printf("entrez le nom quevous souhaitez superimer :\n");
    printf("Nom : ");
    scanf("%s",&nom_sup);
    for(int i=0;i<x;i++)
    {
        if(strcmp(nom_sup,nom[i])==0)
        {
            strcpy(nom[i],nom[i-1]);
            strcpy(numero[i],numero[i-1]);
            strcpy(mail[i],mail[i-1]);
            x--;
            S++;
            printf("element bien superimer");

        }
    }
        if (S==0){printf("element non trouver");}
}
//*******************************************************
void ajouter()
{
    printf("entrez les information suivent :\n ");
    printf("\n*Nom : ");
    scanf(" %19[^\n]", nom);
    printf("\n*Numero de telephone : ");
    scanf(" %s",&numero[x]);
    printf("\n*Adresse e-mail: ");
    scanf(" %s",&mail[x]);
}
//***********************************************************
void recherch()
{
    char nom_rh[100];
    printf(" entrez le nom de etudiant a rechercher :\n");
    printf("Nom : ");
    scanf("%s",&nom_rh);
    int T=0;
    for(int i=0;i<x;i++)
    {
        if(strcmp(nom_r,nom[i])==0)
        {
        printf("*Nom : %s\n",nom[i]);
        printf("*Numero : %s\n",numero[i]);
        printf("*adrisse mail : %s\n",mail[i]);

            T++;
        }
    }
    if(T==0)printf("le nom no trouve pas");
}
//***********************************************************
int main()
{
     go :
   choix();// le programme qui domend al letetles option

    switch(choi)
    {
        case 1:
                ajouter();
                x++;
                goto go;
        break;
        case 2:
                modifier();
                goto go;
        break;
        case 3:
                supp();
                goto go;
        break;
        case 4:
                afich();
                goto go;
        break;
        case 5:
                recherch();
                goto go;
        break;
    }
return 0;
}
void choix()
{
    printf("choisez un option :\n");
    printf("*********{ les choixs }***********\n");
    printf("1. Ajouter un Contact :\n");
    printf("2. Modifier un Contact :\n");
    printf("3. Supprimer un Contact :\n");
    printf("4. Afficher Tous les Contacts :\n");
    printf("5. Rechercher un Contact :\n");
    printf("**********************************\n");
    printf("option :");
    scanf("%d",&choi);
}
void afich()
{
    for (int i=0;i<x;i++)
    {
        printf("\n---------------------------------------------\n");
        printf("*Nom : %s\n",nom[i]);
        printf("*Numero : %s\n",numero[i]);
        printf("*adrisse mail : %s\n",mail[i]);
    }
}
void modifier()
{
    printf("entrez le nom quevous souhaitez modifier :\n");
    printf("Nom : ");
    scanf("%s",&nom_r);
    printf("entrez de nouvelies informations :\n");
     int T=0;
    for(int i=0;i<x;i++)
    {
        if(strcmp(nom_r,nom[i])==0)
        {
            printf("Nouveau numero : ");
            scanf("%s",&numero[i]);
            printf("Nouveau mail : ");
            scanf("%s",&mail[i]);
            printf("les informations a mise ajoure");
            T++;
        }
    }
    if(T==0)printf("le nom no trouve pas");
}


