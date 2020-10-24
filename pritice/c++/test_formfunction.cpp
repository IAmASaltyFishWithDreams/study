#include <iostream>


class Animal {
public : 
    int x;
};

Animal transforms() {  // ===>void transforms (Animal& result) {
    Animal xx;          //==> xx.Animal::Animal()               initalization
    return xx;          //==> result.Animal::Animal(xx)
                        // return;
}

void show (Animal x, int ax) {
    std::cout << "x addr : " << &x  << " x ax addr " << &ax << std::endl;
}

void showPoint (Animal& x) {
    std::cout << "Point x addr : " << &x << std::endl;       
}

int main()
{
    Animal a;
    int ax;
    std::cout << "a addr : " << &a << "ax :" << &ax << std::endl;
    show(a,ax);
    showPoint(a);
    std::cout << "Hello world" << std::endl;
    return 0;
}

