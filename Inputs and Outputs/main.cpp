#include <iostream>

int main(){
    int age;
    std::string name;
    std::cout << "Hello World!" << std::endl;
    /*
    std::cout << "I am " << 13 << " years old" << std::endl;
    std::cout << "How is your name?¿How old are you? " << std::endl;
    std::cin >> name >> age;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    */
    std::cerr << "Error Message: Something is wrong" << std::endl;
    std::clog << "Log Message: Something Happened" << std::endl;

    std::cout << "Taking as an input a space" << std::endl;
    std::cout << "How is your name?¿How old are you? " << std::endl;
    std::getline(std::cin, name);
    std::cin >> age;

    std::cout << "Your name is " << name << " and you are " << age << " years old." << std::endl;
    return 0;
}

/*
std::cout -> printing data to the console (terminal)
std::cin  -> reading data form the terminal
std::cerr -> printing errors to the console 
std::clog -> printing log messages to the console
*/