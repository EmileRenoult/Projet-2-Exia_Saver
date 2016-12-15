#include "eXiaSaver_fonction.c"
#include <errno.h>

int main(int argc, const char *argv[]){
	char *NomDuProgramme = malloc(sizeof(char)*22);
		if (argc>1){
			if (strcmp(argv[1],"-stat")==0){
				check_tailleerminal();
				system("clear");
				switch(menu()){
					case 1: strcpy(NomDuProgramme,"eXiaSaver_Statique"); goto execute_mark;
						break;
					case 2: strcpy(NomDuProgramme,"eXiaSaver_Dynatique"); goto execute_mark;
						break;
					case 3: strcpy(NomDuProgramme,"eXiaSaver_Interactif"); goto execute_mark;
						break;
					case 4: afficherInformationFichier();
						break;
					// pas besoin de default car menu gere déja que les nombre soit comprit entre 1..4
				}
			}
		} else {
		check_tailleerminal();
		int choix=Random();
		//printf("%d\n",choix );
		switch(choix){
				case 1:strcpy(NomDuProgramme,"eXiaSaver_Statique");
					break;
				case 2:strcpy(NomDuProgramme,"eXiaSaver_Dynatique");
					break;
				case 3:strcpy(NomDuProgramme,"eXiaSaver_Interactif");
					break;
					// pas besoin de default car random gere déja que les nombre soit comprit entre 1..3
				}
			}
		execute_mark:;
		EcrireSurFichierInformation(choix);
	
		while(1/*condition d'arret*/){
			check_tailleerminal();
			execute(NomDuProgramme);
		}
		return 0;
}
