#include <iostream>

int main(){

    return 0;
}

/*
Arrays, is a collection of the same variable, you refer to all of them by the same name

int scores[10]; is an array of 11 positions, from 0 to 10. declaring the array this way will limit the size of the array to 11.
declare and initialize.

size_t is a representation of unsigned int. only positive numbers.

size_t salaries [5] {1, 20, 50, 40, 50, 90};

if the size is not declared, the compiler will guess it from the amount of positions the arrays has.
unused array location are going to have junk data. 
if the array is declared and initialized partialy the remaining values will be setted to 0.
if the array is setted as "const"

this code sums all the values of the array
int scores []{2,5,8,2,5,6,9};
int sum {0};

range based for loops
for (int element : scores){
    sum += element;
}

cout<<"the sum of the scores array is : "<< sum <<endl; 

size of an array, with the std::size(array) function is possible to know the size of it during runtime
int count {std::size (array)};

another way to know the size of an array is to use the size_function on the whole array and on the first position, this way we will be able to know the amount of positions by the division of these 2, this is possible as arrays are a collection of the same data type, this makes is sizes constant.
*/