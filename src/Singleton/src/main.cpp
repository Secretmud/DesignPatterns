//
// Created by secret on 06.05.2021.
//
#include "iostream"
#include "Singleton.h"

int main(int argc, char *argv[]) {
    std::cout << "Getting a singleton instance\n";
    Singleton* foo = Singleton::getInstance();
    foo->hello();
    foo->set_numb(2);
    foo->hello();
    Singleton* bar = Singleton::getInstance();
    bar->hello();
    bar->set_numb(4);
    foo->hello();
    bar->hello();
    return 0;
}