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
        printf("1. Démarrer la voiture\n");
        printf("2. Arrêter la voiture\n");
        printf("3. Accélérer\n");
        printf("4. Freiner\n");
        printf("5. Vérifier la vitesse\n");
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
            printf("Choix invalide. Réessayez.\n");
        }
    } while (choix != 6);

    return 0;
}

void demarrerVoiture(struct Voiture* voiture) {
    if (!voiture->estDemarree) {
        voiture->estDemarree = true;
        printf("La voiture est démarrée.\n");
    }
    else {
        printf("La voiture est déjà en marche.\n");
    }
}

void arreterVoiture(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        voiture->estDemarree = false;
        voiture->vitesse = 0;
        printf("La voiture est arrêtée.\n");
    }
    else {
        printf("La voiture est déjà à l'arrêt.\n");
    }
}

void accelerer(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        voiture->vitesse += 10;
        printf("La voiture accélère. Vitesse : %d km/h\n", voiture->vitesse);
    }
    else {
        printf("La voiture n'est pas démarrée.\n");
    }
}

void freiner(struct Voiture* voiture) {
    if (voiture->estDemarree) {
        if (voiture->vitesse > 0) {
            voiture->vitesse -= 10;
            printf("La voiture freine. Vitesse : %d km/h\n", voiture->vitesse);
        }
        else {
            printf("La voiture est déjà à l'arrêt.\n");
        }
    }
    else {
        printf("La voiture n'est pas démarrée.\n");
    }
}

void afficherVitesse(struct Voiture voiture) {
    if (voiture.estDemarree) {
        printf("Vitesse actuelle : %d km/h\n", voiture.vitesse);
    }
    else {
        printf("La voiture est à l'arrêt.\n");
    }
}

