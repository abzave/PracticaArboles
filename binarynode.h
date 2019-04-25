#ifndef BINARYNODE_H
#define BINARYNODE_H
#include <clientnode.h>

struct BinaryNode{
    ClientNode* node;
    int id;
    BinaryNode* left;
    BinaryNode* right;
    BinaryNode();
    BinaryNode(ClientNode* node);
    int getID();
};

#endif // BINARYNODE_H
