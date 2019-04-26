#ifndef SEARCHBINARYTREE_H
#define SEARCHBINARYTREE_H
#include <binarynode.h>

struct BinarySearchTree{
    BinaryNode* root;
    BinarySearchTree();
    ClientNode* search(int id);
    ClientNode* searchFromNode(int id, BinaryNode* node);
};

#endif // SEARCHBINARYTREE_H
