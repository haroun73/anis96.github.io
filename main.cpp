#include <iostream>
#include <string>

class Moteur {
public:
    void demarrer() {
        std::cout << "Moteur démarré." << std::endl;
    }

    void arreter() {
        std::cout << "Moteur arrêté." << std::endl;
    }
};

class Carrosserie {
public:
    void ouvrirPortes() {
        std::cout << "Portes ouvertes." << std::endl;
    }

    void fermerPortes() {
        std::cout << "Portes fermées." << std::endl;
    }
};

class Roues {
public:
    void tourner() {
        std::cout << "Roues en mouvement." << std::endl;
    }

    void arreter() {
        std::cout << "Roues à l'arrêt." << std::endl;
    }
};

class Voiture {
private:
    Moteur moteur;
    Carrosserie carrosserie;
    Roues roues;
    bool estDemarree;

public:
    Voiture() : estDemarree(false) {}

    void demarrer() {
        if (!estDemarree) {
            moteur.demarrer();
            carrosserie.ouvrirPortes();
            roues.tourner();
            estDemarree = true;
            std::cout << "La voiture est démarrée." << std::endl;
        }
        else {
            std::cout << "La voiture est déjà en marche." << std::endl;
        }
    }

    void arreter() {
        if (estDemarree) {
            moteur.arreter();
            carrosserie.fermerPortes();
            roues.arreter();
            estDemarree = false;
            std::cout << "La voiture est arrêtée." << std::endl;
        }
        else {
            std::cout << "La voiture est déjà à l'arrêt." << std::endl;
        }
    }
};

int main() {
    Voiture maVoiture;

    int choix;

    do {
        std::cout << "\nGestionnaire de Voiture\n";
        std::cout << "1. Démarrer la voiture\n";
        std::cout << "2. Arrêter la voiture\n";
        std::cout << "3. Quitter\n";
        std::cout << "Entrez votre choix : ";
        std::cin >> choix;

        switch (choix) {
        case 1:
            maVoiture.demarrer();
            break;
        case 2:
            maVoiture.arreter();
            break;
        case 3:
            std::cout << "Au revoir !" << std::endl;
            break;
        default:
            std::cout << "Choix invalide. Réessayez." << std::endl;
        }
    } while (choix != 3);

    return 0;
}
