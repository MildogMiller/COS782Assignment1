#include <iostream>
#include <memory>
#include "myclass.h"
#include "mysimple.h"

using namespace std;

int main(){

    shared_ptr<mysimple<weak_ptr<myclass>>> ptr(make_shared<mysimple<weak_ptr<myclass>>>(1));
    shared_ptr<mysimple<weak_ptr<myclass>>> ptr2(make_shared<mysimple<weak_ptr<myclass>>>(2));
    shared_ptr<mysimple<weak_ptr<myclass>>> ptr3(make_shared<mysimple<weak_ptr<myclass>>>(3));
    ptr->setPointer(ptr2);
    ptr2->setPointer(ptr3);
    ptr3->setPointer(ptr);

    return 0;
}