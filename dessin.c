#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char choix;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char h = 'h';
    char q = 'q';
    int hauteurA=0;
    int hauteurB=0;
    int hauteurC=0;
    int coteD=0;
    int coteE=0;
    int tailleF=0;
    int i=1;
    int j=1;
    int k=1;


    printf("Instructions:\n");
    printf("   Afficher sapin droite (a)\n");
    printf("   Afficher sapin gauche (b)\n");
    printf("   Afficher sapin complet (c)\n");
    printf("   Afficher carre (d)\n");
    printf("   Afficher losange (e)\n");
    printf("   Afficher cinq (f)\n");
    printf("   Afficher instructions (h)\n");
    printf("   Quitter (q)\n");
    printf("\n");
    printf("Votre choix ?\n");

    scanf(" %c", &choix);

    do{

   if (choix == 'h')
    {
         printf("Instructions:\n");
        printf("   Afficher sapin droite (a)\n");
        printf("   Afficher sapin gauche (b)\n");
        printf("   Afficher sapin complet (c)\n");
        printf("   Afficher carre (d)\n");
        printf("   Afficher losange (e)\n");
        printf("   Afficher cinq (f)\n");
        printf("   Afficher instructions (h)\n");
        printf("   Quitter (q)\n");
        printf("\n");
        printf("Votre choix ?\n");
        scanf(" %c", &choix);
    }
    else
    {
       if (choix == 'a')
       {
            printf("Hauteur ?\n");
            scanf("%d", &hauteurA);
            if (hauteurA<=0)
            {
                printf("Erreur de saisie. Hauteur ?\n");
                scanf("%d", &hauteurA);
            }
            if (hauteurA>0)
            {for (i = 1; i <= hauteurA; ++i)
                {
                    for(j = 1; j < i; ++j)
                    {
                        printf("*");
                    }
                    printf("*\n");
                }
                printf("\n");
            }
       }
       if(choix == 'b')
       {
            printf("Hauteur ?\n");
        scanf("%d", &hauteurB);
            if (hauteurB<=0)
            {
                printf("Erreur de saisie. Hauteur ?\n");
                scanf("%d", &hauteurB);
            }
            if (hauteurB>0)
            {
                for (i = 1; i <= hauteurB; ++i)
                {
                    for(j=1; j<=hauteurB-i; ++j)
                    {
                        printf(" ");
                    }
                    for (k=1; k<=(i-1); ++k)
                    {
                        printf("*");
                    }
                    printf("*\n");
                }
                printf("\n");
            }
       }
       if (choix == 'c')
       {
           printf("Hauteur ?\n");
        scanf("%d", &hauteurC);
            if (hauteurC<=0)
            {
                printf("Erreur de saisie. Hauteur ?\n");
                scanf("%d", &hauteurC);
            }
            if (hauteurC>0)
            {
                for (i = 1; i <= hauteurC; ++i)
                {
                    for(j=1; j<=hauteurC-i; ++j)
                    {
                        printf(" ");
                    }
                    for (k=1; k<(i*2-1); ++k)
                    {
                        printf("*");
                    }
                    printf("*\n");
                }
                for (i=1; i<=hauteurC-1; ++i)
                {
                    printf(" ");
                }
                printf("*\n");
                printf("\n");
            }
       }
       if (choix == 'd')
       {
           printf("Cote ?\n");
            scanf("%d", &coteD);
            if (coteD<=0)
            {
                printf("Erreur de saisie. Cote ?\n");
                scanf("%d", &coteD);
            }
            if (coteD>0)
            {
                for(i=0; i<coteD; ++i)
                {
                    for (j=0; j<coteD; ++j)
                    {
                        if ((i==0)||(i==coteD-1))
                        {
                            printf("*");
                        }
                        else if ((j==0)||(j==coteD-1))
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                printf("\n");
            }
       }
       if (choix == 'e')
       {
           printf("Cote ?\n");
        scanf("%d", &coteE);
            if (coteE<=0)
            {
                printf("Erreur de saisie. Cote ?\n");
                scanf("%d", &coteE);
            }
            if (coteE>0)
            {
                  for(i=0; i<coteE; ++i)
                    {
                        for(j=i; j<coteE-1; ++j)
                        {
                            printf(" ");
                        }
                        printf("/");

                        for(k=1; k<=i*2; ++k)
                        {
                            printf(" ");
                        }
                    printf("\\");
                   printf("\n");
                    }
                    for(i=coteE-1; i>=0; --i)
                    {
                        for(j=i; j<coteE-1; ++j)
                        {
                            printf(" ");
                        }
                        printf("\\");

                        for(k=1; k<=i*2; ++k)
                        {
                            printf(" ");
                        }
                    printf("/");
                   printf("\n");
                    }
            printf("\n");
            }
       }
       if (choix == 'f')
       {
           printf("Taille ?\n");
        scanf("%d", &tailleF);
            if (tailleF<3)
            {
                printf("Erreur de saisie. Taille ?\n");
                scanf("%d", &tailleF);
            }
            if (tailleF>=3)
            {
                for(i=0; i<tailleF-1; ++i)
                {
                    for (j=0; j<tailleF; ++j)
                    {
                        if ((i==0))
                        {
                            printf("*");
                        }
                        else if ((j==0))
                        {
                            printf("*");
                        }
                    }
                    printf("\n");
                }
                for(i=0; i<tailleF; ++i)
                {
                    for (j=0; j<tailleF; ++j)
                    {
                        if ((i==0)||(i==tailleF-1))
                        {
                            printf("*");
                        }
                        else if ((j==tailleF-1))
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                printf("\n");

            }
       }

       if (choix!=q)
       {
           printf("Autre choix ?\n");
           scanf(" %c", &choix);
       }
    }

    if ((choix!='a')&&(choix!='b')&&(choix!='c')&&(choix!='d')&&(choix!='e')&&(choix!='f')&&(choix!='h')&&(choix!='q'))
    {
        printf("Erreur de saisie. Votre choix ?\n");
        scanf("%c", &choix);
    }

}while(choix !='q');

    return 0;
}
