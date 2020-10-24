#ifndef __INHERIT_HPP__
#define __INHERIT_HPP__

#include <iostream>
#include <iomanip>
using namespace std;

struct HeadVpter {
};
class testClass : public virtual HeadVpter {

};

class BaseClass {
public:
    BaseClass(){}
    ~BaseClass(){}
public:
    virtual void Tprintf()= 0;
    virtual void Cswap(int a, int b) = 0;
};

class SuperClass : public BaseClass
{
public:
    SuperClass() {}
    ~SuperClass() {}

public:
    void Tprintf();
    void Cswap(int a, int b);
private:

};
void::SuperClass::Tprintf() {
    cout << "SuperClass Tprintf" << endl;
}

void ::SuperClass::Cswap(int a, int b) {
    cout << "SuperClass Cswap" << endl;
}

int main()
{

    SuperClass* supr = new(SuperClass);
    supr->Tprintf();
    int a=0,b=0;
    supr->Cswap(a,b);
    /* HeadVpter h; */
    /* testClass t; */
    /* cout << "h attr : " << hex << long(&h) << "t attr :" << hex << long(&t) << endl; */
    cout << "Hello world" << endl;
    return 0;
}

#endif
