#include <binarysearchtree.h>

BinarySearchTree::BinarySearchTree(){
    root = nullptr;
}

void BinarySearchTree::add(BinaryNode *node){
    if(!root){
        root = node;
    }else if(node->getID() < root->getID()){
        addToParent(node, &(root->left));
    }else{
        addToParent(node, &(root->right));
    }
}

void BinarySearchTree::addToParent(BinaryNode *node, BinaryNode **parent){
    if(!(*parent)){
        *parent = node;
    }else if(node->getID() < (*parent)->getID()){
        addToParent(node, &((*parent)->left));
    }else{
        addToParent(node, &((*parent)->right));
    }
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
