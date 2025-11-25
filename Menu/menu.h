/**
 * @file menu.h
 * @brief Déclarations des fonctions du module Menu.
 * @author Xavier de-oliveira
 * @version v1.0
 * @date 18/11/2025
 */

#ifndef GESTIONCENTRALISEELOGS_MENU_H
#define GESTIONCENTRALISEELOGS_MENU_H

/**
 * @fn void afficherMenu()
 * @brief Affiche le menu de l'application.
 */
void afficherMenu();

/**
 * @fn int choisirLog(int choixLog)
 * @brief Traite le choix de l'utilisateur.
 * @param choixLog L'entier saisi par l'utilisateur.
 * @return int Code de retour (0 par défaut).
 */
int choisirLog(int choixLog);

#endif //GESTIONCENTRALISEELOGS_MENU_H