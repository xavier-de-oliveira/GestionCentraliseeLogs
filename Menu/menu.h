/**
 * @file menu.h
 * @brief Déclarations des fonctions du module Menu.
 * @author Xavier de-oliveira
 * @version v1.0
 * @date 09/12/2025
 */

#ifndef GESTIONCENTRALISEELOGS_MENU_H
#define GESTIONCENTRALISEELOGS_MENU_H

#include "../main.h"

/**
 * @fn void afficherMenu()
 * @brief Affiche le menu de l'application.
* @return void : ne renvoie rien.
*/
void afficherMenu();

/**
 * @fn int choisirLog(int choixLog)
 * @brief Traite le choix de l'utilisateur.
 * @param choixLog L'entier saisi par l'utilisateur.
* @return int : la valeur de retour des fonctions appelées
 */
int choisirLog(int choixLog);

#endif //GESTIONCENTRALISEELOGS_MENU_H