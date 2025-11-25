/**
* @file main.cpp
 * @brief Point d'entrée principal de l'application GestionLog.
 * @author Xavier de-oliveira
 * @version v1.0
 * @class BTS-CIEL IR
 * @date 18/11/2025
 */

#include <iostream>
#include "Menu/menu.h" // Inclusion obligatoire pour utiliser afficherMenu et choisirLog

using namespace std;

/**
 * @fn int main()
 * @brief Point d'entrée de l'application.
 * @return int 0 si le programme s'est terminé correctement.
 */
int main() {
    int choix;

    cout << "CIEL - Gestion centralisee de logs" << endl;

    // 1. Affichage du menu (Appel via le module Menu)
    afficherMenu();

    // 2. Saisie utilisateur
    cout << "Votre choix : ";
    cin >> choix;
    cout << "Vous avez choisi l'option : " << choix << endl;

    // 3. Appel de la fonction choisirLog (Appel via le module Menu)
    choisirLog(choix);

    return 0;
}