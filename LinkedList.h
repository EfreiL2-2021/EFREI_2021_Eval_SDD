/*****************************************************************//**
 * \file   LinkedList.h
 * \brief  Fichier d'entête pour manipuler une liste chainée.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   12 December, 2021
 *********************************************************************/
#include <stdlib.h>
#include <stdio.h>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/**
 * \struct Element
 * \brief Structure de données définissant un élément d’une LSC d’entiers.
 */
typedef struct Element {
    int data;
    struct Element *next;
} Element;

// Zone pour vos fonctions personnelles si besoin

/**
 * \brief 4 pts : Renvoie le nombre de valeurs paires dans une liste chainée.
 * \param linkedList Le pointeur de la liste chainée à analyser
 * \return Le nombre de noeuds dont les deux enfants sont des feuilles.
 */
int getEvenCount(Element *linkedList);

/**
 * \brief 6 pts : Déplace le dernier élément d'une liste chainée à sa tête. L'élément complet, pas juste la valeur ou une copie.
 * \param linkedList Un pointeur contenant le pointeur de la liste chainée à modifier
 * \return Le nombre de noeuds dont les deux enfants sont des feuilles.
 */
void moveToFront(Element **linkedList);

#endif //LINKEDLIST_H
