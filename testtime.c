#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  TAILLE_MAX 10000 

int main(char argc,char **argv)
{
                                                                                                 /*6*/
        FILE*fichier=NULL;                                                                              /*7*/
	char chaine[TAILLE_MAX]="";             /*j'iniatialise la chaine de caractère de taille vide */  /*12*/
	time_t temps;
	struct tm date;
	time(&temps);
	date=*localtime(&temps);
	int dizh= date.tm_hour /10;
	int unih= date.tm_hour %10;
	int dizm= date.tm_min /10;
	int unim= date.tm_min %10;
	int dizs= date.tm_sec /10;
	int unis= date.tm_sec %10;
switch (dizh)
{
	case(0):
        fichier = fopen("image/0.pbm","r");
	printf("image du chiffre 0 en pbm ");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)   /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf(" %s/",chaine);
	}
	break;
	case(1):
	fichier = fopen("image/1.pbm","r");
	printf("image du chiffre 1 en pbm %s/",chaine);
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
	case(2):
	fichier = fopen("image/2.pbm","r");
	printf("image du chiffre 2 en pbm %s/",chaine);
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}

	break;
}
 switch (unih)
{
	case(0):
	fichier = fopen("image/0.pbm","r");
	printf("image du chiffre 0 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
	printf("%s/",chaine);
	}
	break;
	case(1):
	printf("image du chiffre 1 en pbm");
	fichier = fopen("image/1.pbm","r");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
	printf("%s/",chaine);
	}
	break;
	case(2):
	fichier = fopen("image/2.pbm","r");
	printf("image du chiffre 2 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}

	break;
	case(3):
	fichier = fopen("image/3.pbm","r");
	printf("image du chiffre 3 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
        case(4):
	fichier = fopen("image/4.pbm","r");
	printf("image du chiffre 4 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}

        break;
        case(5):
	fichier = fopen("image/5.pbm","r");
	printf("image du chiffre 0 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf(" %s/",chaine);
	}
	break;
	case(6):
	fichier = fopen("image/6.pbm","r");
	printf("image du chiffre 0 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
	case(7):
	fichier = fopen("image/7.pbm","r");
	printf("image du chiffre 7 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
	case(8):
	fichier = fopen("image/8.pbm","r");
	printf("image du chiffre 8 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
	case(9):
	fichier = fopen("image/9.pbm","r");
	printf("image du chiffre 9 en pbm");
	while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
	{
		printf("%s/",chaine);
	}
	break;
}
	switch (dizm){
	case(0):
        fichier = fopen("image/0.pbm","r");
        printf("image du chiffre 0 en pbm");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
        printf("%s/",chaine);
        }
        break;
        case(1):
        printf("image du chiffre 1 en pbm");
        fichier = fopen("image/1.pbm","r");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
        printf("%s/",chaine);
        }
        break;
        case(2):
        fichier = fopen("image/2.pbm","r");
        printf("image du chiffre 2 en pbm");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
                printf("%s/",chaine);
        }

        break;
        case(3):
        fichier = fopen("image/3.pbm","r");
        printf("image du chiffre 3 en pbm");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
                printf("%s/",chaine);
        }
        break;
        case(4):
        fichier = fopen("image/4.pbm","r");
        printf("image du chiffre 4 en pbm");

	case(5):
        fichier = fopen("image/5.pbm","r");
        printf("image du chiffre 0 en pbm");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
                printf(" %s/",chaine);
        }
        break;
        case(6):
        fichier = fopen("image/6.pbm","r");
        printf("image du chiffre 0 en pbm");
        while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
        {
                printf("%s/",chaine);
        }
        break;
}
	switch (unim){
		case(0):
		fichier = fopen("image/0.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 0 en pbm %s/",chaine);
                }

        break;
		case(1):
		fichier = fopen("image/1.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 1 en pbm %s/",chaine);
                }

        break;
		case(2):
		fichier = fopen("image/2.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 2 en pbm %s/",chaine);
                }

        break;
		case(3):
		fichier = fopen("image/3.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 3 en pbm %s/",chaine);
                }

        break;
		case(4):
		fichier = fopen("image/4.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 4 en pbm %s/",chaine);
                }

        break;
		case(5):
		fichier = fopen("image/5.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 5 en pbm %s/",chaine);
                }

        break;
		case(6):
		fichier = fopen("image/6.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 6 en pbm %s/",chaine);
                }

        break;
		case(7):
		fichier = fopen("image/7.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 7 en pbm %s/",chaine);
                }

        break;
		case(8):
		fichier = fopen("image/8.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 8 en pbm %s/",chaine);
                }

        break;
		case(9):
		fichier = fopen("image/9.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 9 en pbm %s/",chaine);
                }

        break;
	}
	switch (dizs){
		case(0):
		fichier = fopen("image/0.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 0 en pbm %s/",chaine);
                }

        break;	
		case(1):
		fichier = fopen("image/1.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 1 en pbm %s/",chaine);
                }

        break;
		case(2):
		fichier = fopen("image/2.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 2 en pbm %s/",chaine);
                }

        break;
		case(3):
		fichier = fopen("image/3.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 3 en pbm %s/",chaine);
                }

        break;
		case(4):
		fichier = fopen("image/4.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 4 en pbm %s/",chaine);
                }

        break;
		case(5):
		fichier = fopen("image/5.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 5 en pbm %s/",chaine);
                }

        break;
		case(6):
		fichier = fopen("image/6.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 6 en pbm %s/",chaine);
                }

        break;
	}
	switch (unis){
		case(0):
		fichier = fopen("image/0.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 0 en pbm %s/",chaine);
                }

        break;
		case(1):
		fichier = fopen("image/1.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 1 en pbm %s/",chaine);
                }

        break;
		case(2):
		fichier = fopen("image/2.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 2 en pbm %s/",chaine);
                }

        break;
		case(3):
		fichier = fopen("image/3.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 3 en pbm %s/",chaine);
                }

        break;
		case(4):
		fichier = fopen("image/4.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 4 en pbm %s/",chaine);
                }

        break;
		case(5):
		fichier = fopen("image/5.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 5 en pbm %s/",chaine);
                }

        break;
		case(6):
		fichier = fopen("image/6.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 6 en pbm %s/",chaine);
                }

        break;
		case(7):
		fichier = fopen("image/7.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 8 en pbm %s/",chaine);
                }

        break;
		case(8):
		fichier = fopen("image/8.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 8 en pbm %s/",chaine);
                }

        break;
		case(9):
		fichier = fopen("image/9.pbm","r");
                while(fgets(chaine,TAILLE_MAX,fichier)!=NULL)    /*on lis un maximun de caractère sur le fichier p$*/
                {
                        printf("image du chiffre 9 en pbm %s/",chaine);
                }

        break;
}
	printf("%d",dizh);
	printf("%d",unih);
	printf(":");
	printf("%d",dizm);
	printf("%d",unim);
	printf(":");
	printf("%d",dizs);
	printf("%d",unis);

	return 0;
}
