/**
* @file main.cpp
 * @brief Point d'entrée principal de l'application GestionLog.
 * @author Xavier De-Oliveira
 * @version v2.0
 * @date 18/11/2025
 */

#include "main.h"

using namespace std;


int main(){
    int choix = 0;
    afficherMenu();
    cout << "Votre choix : ";
    cin >> choix;
    if (!cin.good()) {
        cout << "Erreur de saisie." << endl << endl;
        cin.clear(); // Effacer les indicateurs d'erreur
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // on vide tout
        main();
    } else {
        cout << "Votre choix est : " << choix << endl;
        choisirLog(choix);
    }
    return 0;
}
