#ifndef INTERFACE_H
#define INTERFACE_H
#define INSERT                      1
#define SEARCH                      2
#define PRINT                       3
#define EXIT                        4

#include <iostream>
#include <string>
#include <Windows.h>

struct Interface{
    const int numberOfOptions = 4;
    void printMenu();
    void printOptionQuestion();
    void clearScreen();
    void printOptionError();
    void printContinueQuestion();
    void printYesOrNoError();
    void wait();
    void print(std::string message);
    int askOption();
    int askForInt();
    std::string askForString();
    bool validateYesOrNoEntry(std::string answer);
    bool parseYesOrNo(std::string answer);
    bool askYesOrNo();
    double askForDouble();
};

#endif // INTERFACE_H
