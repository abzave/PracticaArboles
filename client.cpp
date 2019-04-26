#include "client.h"

Client::Client(){
    id = 0;
    wage =  0;
    name = "";
    lastName = "";
    province = "";
    civil = "";
}

Client::Client(int id, double wage, std::string name,
               std::string province, std::string civil){
    this->id = id;
    this->wage =  wage;
    this->name = name.substr(0, name.find(' '));
    this->lastName = name.substr(name.find(' ') + 1, name.length());
    this->province = province;
    this->civil = civil;
}

int Client::getID(){
    return id;
}

std::string Client::toString(){
    std::string message = "";
    message += "Cedula: " + std::to_string(id) + "\n";
    message += "Nombre: " + name + " " + lastName + "\n";
    message += "Salario: " + std::to_string(wage) + "\n";
    message += "Provincia: " + province + "\n";
    message += "Civil: " + civil + "\n";
    return message;
}
