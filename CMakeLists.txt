cmake_minimum_required(VERSION 3.20)          # Vertion de CMAKE minimal pour le compilation
project(GestionCentraliseeLogs LANGUAGES CXX) # Nom et version du projet C++

set(CMAKE_CXX_STANDARD 20)             # Standard C++ MAX
set(CMAKE_CXX_STANDARD_REQUIRED ON)    # Verification des requis C++

# Fichiers sources (C et Cpp)
set(SRCS
        main.cpp
        Menu/menu.cpp
)

# Fichier d'en-têtes (H et HPP)
set(HEADER
        Menu/menu.cpp
)

include_directories(menu)                      # Inclure les Dossiers de class

# Crée l'exécutable (Commande d'execution GDB et G++)
add_executable(${PROJECT_NAME} ${SRCS} ${HEADER})
