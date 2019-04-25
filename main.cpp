#include <iostream>
#include <binarysearchtree.h>
#include <interface.h>

using namespace std;

int main(){
    Interface* console = new Interface();
    while(true){
        console->printMenu();
        int option = console->askOption();
        if(option == EXIT){
            break;
        }
        console->clearScreen();
    }
    return 0;
}
