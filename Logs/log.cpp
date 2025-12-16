/**
* @file log.cpp
 * @brief declaration des gestions des log
 * @author Xavier De-Oliveira
 * @version v1.0
 * @date 16/11/2025
 */


#include "log.h"
#include <iostream>
#include <fstream> // Nécessaire pour les fichiers (ofstream, ifstream)
#include <string>

using namespace std;

// Partie 2.1 : Ouverture et écriture [cite: 71]
void testEcritureFichier() {
    // ofstream = Output File Stream (pour ÉCRIRE)
    ofstream monFichier("test.txt");

    if (monFichier.is_open()) {
        // Écriture de plusieurs lignes comme demandé [cite: 74]
        monFichier << "Ligne 1 : Ceci est un test d'écriture." << endl;
        monFichier << "Ligne 2 : Le module Logs fonctionne." << endl;
        monFichier << "Ligne 3 : Fin du test." << endl;

        // Fermeture du fichier (étape 2.3) [cite: 86]
        monFichier.close();
        cout << "--> Fichier test.txt écrit avec succès." << endl;
    } else {
        cerr << "Erreur : Impossible de créer le fichier." << endl;
    }
}

// Partie 2.2 : Ouverture et lecture [cite: 82]
void testLectureFichier() {
    // ifstream = Input File Stream (pour LIRE)
    ifstream monFichier("test.txt");
    string ligne;

    if (monFichier.is_open()) {
        cout << "--- Lecture du fichier test.txt ---" << endl;

        // La boucle lit le fichier ligne par ligne tant qu'il y a du contenu [cite: 84]
        while (getline(monFichier, ligne)) {
            cout << ligne << endl;
        }

        monFichier.close(); // Toujours fermer le fichier [cite: 86]
    } else {
        cerr << "Erreur : Impossible de lire le fichier (existe-t-il ?)." << endl;
    }
}

// La fonction sudoLog sera ajoutée juste après...
void sudoLog() {
    cout << "Fonctionnalité Linux à venir..." << endl;
}