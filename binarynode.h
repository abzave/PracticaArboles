#ifndef BINARYNODE_H
#define BINARYNODE_H
#include "clientnode.h"
#include <iostream>

struct BinaryNode{
    ClientNode* node;
    int id;
    BinaryNode* left;
    BinaryNode* right;
    BinaryNode();
    BinaryNode(ClientNode* node);
    int getID();
    void toString();
};

#endif // BINARYNODE_H
