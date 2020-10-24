#include <stdio.h>

#define CAT(N) X ## N //## 在宏定义中将两个字符连接起来，构成一个新的标识符
#define PRINTF_XN(n) printf("X" # n "=%d\n",X ## n); //# 将对应变量字符串化

int main()
{
    /* int i =1; */
    /*  printf("(i & 1) == 1: %d", (3 & 3) == 3); */
    int i;
    for(i=0; i<10;i++){
        int CAT(1) = 2;
        PRINTF_XN(1); //打印出X1=2

    }

    printf("当前源代码函数名：__FUNCTION__==%s\n",__FUNCTION__);
    printf("当前源代码行号：__LINE__==%d\n",__LINE__);
    printf("当前源代码文件名：__FILE__==%s\n",__FILE__);
    printf("当前编译日期〔注意和当前系统日期区别开来〕:__DATE__==%s\n",__DATE__);
    printf("当前编译时间〔注意和当前系统日期区别开来〕:__TIME__==%s\n",__TIME__);
    printf("当前系统时间戳：__TIMESTAMP__==%s\n",__TIMESTAMP__);
    printf("当要求程序严格遵循ANSIC标准时该标识符被赋值为1:__STDC__==%d\n",__STDC__);
    printf("当用C++编译程序编译时，标识符__cplusplus就会被定义:__cplusplus==%d\n",__cplusplus);

    return 0;

}
