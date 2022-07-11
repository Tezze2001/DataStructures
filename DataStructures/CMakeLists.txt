# CMakeList.txt: progetto CMake per DataStructures. Includere l'origine e definire
# qui la logica specifica del progetto.
#
cmake_minimum_required (VERSION 3.8)

# Aggiungere l'origine all'eseguibile di questo progetto.
add_executable (DataStructures "DataStructures.cpp" "DataStructures.h" "headers/Node.h" "headers/LinkedList/LinearNode.h" "headers/LinkedList/LinkedList.h"    "headers/LinkedList/DoubleLinkedList.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DataStructures PROPERTY CXX_STANDARD 20)
endif()

# TODO: Aggiungere i test e, se necessario, installare le destinazioni.
