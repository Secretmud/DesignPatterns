//
// Created by secret on 06.05.2021.
//

#include "Singleton.h"
#include "iostream"

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    this->init = 4;
}

Singleton* Singleton::getInstance() {
    if (Singleton::instance == nullptr) {
        Singleton::instance = new Singleton();
    }
    return Singleton::instance;
}

void Singleton::hello() {
    std::cout << "The magic number is set to: " << this->init << "\n";
}

void Singleton::set_numb(int number) {
    this->init = number;

}

int Singleton::get_numb() {
    return this->init;
}
