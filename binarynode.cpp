#include "binarynode.h"

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

void BinaryNode::toString(){
    std::string message = "";
    message += "Cedula: " + std::to_string(node->client->id) + "\n";
    message += "Nombre: " + node->client->name + " " + node->client->lastName + "\n";
    message += "Salario: " + std::to_string(node->client->wage) + "\n";
    message += "Provincia: " + node->client->province + "\n";
    message += "Civil: " + node->client->civil + "\n";
    std::cout << message;
}
