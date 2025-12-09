/**
* @file menu.cpp
* @brief Fichier permettant la gestion du menu (affichage et choix)
* @author J. Ricard (xavier)
* @version v1.0
* @date 07/12/2025
*/

#include "Menu/menu.h"

void afficherMenu() {
    cout << "CIEL - Gestion centralisee de logs" << endl;
    cout << "Menu" << endl;
    cout << " Choisir une option" << endl;
    cout << "1 - Afficher log sudo" << endl;
    cout << "2 - Afficher et enregistrer log ssh" << endl;
    cout << "3 - pocoGetAllLog" << endl;
    cout << "4 - pocoGetOneLog" << endl;
    cout << "5 - pocoPostSSHLog" << endl;
    cout << "0 - Sortir du programme" << endl << endl;
}

int choixLog(int choixLog) {
    /* Structure if
    if (choix == 1) {
        cout << "log sudo" << endl;
    }
    else if (choix == 2) {
        cout << "log ssh" << endl;
    }
    else if (choix == 3) {
        cout << "pocoGetAllLog" << endl;
    }
    else if (choix == 4) {
        cout << "pocoGetOneLog" << endl;
    }
    else if (choix == 5) {
        cout << "pocoPostSSHLog" << endl ;
    }
    else if (choix == 0) {
        cout << "Bye bye " << endl;
    }
    else {
        cout << "Choix non implémenté, choisir une autre touche svp" << endl;
        main();
    } */

    // Structure switch
    switch (choixLog) {
        case 1:
            cout << "Afficher log sudo" << endl;
            return 1;
        case 2:
            cout << "Log ssh" << endl;
            return 2;
        case 3:
            cout << "pocoGetAllLog" << endl;
            return 3;
        case 4:
            cout << "pocoGetOneLog" << endl;
            return 4;
        case 5:
            cout << "pocoPostSSHLog" << endl;
            return 5;
        case 0:
            cout << "Sortie" << endl;
            return 0;
        default:
            cout << "Choix non implemente, choisir une autre touche svp" << endl << endl;
            main();
            break;
    }
}