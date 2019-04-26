#include "binarysearchtree.h"

BinarySearchTree::BinarySearchTree(){
    root = nullptr;
}

ClientNode* BinarySearchTree::search(int id){
    if(!root){
        return nullptr;
    }else if(root->getID() == id){
        return root->node;
    }else if(id < root->getID()){
        return searchFromNode(id, root->left);
    }else{
        return searchFromNode(id, root->right);
    }
}

ClientNode* BinarySearchTree::searchFromNode(int id, BinaryNode* node){
    if(!node){
        return nullptr;
    }else if(node->getID() == id){
        return node->node;
    }else if(id < node->getID()){
        return searchFromNode(id, node->left);
    }else{
        return searchFromNode(id, node->right);
    }
}

void BinarySearchTree::addNode(BinaryNode *raiz, ClientNode* node){
    if(raiz == nullptr){
        raiz = new BinaryNode(node);
        return;
    }
    if(node->client->id <= raiz->id){
        addNode(raiz, node);
    }
    else {
        addNode(raiz, node);
    }
}

void BinarySearchTree::printTree(BinaryNode *raiz){
    if(raiz != nullptr){
        printTree(raiz->left);
        raiz->toString();
        printTree(raiz->right);
    }
}
