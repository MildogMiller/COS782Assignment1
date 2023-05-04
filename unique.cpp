#include <iostream>
#include <memory>
#include "myclass.h"

using namespace std;

int main(){
    unique_ptr<myclass> ptr(new myclass(1));
    unique_ptr<myclass> ptr2=ptr;
    ptr->setter(2);
    return 0;
}