#include <iostream>
#include <binarysearchtree.h>
#include <interface.h>

using namespace std;

int main(){
    Interface* console = new Interface();
    BinarySearchTree* tree = new BinarySearchTree();
    while(true){
        console->printMenu();
        int option = console->askOption();
        console->clearScreen();
        if(option == EXIT){
            break;
        }else if(option == INSERT){
            console->printIDMessage();
            int ID = console->askForInt();
            console->printNameMessage();
            std::string name = console->askForString();
            console->printWageMessage();
            double wage = console->askForDouble();
            console->printProvinceMessage();
            std::string province = console->askForString();
            console->printCivilMessage();
            std::string civil = console->askForString();
            console->clearScreen();

            console->printClientAddedMessage();
            console->wait();
        }else if(option == SEARCH){
            console->printIDMessage();
            int ID = console->askForInt();
            ClientNode* node = tree->search(ID);
            std::string data;
            if(!node){
                data = "No se han encontrado resultados.\n";
            }else{
                data = node->client->toString();
            }
            console->print(data);
            console->wait();
        }else if(option == PRINT){
            console->wait();
        }
    }
    return 0;
}
