#include "eXiaSaver.h"

int menu(){
	menu_retry:;
	printf("faite votre choix !!!\n");
	printf("1-Economiseur ecran Statique\n");
	printf("2-Economiseur ecran Dynamique\n");
	printf("3-Economiseur ecran Interactif\n");
	printf("4-les information statistique \n");
	int choix=0;
	scanf("%d",&choix);
	if (choix != 0 && choix !=1 && choix !=2 && choix != 3 && choix !=4)
	{
		printf("Erreur !! (de choix )\n Merci de bien reprendre \n");
		system("clear");
		goto menu_retry;
	} else{
		return choix;
	}
}

void execute(char *programRepertoire){
		pid_t f;
		char path[255];
		sprintf(path, "./%s",programRepertoire);
		f = fork();
		if (f==0){
			execl(path,programRepertoire, NULL);
		} else {
			wait(NULL);
			printf("\n");
		}
}

void afficherInformationFichier(){
#define TAILLE_MAX 1000
	char chaine[TAILLE_MAX] = "";
    FILE* fichier = NULL;
if (fichier != NULL){ // On vérifiie si le fichier est bien ouvert
		fichier = fopen("Historique.txt", "r+");
		while (fgets(chaine, TAILLE_MAX, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
		printf("%s", chaine); // On affiche la chaîne qu'on vient de lire
		fclose(fichier);
	}
 else
        printf("Impossible d'ouvrir le fichier d'historique");
}

void EcrireSurFichierInformation(int choix){
time_t temps;
struct tm date;
time(&temps);
date=*localtime(&temps);   
int ann = date.tm_year + 1900;
int moi = date.tm_mon +1;
int jou = date.tm_mday;
int heu = date.tm_hour;
int min = date.tm_min;
int sec = date.tm_sec; 
int NomDuProgramme = choix;
    FILE* fichier = NULL;
    fichier = fopen("Historique.txt", "a+");
    if (fichier != NULL){ // On vérifiie si le fichier est bien ouvert
    fseek(fichier, 0, SEEK_END); // On place le curseur a la fi du fichier afin de le compléter
    fprintf(fichier, "%d/%d/%d  %d:%d:%d,%d,\n", jou, moi, ann, heu, min, sec, NomDuProgramme); // On écrit la date et le nom du programme
    fclose(fichier);     
	}else
        printf("Impossible d'ecrire dans le fichier d'historique");
}
TailleTerminaleStruct TailleTerminale(){
    TailleTerminaleStruct tailleVariable;
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    tailleVariable.colone=w.ws_col;
	tailleVariable.ligne=w.ws_row;
    return tailleVariable;
}

int Random(){
  	int allea=0;
    const int MAX=3,MIN=1;
    srand(time(NULL));
    allea=(rand()%(MAX-MIN+1)+MIN);
    return allea;
}

void check_tailleerminal(){
	agra_1:;
	TailleTerminaleStruct Dimension_terminal = TailleTerminale();
	if (Dimension_terminal.colone < 40 && Dimension_terminal.ligne < 15){
		printf(" veillez agrandire le terminal SVP\n");
		/*téte de mort*/
		system("clear");
		goto agra_1;
	}
}

/*-------------------------programme au executable-----------------------------*/
taille_Image taille_Imagefonction(char *NomImage){
	FILE *l;
	char *maligne = malloc(sizeof(char*)*6);
    l=fopen(NomImage,"r+");
    if(l==NULL){
        printf("Error d'ouverture du fichier membre");
        exit(0);
    }
	//commentaire:;
	fgets(maligne,6,l);//nombre magic
	/*if ((strncmp(maligne,'#',1)!=0))
		goto commentaire;*/
    fgets(maligne,6,l);
    taille_Image tt;
    char *tmp;
    tt.x = strtol(strtok(maligne," "),&tmp,0);
    tt.y = strtol(strtok(NULL," "),&tmp,0);
    free(maligne);
    printf("%d %d",tt.x,tt.y);
    fclose(l);
    return tt;
}

void AfficherImage(char *NomImage){
	int i,j/*,x_milieu,y_milieu*/;
	/////////*allocation du tableau en fonction de taille du tableau*////////////
	TailleTerminaleStruct DimConsole=TailleTerminale();
	char **Background = malloc(sizeof(char *)*DimConsole.ligne);
	for (i = 0; i <= DimConsole.ligne; ++i)
		Background[i] = malloc(sizeof(char *)*DimConsole.colone);
	/////////////////////////////////**/
	system("clear");
	for (int i = 0; i < DimConsole.ligne; ++i){
		for (j = 0; j < DimConsole.colone; ++j){
			Background[i][j]='#';printf("#");
		}
		printf("\n");
	}
	/////////////////////////**/
	free(Background);
}
int toCentreImageX(TailleTerminaleStruct DimCos,taille_Image DimImg,char *NomImage){
		DimCos=TailleTerminale();
		DimImg=taille_Imagefonction(NomImage);
		return ((DimCos.ligne/2)-(DimImg.x/2));
}
int toCentreImageY(TailleTerminaleStruct DimCos,taille_Image DimImg,char *NomImage){
		DimCos=TailleTerminale();
		DimImg=taille_Imagefonction(NomImage);
		return ((DimCos.colone/2)-(DimImg.y/2));
}

void PbmToTableau(char NomImage[15]){
    taille_Image vartaille = taille_Imagefonction(NomImage);
	FILE *l;
    int k=0,i=0, j=0;
    char **tableau=malloc(sizeof(char)*vartaille.x);
		for (i = 0; i < vartaille.x; ++i)
			tableau[i] = (char *) malloc(sizeof(char)*vartaille.y);	
	char *maligne = malloc(sizeof(char)*6);
	l=fopen(NomImage,"r+");
    if(l==NULL){
        printf("Error d'ouverture du fichier !");
        exit(0);
    }
    fgets(maligne,6,l);
	fgets(maligne,6,l);
	fgets(maligne,6,l);
	char c;
	for (i = 0; i <= vartaille.y; i++){
		for (k = 0; k <= vartaille.x; k++){
				c=fgetc(l);
				if (c=='1' || c=='0'){
					tableau[i][j]=c;
					j++;
				}
			}
			j=0;
		}
	fclose(l);
}
