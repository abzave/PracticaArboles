#include "interface.h"

void Interface::printMenu(){
    clearScreen();
    std::cout << "********Menu********" << std::endl
              << " 1. Insertar" << std::endl
              << " 2. Buscar" << std::endl
              << " 3. Imprimir por ID" << std::endl
              << " 4. Salir" << std::endl;
    printOptionQuestion();
}

void Interface::printOptionQuestion(){
    std::cout << std::endl << "Digite una opcion: ";
}

void Interface::clearScreen(){
    system("cls");
}

void Interface::printOptionError(){
    std::cout << "Debe ingresar una opcion entre 1 y "
    << numberOfOptions << std::endl;
    printOptionQuestion();
}

void Interface::printContinueQuestion(){
    std::cout << "Desea continuar? (Y/N): ";
}

void Interface::printYesOrNoError(){
    std::cout << "Error: Solo puede ingresar Y o N: ";
}

void Interface::printIDMessage(){
    std::cout << "Ingrese la cedula: ";
}

void Interface::printNameMessage(){
    std::cout << "Ingrese el nombre: ";
}

void Interface::printWageMessage(){
    std::cout << "Ingrese el salario: ";
}

void Interface::printCivilMessage(){
    std::cout << "Ingrese el civil: ";
}

void Interface::printProvinceMessage(){
    std::cout << "Ingrese la provincia: ";
}

void Interface::printClientAddedMessage(){
    std::cout << "Cliente añadido!" << std::endl;
}

void Interface::wait(){
    system("pause");
}

void Interface::print(std::string message){
    std::cout << message;
}

int Interface::askOption(){
    int option = 0;
    while(true){
        std::cin >> option;
        if (option > 0 && option <= numberOfOptions){
            return option;
        }
        printOptionError();
    }
}

int Interface::askForInt(){
    int answer;
    std::cin >> answer;
    return answer;
}

std::string Interface::askForString(){
    std::string answer;
    std::getline(std::cin >> std::ws, answer);
    return answer;
}

bool Interface::validateYesOrNoEntry(std::string answer){
    if(answer.length() > 1){
        return false;
    }else if(answer == "Y" || answer == "y" || answer == "N" || answer == "n"){
        return true;
    }else{
        return false;
    }
}

bool Interface::parseYesOrNo(std::string answer){
    return answer == "Y" || answer ==  "y";
}

bool Interface::askYesOrNo(){
    while(true){
        std::string answer = askForString();
        if (validateYesOrNoEntry(answer)){
            return parseYesOrNo(answer);
        }else{
            printYesOrNoError();
        }
    }
}

double Interface::askForDouble(){
    double answer;
    std::cin >> answer;
    return answer;
}
