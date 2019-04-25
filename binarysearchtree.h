#ifndef SEARCHBINARYTREE_H
#define SEARCHBINARYTREE_H
#include <binarynode.h>

struct BinarySearchTree{
    BinaryNode* root;
    BinarySearchTree();
    void add(BinaryNode* node);
    void addToParent(BinaryNode* node, BinaryNode** parent);
    ClientNode* search(int id);
    ClientNode* searchFromNode(int id, BinaryNode* node);
};

#endif // SEARCHBINARYTREE_H
