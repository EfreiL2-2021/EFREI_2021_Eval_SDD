/*****************************************************************//**
 * \file   LinkedList.h
 * \brief  Fichier d'entête pour manipuler un arbre binaire.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   12 December, 2021
 *********************************************************************/
#include <stdlib.h>
#include <stdio.h>

#ifndef BINARYTREE_H
#define BINARYTREE_H

/**
 * \struct Node
 * \brief Structure de données définissant un noeud d'un arbre binaire d’entiers.
 */
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Zone pour vos fonctions personnelles si besoin


/**
 * \brief 4 pts : Renvoie le nombre de noeuds dont les deux enfants sont des feuilles.
 * \param tree Un pointeur de Node
 * \return Le nombre de noeuds dont les deux enfants sont des feuilles.
 */
int getChildrenLeavesCount(Node *tree);

/**
 * \brief 6 pts : Renvoie la feuille la moins profonde d'un arbre binaire.
 * \param tree Un pointeur de Node
 * \return Le pointeur du Node le plus profond d'un arbre binaire.
 */
Node *getShallowestLeaf(Node *ttree);

#endif //BINARYTREE_H
