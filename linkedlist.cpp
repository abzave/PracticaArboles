#include "linkedlist.h"

LinkedList::LinkedList(){
    first = nullptr;
    last = nullptr;
}

void LinkedList::add(ClientNode* node){
    if(!first){
        first = node;
        last = first;
    }else{
        last->next = node;
        last = last->next;
    }
}
