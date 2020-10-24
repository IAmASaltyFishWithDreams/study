
/* #pragma once */
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* class t_snp */
/* { */
/* public: */
/*     t_snp() {} */
/*     ~t_snp() {} */

/* private: */

/* }; */

int main () {
    char buffer[1024];
    snprintf(buffer, 1024, "/proc/%d/status", 7);
    std::cout << "buff : " << buffer << std::endl;
    std::cout << "buff len : " << strlen(buffer) << std::endl;
    std::cout << "buff sizeof : " << sizeof(buffer)<< std::endl;
    return 1;
}
