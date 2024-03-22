#include <iostream> 

int main(){ // entry point. first thing to run.

    std::cout<< "Hello World" << std::endl;
    return 0;
}
/*
std::alphatype

Basic operations
add, + sum
substract, - minus
divide, / divides..
modulus, % gives the rest of the division 
multiply, * multiplies..

associativity and precedence
most of all run like you read, others run from right to left. there is a specific precedence table for g++
multipling and division happen first than addition and substraction. parenthesis can change this. 

postfix value++, if you try to print value++, it will print the previous value and in the next use of the value, it will be a +1. same happens when substracting with --
prefix --value, same but applies in the first use, if in print you call ++value, in that print it will be added 1.


Math operations <cmath>
std::...
floor() -> round down
ceil() -> round up.
abs() -> absolute
cos()
sin()
tan()
log()
pow()
sqrt()
round() -> rounds to nearest?

*/