#ifndef CLIENTNODE_H
#define CLIENTNODE_H
#include <client.h>

struct ClientNode{
    Client* client;
    ClientNode* next;
    ClientNode();
    ClientNode(Client* client);
};

#endif // CLIENTNODE_H
