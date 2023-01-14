#include<stdio.h>

#include<string.h>

struct prof {

    int  ns;

    char nom[25];

    char prenom[25];

     int td;

     int tp;

     int cr;

}prof;

struct prof PRF[3];

int n=0;



void AJOUTER(){

    int i,j,k,a;

    printf("donner le nombre de prof que vous voulez ajouter: ");

        scanf("%d",& a);



    for(i=0; i<a; i++){

                        system("cls");

                        printf("Donner le ns: ");

                        scanf("%d",&PRF[i+n].ns);

                        printf("\nDonner le nom de prof: ");

                        scanf("%s",&PRF[i+n].nom);

                        printf("\nDonner le td de prof: ");

                        scanf("%d",&k);

    if(k==1){

                printf("\nDonner  le Prenom de prof: ");

                scanf("%s",&PRF[i+n].prenom);

    }

    else{

        for(j=0;j<k;j++){

                        printf("\nDonner le Nom et le Prenom de prof(%d): ",j+1);

                        scanf("%s",&PRF[i+n].nom+j);
                         scanf("%s",&PRF[i+n].prenom+j);

        }

    }

    printf("\nDonner le tp\n");

    scanf("%s",&PRF[i+n].tp);

    printf("\nDonner le cr:\n");



scanf("%s",&PRF[i+n].cr);

    }

    n=n+a;

}



void MODIFIER(){

int choix,nc,j,k,y,id,c,o;

char nt[50],p,na[30],nm[50],nd[10];

do{



    printf("\ndonner le ns de prof: ");

    scanf("%d",&id);

    printf("n=%d id=%d",n,id);

}while(id>n);

system("cls");

printf("1:pour modifier une information\n2:pour modifier toutes les informations\n3:pour modifier ensemble d'information  ");

scanf("\n%d",&y);

system("cls");

if (y==1){

            printf ("Choisissez ce que vous voulez modifier: ");

            printf("\n1:LE NS\n2:LE NOM\n3:LE PRENOM\n4:LE TP\n5:LE TD\n");

            scanf("%d",&choix);

switch (choix){

                case 1:printf("le ns precedent est: %d",PRF[id-1].ns);

do{

    printf("\ntu es sure de vous voullez changer le ns?:\nO: pour oui\nN:pour non\n");

    scanf("\n %c",&p);

}while(p!='o'&&p!='O'&&p!='n'&&p!='N');





system("cls");

if(p=='o'||p=='O')

    {

        printf("donner le nouveau ns: ");

        scanf("%d",&nc);

        PRF[id-1].ns=nc;}



break;



case 2:

    printf("le cr est: %s",PRF[id-1].cr);

    printf("\ntu es sure de vous voullez changer le cr?:\nO: pour oui\nN:pour non\n");

    scanf("\n%s",&p);

    system("cls");

    if(p=='o'||p=='O'){

                        printf("donner le nouveau cr: ");

                        scanf("%s",&nt);

                        strcpy(PRF[id-1].cr,nt);

    }

break;



case 4:printf("Le tp est: %s",PRF[id-1].tp);

printf("\ntu es sure de vous voullez changer Le tp?:\nO: pour oui\nN:pour non\n");

scanf("%s",&p);

system("cls");

if(p=='o'||p=='O')

    {

        printf("donner la nouvelle tp: ");

        scanf("%s",&nd);

        PRF[id-1].tp=nd;}

break;

 case 5:printf("le td est: %d",PRF[id-1].td);

printf("\ntu es sure de vous voullez changer le td ?:\nO: pour oui\nN:pour non\n");

scanf("% c",&p);

system("cls");

if(p=='o'||p=='O')

    {

        printf("donner la nouvelle td: ");

        scanf("%s",&nm);

        strcpy(PRF[id-1].td , nm);

}



break;}}



if(y==2){

       do{

    printf("tu es sure que vous voullez changer tous les informations:\nO: pour oui\nN:pour non\n");

    scanf("\n %c",&p);

}while(p!='o'&&p!='O'&&p!='n'&&p!='N');

system("cls");

       if(p=='o'||p=='O'){

            printf("Donner le novaux ns: ");

            scanf("%d",&nc);

            PRF[id-1].ns=nc;



            printf("\nDonner le novaux nom: ");

            scanf("%s",&nt);

            strcpy(PRF[id-1].nom,nt);

            printf("\nDonner le prenom: ");

            scanf("%d",&k);

            if(k==1){

                printf("\nDonner le td et le cr : ");

                scanf("%s",&na);



            }



else{

                for(j=1;j<=k;j++){

                    printf("\nDonner le td et le cr (%d): ",j);

                    scanf("%s",&na);

                }

            }

            strcpy(PRF[id-1].nom, na);

            printf("\nDonner le nom : \n");

            scanf("%s",&nd);

            strcpy(PRF[id-1].nom, nd);

            printf("\nDonner le prenom: ");

            scanf("%s",&nm);

            strcpy(PRF[id-1].prenom, nm);

            }

            if(p=='n'||p=='N'){



}}





                    }



void SUPRIMER(){

        int position,i;

        int ls,j;

        char aa[30];



        printf(" le nombre de td est: %d\n ",n);

        printf("combien td tu veux suprimer: ");

        scanf("%d", & ls);

        system("cls");

        do{

            if(ls>n){

                     printf("Suppression impossible.\n");

            }

            system("cls");

            for(j=0 ;j < n ;j++){

                printf("\nEntrez le ns de prof %d que vous voullez supprimer : ",j+1);

                scanf("%d", &position);



                if (position > n ){

                        printf("Suppression impossible.\n");

                }



if(ls < n && position < n){

                        for (i = position ; i <= n ; i++){

                        PRF[i].ns = PRF[i+1].ns;

                        strcpy(PRF[i].nom , PRF[i+1].nom);

                        strcpy(PRF[i].prenom , PRF[i+1].prenom);

                        strcpy(PRF[i].cr , PRF[i+1].cr);

                        strcpy(PRF[i].tp , PRF[i+1].tp);

                        strcpy(PRF[i].td , PRF[i+1].td);

                        }

                        printf("\nle ns de prof  est suprimmer avec succes .", aa);





                }n=n-ls;

            }

          }while(ls>n&&position>n);





}



void RECHERCHER(struct prof PRF ) {

  int ns;

printf("\nEntrez le ns que vous voullez rechercher : ");

scanf("%d", &ns);

  int i;

  for (i = 0; i < n; i++) {



  printf("prof trouver!\n");



  }



  printf("ns ne existe pas!\n");

}



void AFFICHIER(){

int i;

  for (i = n; i > 0; i--) {

          printf("le prof (%d): \n", i);

          printf("NS: %d\n", PRF[i-1].ns);

          printf("NOM: %s\n", PRF[i-1].nom);

          printf("PRENOM: %s\n", PRF[i-1].prenom);

          printf("TD: %s\n", PRF[i-1].td);

          printf("TP: %s\n", PRF[i-1].tp);

           printf("CR: %s\n", PRF[i-1].cr);


          printf("\n");}}



int main(){



    int choix;

    char c;

    do{

        printf("le prof :%d\n",n);

        printf("1:AJOUTER\n2:RECHERCHER\n3:SUPRIMER\n4:MODIFIER\n5:AFFICHIER");

        printf("\nQuel procede souhaitez vous choisir ?\n");

        scanf("%d",& choix);

        system("cls");

        switch (choix){

            case 1:AJOUTER();

            break;

            case 3:SUPRIMER();

            break;

            case 4:MODIFIER();

            break;

            case 5:AFFICHIER();

            break;

        }

        printf("\nvoulez vous continuer vers menu principale ?\n");

        scanf(" %c",&c);

        system("cls");

    }while(c=='o'||c=='O');

}
