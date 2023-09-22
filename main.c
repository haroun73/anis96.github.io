#include <stdio.h>
struct MachineALaver {
	int demarree;
};

void demarrer(struct MachineALaver* machine) {
	if (machine > demarree) {
		printf("la machine a laver démarre\n");
		machine > demarree = 1;
	}
	else {
		printf("la machine a laver est deja en marche \n");
	}
}

void arreter(struct MachineALaver* machine) {
	if (machine > demarree) {
		printf("la machine a laver s'arretee \n");
		machine > demarree = 0;
	}
	else {
		printf("la machine a laver est deja arretee\n");
	}
}


int main() {
    struct MachineALaver machine = { 0 }; 

    printf("Bienvenue dans l'application de contrôle de la machine à laver.\n");

    int choix;

    do {
        printf("Choisissez une option :\n");
        printf("1. Démarrer la machine à laver\n");
        printf("2. Arrêter la machine à laver\n");
        printf("3. Quitter\n");

        scanf("%d", &choix);

        switch (choix) {
        case 1:
            demarrer(&machine);
            break;
        case 2:
            arreter(&machine);
            break;
        case 3:
            printf("Fin de l'application.\n");
            break;
        default:
            printf("Option non valide. Veuillez choisir une option valide.\n");
            break;
        }
    } while (choix != 3);

    return 0;
}
