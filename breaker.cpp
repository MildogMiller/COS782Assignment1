#include <iostream>
#include <memory>
#include "myclass.h"

using namespace std;

int main(){
    myclass* classptr = new myclass(1);
    auto_ptr<myclass> ptr(classptr); //unique_ptr<myclass> ptr(classptr); would do the same
    auto_ptr<myclass> ptr2(classptr); //unique_ptr<myclass> ptr2(classptr); would do the same
    ptr->setter(2);
    ptr2->setter(3);

    //ptr2.release(); If this line is added, the program will actually not run into an error. The fact this is possible makes it even more dangerous.
    return 0;
}