#include <binarynode.h>

BinaryNode::BinaryNode(){
    node = nullptr;
    left = nullptr;
    right = nullptr;
    id = 0;
}

BinaryNode::BinaryNode(ClientNode* node){
    this->node = node;
    left = nullptr;
    right = nullptr;
    id = node->client->getID();
}

int BinaryNode::getID(){
    return id;
}
