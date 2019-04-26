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
