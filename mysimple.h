#ifndef MYSIMPLE_H
#define MYSIMPLE_H
#include "myclass.h"

using namespace std;

template<class T>
class mysimple:public myclass{
    public:
        mysimple(int num):myclass(num){
           
        }
        void setPointer(T inptr){
            T ptr;//make new pointer
            pointerTo=inptr;//assign
        }
    private:
    T pointerTo;
};

#endif