#include <iostream>
#include <string>

class Moteur {
public:
    void demarrer() {
        std::cout << "Moteur d�marr�." << std::endl;
    }

    void arreter() {
        std::cout << "Moteur arr�t�." << std::endl;
    }
};

class Carrosserie {
public:
    void ouvrirPortes() {
        std::cout << "Portes ouvertes." << std::endl;
    }

    void fermerPortes() {
        std::cout << "Portes ferm�es." << std::endl;
    }
};

class Roues {
public:
    void tourner() {
        std::cout << "Roues en mouvement." << std::endl;
    }

    void arreter() {
        std::cout << "Roues � l'arr�t." << std::endl;
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
            std::cout << "La voiture est d�marr�e." << std::endl;
        }
        else {
            std::cout << "La voiture est d�j� en marche." << std::endl;
        }
    }

    void arreter() {
        if (estDemarree) {
            moteur.arreter();
            carrosserie.fermerPortes();
            roues.arreter();
            estDemarree = false;
            std::cout << "La voiture est arr�t�e." << std::endl;
        }
        else {
            std::cout << "La voiture est d�j� � l'arr�t." << std::endl;
        }
    }
};

int main() {
    Voiture maVoiture;

    int choix;

    do {
        std::cout << "\nGestionnaire de Voiture\n";
        std::cout << "1. D�marrer la voiture\n";
        std::cout << "2. Arr�ter la voiture\n";
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
            std::cout << "Choix invalide. R�essayez." << std::endl;
        }
    } while (choix != 3);

    return 0;
}
