/**
* @file menu.cpp
 * @brief Implémentation des fonctions du module Menu.
 * @author Xavier de-oliveira
 * @version v2.0
 * @date 09/12/2025
 */

#include "menu.h"      // On inclut le fichier header associé

// Fonction déplacée depuis le main.cpp
void afficherMenu() {
    cout << "Menu" << endl;
    cout << " Choisir une option" << endl;
    cout << "1 - Afficher log sudo" << endl;
    cout << "2 - Afficher et enregistrer log ssh" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl;
}

// Fonction déplacée depuis le main.cpp
int choisirLog(int choixLog) {
    switch (choixLog) {
        case 0:
            cout << "Fermeture du programme..." << endl;
            return 0;
        case 1:
            cout << "Lancement de l'analyse des logs Sudo" << endl;
            return 1;
        case 2:
            cout << "Lancement de l'analyse des logs SSH" << endl;
            return 2;
        case 3:
            cout << "Appel de pocoGetAllLog" << endl;
            return 3;
        case 4:
            cout << "Appel de pocoGetOneLog" << endl;
            return 4;
        case 5:
            cout << "Appel de pocoPostSSHLog" << endl;
            return 5;
        default:
            cout << "Erreur : Option invalide !" << endl;
            return -1;
    }
}