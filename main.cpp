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
 * @brief Affiche le menu de l'application.
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
 * @fn int choisirLog(int choixLog)
 * @brief Choisir le log à afficher et/ou traiter.
 * @param int choixLog : choix du log à afficher (saisi par l'utilisateur).
 * @return int : Retourne 0 pour l'instant.
 */
int choisirLog(int choixLog) {
    switch (choixLog) {
        case 0:
            cout << "Fermeture du programme..." << endl;
            break;
        case 1:
            cout << "Lancement de l'analyse des logs Sudo" << endl;
            break;
        case 2:
            cout << "Lancement de l'analyse des logs SSH" << endl;
            break;
        case 3:
            cout << "Appel de pocoGetAllLog" << endl;
            break;
        case 4:
            cout << "Appel de pocoGetOneLog" << endl;
            break;
        case 5:
            cout << "Appel de pocoPostSSHLog" << endl;
            break;
        default:
            cout << "Erreur : Option invalide !" << endl;
            break;
    }
    return 0;
}

/**
 * @fn int main()
 * @brief Point d'entrée de l'application.
 * @return int 0 si le programme s'est terminé correctement.
 */
int main() {
    int choix;

    cout << "CIEL - Gestion centralisee de logs" << endl;

    // 1. Affichage du menu
    afficherMenu();

    // 2. Saisie utilisateur
    cout << "Votre choix : ";
    cin >> choix;
    cout << "Vous avez choisi l'option : " << choix << endl;

    // 3. Appel de la fonction choisirLog
    choisirLog(choix);

    return 0;
}