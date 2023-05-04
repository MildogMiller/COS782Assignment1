#include <iostream>
#include <memory>
#include "myclass.h"

using namespace std;

int main(){
    auto_ptr<myclass> ptr(new myclass(1));
    auto_ptr<myclass> ptr2=ptr;
    ptr->setter(2);
    return 0;
}