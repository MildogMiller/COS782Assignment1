#ifndef MYCLASS_H
#define MYCLASS_H
#include<iostream>
class myclass{
    public:
        myclass(int num):num(num){
            std::cout<<"Contructor called with "<<num<<std::endl;
        }
        ~myclass(){
            std::cout<<"Destructor called with "<<num<<std::endl;
        }
        void setter(int innum){
            std::cout<<"Setter called with "<<innum<<" Original Num is "<<num<<std::endl;
            num = innum;
        }
    private:
        int num;
};
#endif