#include <stdio.h>
#include <stdbool.h>



struct Voiture {
    bool estDemarree;
    int vitesse;
};


void demarrerVoiture(struct Voiture* voiture);
void arreterVoiture(struct Voiture* voiture);
void accelerer(struct Voiture* voiture);
void freiner(struct Voiture* voiture);
void afficherVitesse(struct Voiture voiture);

int main() {
    struct Voiture maVoiture;
    maVoiture.estDemarree = false;
    maVoiture.vitesse = 0;

    int choix;

    do {
        printf("\nSimulateur de Voiture\n");
        printf("1. D�marrer la voiture\n");
        printf("2. Arr�ter la voiture\n");
        printf("3. Acc�l�rer\n");
        printf("4. Freiner\n");
        printf("5. V�rifier la vitesse\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            demarrerVoiture(&maVoiture);
            break;
        case 2:
            arreterVoiture(&maVoiture);
            break;
        case 3:
            accelerer(&maVoiture);
            break;
        case 4:
            freiner(&maVoiture);
            break;
        case 5:
            afficherVitesse(maVoiture);
            break;
        case 6:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide. R�essayez.\n");
        }
    } while (choix != 6);

    return 0;
}

void demarrerVoiture(struct Voiture* voiture) {
    if (!voiture->estDemarree) {
        voiture->estDemarree = true;
        printf("La voiture est d�marr�e.\n");
    }
    else {
        printf("La voiture est d�j� en marche.\n");
    }
}

void arreterVoiture(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        voiture->estDemarree = false;
        voiture->vitesse = 0;
        printf("La voiture est arr�t�e.\n");
    }
    else {
        printf("La voiture est d�j� � l'arr�t.\n");
    }
}

void accelerer(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        voiture->vitesse += 10;
        printf("La voiture acc�l�re. Vitesse : %d km/h\n", voiture->vitesse);
    }
    else {
        printf("La voiture n'est pas d�marr�e.\n");
    }
}

void freiner(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        if (voiture->vitesse > 0) {
            voiture->vitesse -= 10;
            printf("La voiture freine. Vitesse : %d km/h\n", voiture->vitesse);
        }
        else {
            printf("La voiture est d�j� � l'arr�t.\n");
        }
    }
    else {
        printf("La voiture n'est pas d�marr�e.\n");
    }
}

void afficherVitesse(struct Voiture voiture) {
    if (voiture.estDemarree) {
        printf("Vitesse actuelle : %d km/h\n", voiture.vitesse);
    }
    else {
        printf("La voiture est � l'arr�t.\n");
    }
}

