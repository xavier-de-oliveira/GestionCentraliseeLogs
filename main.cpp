/**
* @file main.cpp
 * @brief Point d'entrée principal de l'application GestionLog.
 * @author Xavier de-oliveira
 * @version v1.0
 * @class BTS-CIEL IR
 * @date 18/11/2025
 */

#include <iostream> // Inclusion de la bibliothèque standard pour les entrées/sorties

using namespace std; // Permet d'utiliser les éléments standard (comme cout) sans préfixe std:

/**
 * @fn void afficherMenu()
 * @brief Affiche le menu de l'application pour accéder aux différentes fonctionnalités.
 * @return void
 */
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

/**
 * @fn int main()
 * @brief Point d'entrée de l'application.
 * @details Affiche le titre du projet et le menu principal.
 * @return int 0 si le programme s'est terminé correctement.
 */
int main() {
    // Déclaration de la variable
    int choix;

    // Affichage du titre du projet
    cout << "CIEL - Gestion centralisee de logs" << endl;

    // Appel de la fonction d'affichage du menu
    afficherMenu();

    // Etape 3 :
    // Demande de saisie a l'utulisateur
    cout << "Votre choix : ";
    cin >> choix;


    // Affichage du choix selectionné pour v"rification
    cout << "Votre choix est :" << choix << endl;

    // Etape 4 : Gestion du choix avec if/else if
    if (choix == 0) {
        cout << "Sortir du programme" << endl;
    }
    else if (choix == 1) {
        cout << "Afficher log sudo " << endl;
    }
    else if (choix == 2) {
        cout << "Afficher et enregistrer log ssh" << endl;
    }
    else if (choix == 3) {
        cout << "pocoGetAllLog" << endl;
    }
    else if (choix == 4) {
        cout << "pocoGetOneLog" << endl;
    }
    else if (choix == 5) {
        cout << "pocoPostSSHLog" << endl;
    }

    return 0;
}
