#include <clientnode.h>

ClientNode::ClientNode(){
    client = nullptr;
    next = nullptr;
}

ClientNode::ClientNode(Client* client){
    this->client = client;
    next = nullptr;
}
