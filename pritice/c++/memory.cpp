#include <iostream>

using namespace std;
struct extren_C {
    bool c_a;
    int c_b;
};
class Object {
public:
    Object(){}
    ~Object(){}
private:
    /* static int x; */
    int first;
    double three;
    bool second;
    /* char * four; */
    /* int * five; */
    /* extren_C c; */
};
class SuperObject : public virtual Object{
public:
    SuperObject(){}
    ~SuperObject(){}
private:
};

/* class SuperObjectX : public virtual Object{}; */
/* class Child : public virtual SuperObject,SuperObjectX{}; */
int main() {
    Object a;
    /* SuperObject a; */
    cout << "size of class " << sizeof(a) << endl;;
    return 0;
}

