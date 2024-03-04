#include <iostream>

int main(){
    auto result = (10 <=> 20) > 0;
    std::cout<< result <<std::endl;
}

/*
    Compiler Errors, doesnt compile

    Runtime Errors, compiles but doesnt run as expected.

    Warnings, something is wrong but not serious enough to make the compiler crash

*/ 