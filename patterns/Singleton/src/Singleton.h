//
// Created by secret on 06.05.2021.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

class Singleton {
    static Singleton *instance;
    public:
        static Singleton *getInstance();
        void hello();
        void set_numb(int number);
        int get_numb();
    private:
        Singleton();
        int init;
};

#endif //SINGLETON_SINGLETON_H