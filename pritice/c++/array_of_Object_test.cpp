#include <iostream>

class Parent {
public:
    Parent(int tempX, char tempY){
        this->x = tempX;
        this->y = tempY;
    }
    Parent() {
        this->x=0;
        this->y=0;
    }
public:
    int x ;
    char y;
};

int main()
{
    int * p = new int[10];
    for (int i = 1;i<=10; i++) {
        p[i] = i;
    }
    delete [10]p;
    /* std::cout<<p[4]; */
    /*
     *栗子1
    Parent obj[10] = {
        Parent(1,2),
        Parent()
    };*/
    //栗子2
    /* Parent obj[10] = { */
    /*     Parent(), */
    /*     Parent(1.0,1.0,0.5), */
    /*     1 */
    /* }; */
    // turn 
    //前3个显示初始化
    //Parent::Parent(&Parent[0])
    //Parent::Parent(&Parent[1],1.0,1.0,0.5)
    //Parent::Parent(&Parent[2],1,0,0)
    // void vec_new(&obj+3,sizeof(Parent),7,&Parent::Parent,0)
    /*伪代码
     * 
     * void vec_new ( void* array,  //数组起始adress or 0 如果是0则通过new运算符在heap上进行配置
     * size_t elem_size,            //每个class object 的大小
     * int elem_count,              //数组元素个数
     * void (*constructor)(void*),  //class 默认构造/构造   函数指针 这里会取符合参数的构造
     * void (*destructor)(void*,char))//class 默认析构/析构 函数指针 在vec_new中可能不是必要的还需自己考究，尽量有
     *
     *void vec_delete( void* array, //效果同上
     * size_t elem_size,
     * int elem_count, 
     * void (*destructor)(void*,char))//这里析构必须要 参数还可能根据不同的编译器生成的不一样
     *
     * */
    std::cout << "Hello world" << std::endl;
    return 0;
}

