/**
* @file menu.h
* @brief Fichier header contenant les en-têtes des fonctions développées dans menu.cpp
* @author J. Ricard (xavier)
* @version v1.0
* @date 07/12/2025
*/

#ifndef GESTIONCENTRALISEELOGS_MENU_H
#define GESTIONCENTRALISEELOGS_MENU_H

#include "../main.h"

/**
* @fn void afficherMenu();
* @brief Fonction qui permet l'affichage du menu :
* @brief Affiche le menu de l’application pour accéder à un log particulier.
* @return void : ne renvoie rien.
*/
void afficherMenu();

/**
* @fn int choixLog(int choixLog);
* @brief Fonction qui permet l'affichage du choix de l'utilisateur
* @param int choixLog : choix du log à afficher
* @return int : la valeur de retour des fonctions appelées
*/
int choixLog(int choixLog);

#endif //GESTIONCENTRALISEELOGS_MENU_H