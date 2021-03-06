#include <binarysearchtree.h>

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

void BinarySearchTree::addNode(BinaryNode *raiz, BinaryNode* node){
    if(root == nullptr){
        root = node;
        return;
    }
    else if(node->getID() < root->getID()){
        addNodoHijo(&(root->left), node);
        return;
    }
    else {
        addNodoHijo(&(root->right), node);
        return;
    }
}

void BinarySearchTree::addNodoHijo(BinaryNode **raiz, BinaryNode *node){
    if((*raiz) == nullptr){
        *raiz = node;
        return;
    }else if(node->getID() < (*raiz)->getID()){
        addNodoHijo(&((*raiz)->left), node);
        return;
    }else{
        addNodoHijo(&((*raiz)->right), node);
        return;
    }
}

void BinarySearchTree::printTree(BinaryNode *raiz){
    if(raiz != nullptr){
        printTree(raiz->left);
        raiz->toString();
        printTree(raiz->right);
    }
}
