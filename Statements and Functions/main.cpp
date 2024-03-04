#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main(){
    
    int first_number {3}; 
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    int sum2 = addNumbers(20,78);

    std::cout << "sum: " << sum << std::endl;
    std::cout << "sum: " << addNumbers(15,20) << std::endl; 
    std::cout << "sum: " << addNumbers(20,20) << std::endl;
    std::cout << "sum: " << sum2 << std::endl;
    return 0;
}

/*
    a statement is the basic unit of cumputation, end with ";". Declaration, you stablish something.
    Execution in order from top to bottom.

    Function structure
    Return type Name (param1, param2,paramn){
         Statements...
         return (end of function).
    }
*/