#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <clientnode.h>

struct LinkedList{
    ClientNode* first;
    ClientNode* last;
    LinkedList();
    void add(ClientNode* node);
};

#endif // LINKEDLIST_H
