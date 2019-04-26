#ifndef CLIENT_H
#define CLIENT_H
#include "string"

struct Client{
    int id;
    double wage;
    std::string name;
    std::string lastName;
    std::string province;
    std::string civil;
    Client();
    Client(int id, double wage, std::string name,
           std::string province, std::string civil);
    int getID();
    std::string toString();
};

#endif // CLIENT_H
