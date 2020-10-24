#include <functional>
#include <iostream>
#include <vector>


class Parent {
public:
    Parent() {
        for (int i = 1; i < 6; i++) {
            old.push_back(i);
        }
    }
public:
    std::vector<int> old;
};

class Child {
public:
    std::vector<int> news;
};

typedef std::function<void(Child&)> FuncG;

void pleasePerform(FuncG fucG, Child& c) {
    fucG(c);
    std::cout<< "lambld after---" << std::endl;
}

int main()
{
    Parent kParent;
    Child kChild;
    int test = 0;

    auto g = [&test,&kParent](Child & child)->void{
        for( ; test < (int)kParent.old.size();test++) {
            child.news.push_back(kParent.old.at(test));
        }
    };
    auto gSuper = [&test,&kParent](Child & child, int x)->void{
        for( ; test < (int)kParent.old.size();test++ ) {
            child.news.push_back(kParent.old.at(test));
        }  
    };
    /* auto gg = std::bind(gSuper,std::placeholders::_1,1);  // bind : prodce new type gSuper(paramete _1, 1) */
    /* pleasePerform(gg,kChild); */
    pleasePerform(g,kChild);
    for (int i = 0; i < (int)kChild.news.size();i++) {
        std::cout << "child at : " << kChild.news.at(i) << std::endl;
    }
    std::cout << "Hello world" << std::endl;
    return 0;
}

